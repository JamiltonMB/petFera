#ifndef EDITARFUNCIONARIOS_HPP
#define EDITARFUNCIONARIOS_HPP
#include <string.h>
#include "interface/notebookAbas.hpp"

bool isVeterinarioEditar=true;

GtkWidget *janela_editar;
GtkWidget *id_funcionario;
Tratador* tratador_recebido;
Veterinario* veterinario_recebido;

static int callback_editarFuncionario(void *NotUsed, int argc, char **argv, char **azColName)
{

	if(std::stoi(argv[10])==1){
		veterinario_recebido = new Veterinario(std::stoi(argv[0]),argv[1],argv[2],argv[3],argv[4],
			argv[5],argv[6],argv[7],argv[8]);
	}else{
		tratador_recebido = new Tratador(std::stoi(argv[0]),argv[1],argv[2],argv[3],argv[4],
			argv[5],argv[6],argv[7],argv[9]);	
	}
	return 0;
}


static void fecharJanelaEditar(GtkWidget *widget, gpointer data)
{
	tratador_recebido=nullptr;
	veterinario_recebido=nullptr;
	delete tratador_recebido;
	delete veterinario_recebido;
    atualizarLista();
}

static void radioVeterinarioEditar(gpointer data)
{
	gtk_widget_hide(label_tratador);
	gtk_widget_hide(entry_nivel_seguranca);
    gtk_widget_show(entry_crmv);
    gtk_widget_show(label_veterinario);
    isVeterinarioEditar=true;
}

static void radioTratadorEditar(gpointer data)
{
	gtk_widget_hide(label_veterinario);
	gtk_widget_hide(entry_crmv);
    gtk_widget_show(label_tratador);
    gtk_widget_show(entry_nivel_seguranca);
    isVeterinarioEditar=false;
}

static void editar(gpointer data)
{
    //inserir();
    //limparCampos();
}

void prepararEdicao(std::string id_editar){
	sqlite3 *db;
	char *zErrMsg = 0;
	int rc;
	std::string sql_inicio = "Select * from funcionarios where id=";
	std::string sql_fim = ";";
	std::string sql = sql_inicio+id_editar+sql_fim;
   
   	rc = sqlite3_open("../database/dados.db", &db);
   
   	if(rc){
      	std::cout<<sqlite3_errmsg(db)<<std::endl;
      	return;
   	}

   	rc = sqlite3_exec(db, sql.c_str(), callback_editarFuncionario, 0, &zErrMsg);
   
	if(rc != SQLITE_OK){
		std::cout<<"Erro ao buscar dados"<<std::endl;
		sqlite3_free(zErrMsg);
	}

   	sqlite3_close(db);

}

void setTextos(){
	if(veterinario_recebido!=nullptr){
   		gtk_entry_set_text(GTK_ENTRY(entry_matricula), veterinario_recebido->getMatricula().c_str());
   		gtk_entry_set_text(GTK_ENTRY(entry_nome), veterinario_recebido->getNome().c_str());
   		gtk_entry_set_text(GTK_ENTRY(entry_idade), veterinario_recebido->getIdade().c_str());
   		gtk_entry_set_text(GTK_ENTRY(entry_celular), veterinario_recebido->getCelular().c_str());
   		gtk_entry_set_text(GTK_ENTRY(entry_endereco), veterinario_recebido->getEndereco().c_str());
   		gtk_entry_set_text(GTK_ENTRY(entry_cpf), veterinario_recebido->getCpf().c_str());
   		gtk_entry_set_text(GTK_ENTRY(entry_cargo), veterinario_recebido->getCargo().c_str());
   		gtk_entry_set_text(GTK_ENTRY(entry_crmv), veterinario_recebido->getCrmv().c_str());

   	}
   	else if (tratador_recebido!=nullptr){
   		gtk_entry_set_text(GTK_ENTRY(entry_matricula), tratador_recebido->getMatricula().c_str());
   		gtk_entry_set_text(GTK_ENTRY(entry_nome), tratador_recebido->getNome().c_str());
   		gtk_entry_set_text(GTK_ENTRY(entry_idade), tratador_recebido->getIdade().c_str());
   		gtk_entry_set_text(GTK_ENTRY(entry_celular), tratador_recebido->getCelular().c_str());
   		gtk_entry_set_text(GTK_ENTRY(entry_endereco), tratador_recebido->getEndereco().c_str());
   		gtk_entry_set_text(GTK_ENTRY(entry_cpf), tratador_recebido->getCpf().c_str());
   		gtk_entry_set_text(GTK_ENTRY(entry_cargo), tratador_recebido->getCargo().c_str());
   		gtk_entry_set_text(GTK_ENTRY(entry_nivel_seguranca), tratador_recebido->getNivel_seguranca().c_str());
   	}
}

void janelaCadastroEditar(std::string idEditar)
{
	prepararEdicao(idEditar);

	box_head = gtk_box_new(GTK_ORIENTATION_VERTICAL, 1);
	box = gtk_box_new(GTK_ORIENTATION_VERTICAL, 1);
	grid = gtk_grid_new();
	gtk_widget_show(grid);

	label = gtk_label_new("\nEDITAR FUNCIONÁRIOS\n");
	gtk_container_add(GTK_CONTAINER(box_head), label);
	gtk_widget_show(label);
	
	label = gtk_label_new("              ID: ");
	gtk_widget_set_halign(label, GTK_ALIGN_END);
	id_funcionario = gtk_entry_new();
	gtk_entry_set_max_length(GTK_ENTRY(id_funcionario), 49);
	gtk_grid_attach(GTK_GRID(grid), label, 0, 0, 1, 1);
	gtk_grid_attach(GTK_GRID(grid), id_funcionario, 1, 0, 1, 1);
	gtk_widget_show(label);
	gtk_widget_show(id_funcionario);

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
	g_signal_connect(radio1, "clicked", G_CALLBACK(radioVeterinarioEditar), NULL);
	g_signal_connect(radio2, "clicked", G_CALLBACK(radioTratadorEditar), NULL);
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


	button = gtk_button_new_with_label("EDITAR");
	g_signal_connect(button, "clicked", G_CALLBACK(editar), NULL);
	gtk_grid_attach(GTK_GRID(grid), button, 1, 12, 1, 1);
	gtk_widget_show(button);

	setTextos();

	box_base = gtk_box_new(GTK_ORIENTATION_VERTICAL, 1);
	
	janela_editar = gtk_window_new(GTK_WINDOW_TOPLEVEL);
	gtk_window_set_position(GTK_WINDOW(janela_editar), GTK_WIN_POS_CENTER);
	gtk_window_set_default_size(GTK_WINDOW(janela_editar), 400, 500);
	gtk_container_set_border_width(GTK_CONTAINER(janela_editar), 10);
	gtk_window_set_title(GTK_WINDOW(janela_editar), "PET FERA");
	g_signal_connect(G_OBJECT(janela_editar), "destroy", G_CALLBACK(fecharJanelaEditar), NULL);

	gtk_container_add(GTK_CONTAINER(box), grid);
	gtk_container_add(GTK_CONTAINER(box_base), box_head);
	gtk_container_add(GTK_CONTAINER(box_base), box);
	gtk_container_add(GTK_CONTAINER(janela_editar), box_base);

	gtk_widget_show(janela_editar);
	gtk_widget_show(box_base);
	gtk_widget_show(box_head);
	gtk_widget_show(box);

}

#endif