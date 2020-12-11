#ifndef CADASTARFUNCIONARIOS_HPP
#define CADASTARFUNCIONARIOS_HPP
#include <string.h>
#include "interface/notebookAbas.hpp"

bool isVeterinario=true;

GtkWidget *janela;


static int callback(void *NotUsed, int argc, char **argv, char **azColName)
{
	int i;
	for(i=0; i<argc; i++)
	{
		std::cout<<azColName[i]<<" = " << (argv[i] ? argv[i] : "NULL")<<"\n";
	}
	std::cout<<"\n";
	return 0;
}

static void fecharJanela(GtkWidget *widget, gpointer data)
{
    atualizarLista();
}

void limparCampos(){
	gtk_entry_set_text(GTK_ENTRY(entry_matricula), "");
	gtk_entry_set_text(GTK_ENTRY(entry_nome), "");
	gtk_entry_set_text(GTK_ENTRY(entry_idade), "");
	gtk_entry_set_text(GTK_ENTRY(entry_celular), "");
	gtk_entry_set_text(GTK_ENTRY(entry_endereco), "");
	gtk_entry_set_text(GTK_ENTRY(entry_cpf), "");
	gtk_entry_set_text(GTK_ENTRY(entry_cargo), "");
	gtk_entry_set_text(GTK_ENTRY(entry_crmv), "");
	gtk_entry_set_text(GTK_ENTRY(entry_nivel_seguranca), "");
}

void inserir()
{
	std::string isVet;
	if(isVeterinario){
		isVet="'1'";
	}else{
		isVet="'0'";
	}
	std::string aspas = "'";
	std::string aspasV = "',";
	std::string matricula = gtk_entry_get_text(GTK_ENTRY(entry_matricula));
	matricula = aspas+matricula+aspasV;
	std::string	nome = gtk_entry_get_text(GTK_ENTRY(entry_nome));
	nome = aspas+nome+aspasV;
	std::string idade = gtk_entry_get_text(GTK_ENTRY(entry_idade));
	idade = aspas+idade+aspasV;
	std::string celular = gtk_entry_get_text(GTK_ENTRY(entry_celular));
	celular = aspas+celular+aspasV;
	std::string	enderco = gtk_entry_get_text(GTK_ENTRY(entry_endereco));
	enderco = aspas+enderco+aspasV;
	std::string	cpf = gtk_entry_get_text(GTK_ENTRY(entry_cpf));
	cpf = aspas+cpf+aspasV;
	std::string	cargo = gtk_entry_get_text(GTK_ENTRY(entry_cargo));
	cargo = aspas+cargo+aspasV;
	std::string	crmv = gtk_entry_get_text(GTK_ENTRY(entry_crmv));
	crmv = aspas+crmv+aspasV;
	std::string	nivel_seguranca = gtk_entry_get_text(GTK_ENTRY(entry_nivel_seguranca));
	nivel_seguranca = aspas+nivel_seguranca+aspasV;
	//Inserindo dados
	
	
	sqlite3 *db;
	char *zErrMsg = 0;
	int rc;
	std::string sql;
   
   	rc = sqlite3_open("../database/dados.db", &db);
   
   	if(rc){
      	std::cout<<sqlite3_errmsg(db)<<std::endl;
      	return;
   	} else {
      	std::cout<<"Banco de dados aberto com sucesso!"<<std::endl;
   	}

   	if(isVeterinario){
	   	std::string sqlParte1 = "INSERT INTO FUNCIONARIOS(matricula,nome,idade,celular,endereco,cpf,cargo,crmv,isVeterinario) VALUES (";
	   	std::string sqlValores = matricula+nome+idade+celular+enderco+cpf+cargo+crmv+isVet;
	   	std::string sqlFim = ");";
	   	sql = sqlParte1+sqlValores+sqlFim;
   	}else{
	   	std::string sqlParte1 = "INSERT INTO FUNCIONARIOS(matricula,nome,idade,celular,endereco,cpf,cargo,nivel_seguranca,isVeterinario) VALUES (";
	   	std::string sqlValores = matricula+nome+idade+celular+enderco+cpf+cargo+nivel_seguranca+isVet;
	   	std::string sqlFim = ");";
	   	sql = sqlParte1+sqlValores+sqlFim;   		
   	}

	rc = sqlite3_exec(db, sql.c_str(), callback, 0, &zErrMsg);
   
	if(rc != SQLITE_OK){
		std::cout<<"Erro ao salvar dados"<<std::endl;
		sqlite3_free(zErrMsg);
	} else {
		std::cout<<"Dados salvos com sucesso"<<std::endl;
	}

   	sqlite3_close(db);
	
}

static void cadastrar(gpointer data)
{
    inserir();
    limparCampos();
}

static void radioVeterinario(gpointer data)
{
	gtk_widget_hide(label_tratador);
	gtk_widget_hide(entry_nivel_seguranca);
    gtk_widget_show(entry_crmv);
    gtk_widget_show(label_veterinario);
    isVeterinario=true;
}

static void radioTratador(gpointer data)
{
	gtk_widget_hide(label_veterinario);
	gtk_widget_hide(entry_crmv);
    gtk_widget_show(label_tratador);
    gtk_widget_show(entry_nivel_seguranca);
    isVeterinario=false;
}

void janelaCadastro()
{

	box_head = gtk_box_new(GTK_ORIENTATION_VERTICAL, 1);
	box = gtk_box_new(GTK_ORIENTATION_VERTICAL, 1);
	grid = gtk_grid_new();
	gtk_widget_show(grid);

	label = gtk_label_new("\nMÓDUDO DE CADASTRO DE FUNCIONÁRIOS\n");
	gtk_container_add(GTK_CONTAINER(box_head), label);
	gtk_widget_show(label);

	label = gtk_label_new("              MATRICULA: ");
	gtk_widget_set_halign(label, GTK_ALIGN_END);
	entry_matricula = gtk_entry_new();
	gtk_entry_set_max_length(GTK_ENTRY(entry_matricula), 49);
	gtk_grid_attach(GTK_GRID(grid), label, 0, 1, 1, 1);
	gtk_grid_attach(GTK_GRID(grid), entry_matricula, 1, 1, 1, 1);
	gtk_widget_show(label);
	gtk_widget_show(entry_matricula);

	label = gtk_label_new("NOME: ");
	entry_nome = gtk_entry_new();
	gtk_widget_set_halign(label, GTK_ALIGN_END);
	gtk_entry_set_max_length(GTK_ENTRY(entry_nome), 49);
	gtk_grid_attach(GTK_GRID(grid), label, 0, 2, 1, 1);
	gtk_grid_attach(GTK_GRID(grid), entry_nome, 1, 2, 1, 1);
	gtk_widget_show(label);
	gtk_widget_show(entry_nome);

	label = gtk_label_new("IDADE: ");
	entry_idade = gtk_entry_new();
	gtk_widget_set_halign(label, GTK_ALIGN_END);
	gtk_entry_set_max_length(GTK_ENTRY(entry_idade), 49);
	gtk_grid_attach(GTK_GRID(grid), label, 0, 3, 1, 1);
	gtk_grid_attach(GTK_GRID(grid), entry_idade, 1, 3, 1, 1);
	gtk_widget_show(label);
	gtk_widget_show(entry_idade);

	label = gtk_label_new("CELULAR: ");
	entry_celular = gtk_entry_new();
	gtk_widget_set_halign(label, GTK_ALIGN_END);
	gtk_entry_set_max_length(GTK_ENTRY(entry_celular), 49);
	gtk_grid_attach(GTK_GRID(grid), label, 0, 4, 1, 1);
	gtk_grid_attach(GTK_GRID(grid), entry_celular, 1, 4, 1, 1);
	gtk_widget_show(label);
	gtk_widget_show(entry_celular);

	label = gtk_label_new("ENDEREÇO: ");
	entry_endereco = gtk_entry_new();
	gtk_widget_set_halign(label, GTK_ALIGN_END);
	gtk_entry_set_max_length(GTK_ENTRY(entry_endereco), 49);
	gtk_grid_attach(GTK_GRID(grid), label, 0, 5, 1, 1);
	gtk_grid_attach(GTK_GRID(grid), entry_endereco, 1, 5, 1, 1);
	gtk_widget_show(label);
	gtk_widget_show(entry_endereco);

	label = gtk_label_new("CPF: ");
	entry_cpf = gtk_entry_new();
	gtk_widget_set_halign(label, GTK_ALIGN_END);
	gtk_entry_set_max_length(GTK_ENTRY(entry_cpf), 49);
	gtk_grid_attach(GTK_GRID(grid), label, 0, 6, 1, 1);
	gtk_grid_attach(GTK_GRID(grid), entry_cpf, 1, 6, 1, 1);
	gtk_widget_show(label);
	gtk_widget_show(entry_cpf);

	label = gtk_label_new("CARGO: ");
	entry_cargo = gtk_entry_new();
	gtk_widget_set_halign(label, GTK_ALIGN_END);
	gtk_entry_set_max_length(GTK_ENTRY(entry_cargo), 49);
	gtk_grid_attach(GTK_GRID(grid), label, 0, 7, 1, 1);
	gtk_grid_attach(GTK_GRID(grid), entry_cargo, 1, 7, 1, 1);
	gtk_widget_show(label);
	gtk_widget_show(entry_cargo);

	radio1 = gtk_radio_button_new_with_label(NULL, "Veterinário");
	radio2 = gtk_radio_button_new_with_label_from_widget(GTK_RADIO_BUTTON(radio1), "Tratador");
	g_signal_connect(radio1, "clicked", G_CALLBACK(radioVeterinario), NULL);
	g_signal_connect(radio2, "clicked", G_CALLBACK(radioTratador), NULL);
	gtk_grid_attach(GTK_GRID(grid), radio1, 1, 8, 1, 1);
	gtk_grid_attach(GTK_GRID(grid), radio2, 1, 9, 1, 1);
	gtk_widget_show(radio1);
	gtk_widget_show(radio2);

	label_veterinario = gtk_label_new("CRMV");
	gtk_widget_set_halign(label_veterinario, GTK_ALIGN_END);
	entry_crmv = gtk_entry_new();
	gtk_entry_set_max_length(GTK_ENTRY(entry_crmv), 49);
	gtk_grid_attach(GTK_GRID(grid), label_veterinario, 0, 10, 1, 1);
	gtk_grid_attach(GTK_GRID(grid), entry_crmv, 1, 10, 1, 1);
	gtk_widget_show(entry_crmv);
    gtk_widget_show(label_veterinario);

	label_tratador = gtk_label_new("Nível de Segurança");
	gtk_widget_set_halign(label_veterinario, GTK_ALIGN_END);
	entry_nivel_seguranca = gtk_entry_new();
	gtk_entry_set_max_length(GTK_ENTRY(entry_nivel_seguranca), 49);
	gtk_grid_attach(GTK_GRID(grid), label_tratador, 0, 11, 1, 1);
	gtk_grid_attach(GTK_GRID(grid), entry_nivel_seguranca, 1, 11, 1, 1);	
	
	button = gtk_button_new_with_label("CADASTRAR");
	g_signal_connect(button, "clicked", G_CALLBACK(cadastrar), NULL);
	gtk_grid_attach(GTK_GRID(grid), button, 1, 12, 1, 1);
	gtk_widget_show(button);


	box_base = gtk_box_new(GTK_ORIENTATION_VERTICAL, 1);
	
	janela = gtk_window_new(GTK_WINDOW_TOPLEVEL);
	gtk_window_set_position(GTK_WINDOW(janela), GTK_WIN_POS_CENTER);
	gtk_window_set_default_size(GTK_WINDOW(janela), 600, 300);
	gtk_container_set_border_width(GTK_CONTAINER(janela), 10);
	gtk_window_set_title(GTK_WINDOW(janela), "PET FERA");
	g_signal_connect(G_OBJECT(janela), "destroy", G_CALLBACK(fecharJanela), NULL);


	gtk_container_add(GTK_CONTAINER(box), grid);
	gtk_container_add(GTK_CONTAINER(box_base), box_head);
	gtk_container_add(GTK_CONTAINER(box_base), box);
	gtk_container_add(GTK_CONTAINER(janela), box_base);
	//gtk_container_add(GTK_CONTAINER(notebook), box_base);
	//gtk_notebook_set_tab_label_text (GTK_NOTEBOOK (notebook), box_base, "CADASTRAR FUNCIONÁRIOS");
	gtk_widget_show(janela);
	gtk_widget_show(box_base);
	gtk_widget_show(box_head);
	gtk_widget_show(box);

}

#endif