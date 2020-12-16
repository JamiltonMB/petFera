#ifndef CADASTARANIMAIS_HPP
#define CADASTARANIMAIS_HPP
#include <string.h>
#include "interface/notebookAbas.hpp"


GtkWidget *janelaCadAnimais;


static void fecharJanelaCadAnimais(GtkWidget *widget, gpointer data)
{
    atualizarListaAnimalPorFora();
}

void limparCamposCadAnimais(){
	gtk_entry_set_text(GTK_ENTRY(entry_nomeA), "");
}

/*
void inserirCadAnimais()
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

	rc = sqlite3_exec(db, sql.c_str(), NULL, 0, &zErrMsg);
   
	if(rc != SQLITE_OK){
		std::cout<<"Erro ao salvar dados"<<std::endl;
		sqlite3_free(zErrMsg);
	} else {
		std::cout<<"Dados salvos com sucesso"<<std::endl;
	}

   	sqlite3_close(db);
	
}
*/

static void cadastrarAnimais(gpointer data)
{
    //inserir();
    limparCamposCadAnimais();
    int totalMudas = gtk_spin_button_get_value_as_int(GTK_SPIN_BUTTON(button_totalMudasA));
    std::cout<<totalMudas<<std::endl;
}

static void comboBoxTipo(GtkComboBox *widget, gpointer user_data){
	GtkComboBox *combo_box = widget;
	gchar *tipo = gtk_combo_box_text_get_active_text (GTK_COMBO_BOX_TEXT(combo_box));
	int teste = gtk_combo_box_get_active(combo_box);
	std::cout<<teste<<std::endl;
	g_print("You chose %s\n", tipo);
	g_free(tipo);

}

void janelaCadastroAnimais()
{

	box_head = gtk_box_new(GTK_ORIENTATION_VERTICAL, 1);
	box = gtk_box_new(GTK_ORIENTATION_VERTICAL, 1);
	grid = gtk_grid_new();
	gtk_widget_show(grid);

	label = gtk_label_new("CADASTRO DE ANIMAIS\n");
	gtk_container_add(GTK_CONTAINER(box_head), label);
	gtk_widget_show(label);

	label = gtk_label_new("              NOME: ");
	gtk_widget_set_halign(label, GTK_ALIGN_END);
	entry_nomeA = gtk_entry_new();
	gtk_entry_set_max_length(GTK_ENTRY(entry_nomeA), 49);
	gtk_grid_attach(GTK_GRID(grid), label, 0, 1, 1, 1);
	gtk_grid_attach(GTK_GRID(grid), entry_nomeA, 1, 1, 1, 1);
	gtk_widget_show(label);
	gtk_widget_show(entry_nomeA);

	label = gtk_label_new("SEXO: ");
	entry_sexoA = gtk_entry_new();
	gtk_widget_set_halign(label, GTK_ALIGN_END);
	gtk_entry_set_max_length(GTK_ENTRY(entry_sexoA), 49);
	gtk_grid_attach(GTK_GRID(grid), label, 0, 2, 1, 1);
	gtk_grid_attach(GTK_GRID(grid), entry_sexoA, 1, 2, 1, 1);
	gtk_widget_show(label);
	gtk_widget_show(entry_sexoA);

	label = gtk_label_new("IDADE (ANOS): ");
	gtk_widget_set_halign(label, GTK_ALIGN_END);
	adjustment = gtk_adjustment_new(1.0, 0.0, 600.0, 1.0, 5.0, 0.0);
	button_idadeA = gtk_spin_button_new(adjustment, 1.0, 0);
	gtk_grid_attach(GTK_GRID(grid), label, 0, 3, 1, 1);
	gtk_grid_attach(GTK_GRID(grid), button_idadeA, 1, 3, 1, 1);
	gtk_widget_show(label);
	gtk_widget_show(button_idadeA);

	label = gtk_label_new("PESO (KG): ");
	gtk_widget_set_halign(label, GTK_ALIGN_END);
	adjustment = gtk_adjustment_new(0.001, 0.0, 1000.0, 0.001, 0.1, 0.0);
	button_pesoA = gtk_spin_button_new(adjustment, 0.001, 3);
	gtk_grid_attach(GTK_GRID(grid), label, 0, 4, 1, 1);
	gtk_grid_attach(GTK_GRID(grid), button_pesoA, 1, 4, 1, 1);
	gtk_widget_show(label);
	gtk_widget_show(button_pesoA);	

	label = gtk_label_new("COMPRIMENTO (METROS): ");
	gtk_widget_set_halign(label, GTK_ALIGN_END);
	adjustment = gtk_adjustment_new(0.001, 0.0, 10.0, 0.001, 0.1, 0.0);
	button_comprimentoA = gtk_spin_button_new(adjustment, 0.001, 3);
	gtk_grid_attach(GTK_GRID(grid), label, 0, 5, 1, 1);
	gtk_grid_attach(GTK_GRID(grid), button_comprimentoA, 1, 5, 1, 1);
	gtk_widget_show(label);
	gtk_widget_show(button_comprimentoA);	

	label = gtk_label_new("HABITAT: ");
	entry_habitatA = gtk_entry_new();
	gtk_widget_set_halign(label, GTK_ALIGN_END);
	gtk_entry_set_max_length(GTK_ENTRY(entry_habitatA), 49);
	gtk_grid_attach(GTK_GRID(grid), label, 0, 6, 1, 1);
	gtk_grid_attach(GTK_GRID(grid), entry_habitatA, 1, 6, 1, 1);
	gtk_widget_show(label);
	gtk_widget_show(entry_habitatA);

	label = gtk_label_new("Nº DE PATAS: ");
	gtk_widget_set_halign(label, GTK_ALIGN_END);
	adjustment = gtk_adjustment_new(1.0, 0.0, 100.0, 1.0, 5.0, 0.0);
	button_patasA = gtk_spin_button_new(adjustment, 1.0, 0);
	gtk_grid_attach(GTK_GRID(grid), label, 0, 7, 1, 1);
	gtk_grid_attach(GTK_GRID(grid), button_patasA, 1, 7, 1, 1);
	gtk_widget_show(label);
	gtk_widget_show(button_patasA);


	label = gtk_label_new("ESPÉCIE: ");
	gtk_widget_set_halign(label, GTK_ALIGN_END);
	entry_especieA = gtk_entry_new();
	gtk_entry_set_max_length(GTK_ENTRY(entry_especieA), 49);
	gtk_grid_attach(GTK_GRID(grid), label, 0, 8, 1, 1);
	gtk_grid_attach(GTK_GRID(grid), entry_especieA, 1, 8, 1, 1);
	gtk_widget_show(entry_especieA);
    gtk_widget_show(label);

	label = gtk_label_new("TIPO DE PELE: ");
	gtk_widget_set_halign(label, GTK_ALIGN_END);
	entry_tipoPeleA = gtk_entry_new();
	gtk_entry_set_max_length(GTK_ENTRY(entry_tipoPeleA), 49);
	gtk_grid_attach(GTK_GRID(grid), label, 0, 9, 1, 1);
	gtk_grid_attach(GTK_GRID(grid), entry_tipoPeleA, 1, 9, 1, 1);
	gtk_widget_show(entry_tipoPeleA);
    gtk_widget_show(label);

	label = gtk_label_new("TIPO DE REPRODUÇÃO: ");
	gtk_widget_set_halign(label, GTK_ALIGN_END);
	entry_tipoReproducaoA = gtk_entry_new();
	gtk_entry_set_max_length(GTK_ENTRY(entry_tipoReproducaoA), 49);
	gtk_grid_attach(GTK_GRID(grid), label, 0, 10, 1, 1);
	gtk_grid_attach(GTK_GRID(grid), entry_tipoReproducaoA, 1, 10, 1, 1);
	gtk_widget_show(entry_tipoReproducaoA);
    gtk_widget_show(label);    

	label = gtk_label_new("ALIMENTO: ");
	gtk_widget_set_halign(label, GTK_ALIGN_END);
	entry_alimentoA = gtk_entry_new();
	gtk_entry_set_max_length(GTK_ENTRY(entry_alimentoA), 49);
	gtk_grid_attach(GTK_GRID(grid), label, 0, 11, 1, 1);
	gtk_grid_attach(GTK_GRID(grid), entry_alimentoA, 1, 11, 1, 1);
	gtk_widget_show(entry_alimentoA);
    gtk_widget_show(label);

	label = gtk_label_new("AMEAÇADO DE EXTINÇÃO: ");
	gtk_widget_set_halign(label, GTK_ALIGN_END);	
	combo_ameacadoA = gtk_combo_box_text_new ();
	gtk_combo_box_text_append_text(GTK_COMBO_BOX_TEXT(combo_ameacadoA), "Não");
	gtk_combo_box_text_append_text(GTK_COMBO_BOX_TEXT(combo_ameacadoA), "Sim");
	gtk_combo_box_set_active(GTK_COMBO_BOX(combo_ameacadoA), 0);
	gtk_grid_attach(GTK_GRID(grid), label, 0, 12, 1, 1);
	gtk_grid_attach(GTK_GRID(grid), combo_ameacadoA, 1, 12, 1, 1);
	gtk_widget_show(combo_ameacadoA);
    gtk_widget_show(label);

	label = gtk_label_new(" VETERINÁRIO RESPONSÁVEL: ");
	gtk_widget_set_halign(label, GTK_ALIGN_END);
	entry_vetResponsavelA = gtk_entry_new();
	gtk_entry_set_max_length(GTK_ENTRY(entry_vetResponsavelA), 49);
	gtk_grid_attach(GTK_GRID(grid), label, 0, 13, 1, 1);
	gtk_grid_attach(GTK_GRID(grid), entry_vetResponsavelA, 1, 13, 1, 1);
	gtk_widget_show(entry_vetResponsavelA);
    gtk_widget_show(label);

	label = gtk_label_new(" TRATADOR RESPONSÁVEL: ");
	gtk_widget_set_halign(label, GTK_ALIGN_END);
	entry_TratadorA = gtk_entry_new();
	gtk_entry_set_max_length(GTK_ENTRY(entry_TratadorA), 49);
	gtk_grid_attach(GTK_GRID(grid), label, 0, 14, 1, 1);
	gtk_grid_attach(GTK_GRID(grid), entry_TratadorA, 1, 14, 1, 1);
	gtk_widget_show(entry_TratadorA);
    gtk_widget_show(label);              

	label = gtk_label_new("TIPO: ");
	gtk_widget_set_halign(label, GTK_ALIGN_END);	
	combo_tipoA = gtk_combo_box_text_new ();
	const char *tipos[] = {"anfibioExotico", "anfibioNativo", "anfibioDomestico", "mamiferoExotico", 
	"mamiferoNativo", "mamiferoDomestico", "aveExotico", "aveNativo", "aveDomestico", "reptilExotico", "reptilNativo", "reptilDomestico"};
	for (unsigned int i = 0; i < G_N_ELEMENTS(tipos); i++){
	  	gtk_combo_box_text_append_text (GTK_COMBO_BOX_TEXT(combo_tipoA), tipos[i]);
	}
	gtk_combo_box_set_active(GTK_COMBO_BOX(combo_tipoA), 0);
	g_signal_connect (combo_tipoA, "changed", G_CALLBACK(comboBoxTipo), NULL);
	gtk_grid_attach(GTK_GRID(grid), label, 0, 15, 1, 1);
	gtk_grid_attach(GTK_GRID(grid), combo_tipoA, 1, 15, 1, 1);
	gtk_widget_show(combo_tipoA);
    gtk_widget_show(label);	




	label = gtk_label_new("	PAIS DE ORIGEM: ");
	gtk_widget_set_halign(label, GTK_ALIGN_END);
	entry_paisOrigemA = gtk_entry_new();
	gtk_entry_set_max_length(GTK_ENTRY(entry_paisOrigemA), 49);
	gtk_grid_attach(GTK_GRID(grid), label, 2, 1, 1, 1);
	gtk_grid_attach(GTK_GRID(grid), entry_paisOrigemA, 3, 1, 1, 1);
	gtk_widget_show(label);
	gtk_widget_show(entry_paisOrigemA);

	label = gtk_label_new("	COR DO PÊLO: ");
	gtk_widget_set_halign(label, GTK_ALIGN_END);
	entry_corPeloA = gtk_entry_new();
	gtk_entry_set_max_length(GTK_ENTRY(entry_corPeloA), 49);
	gtk_grid_attach(GTK_GRID(grid), label, 2, 2, 1, 1);
	gtk_grid_attach(GTK_GRID(grid), entry_corPeloA, 3, 2, 1, 1);
	gtk_widget_show(label);
	gtk_widget_show(entry_corPeloA);

	label = gtk_label_new("	DENTES: ");
	gtk_widget_set_halign(label, GTK_ALIGN_END);
	entry_dentesA = gtk_entry_new();
	gtk_entry_set_max_length(GTK_ENTRY(entry_dentesA), 49);
	gtk_grid_attach(GTK_GRID(grid), label, 2, 3, 1, 1);
	gtk_grid_attach(GTK_GRID(grid), entry_dentesA, 3, 3, 1, 1);
	gtk_widget_show(label);
	gtk_widget_show(entry_dentesA);

	label = gtk_label_new("	UF DE ORIGEM: ");
	gtk_widget_set_halign(label, GTK_ALIGN_END);
	entry_ufOrigemA = gtk_entry_new();
	gtk_entry_set_max_length(GTK_ENTRY(entry_ufOrigemA), 49);
	gtk_grid_attach(GTK_GRID(grid), label, 2, 4, 1, 1);
	gtk_grid_attach(GTK_GRID(grid), entry_ufOrigemA, 3, 4, 1, 1);
	gtk_widget_show(label);
	gtk_widget_show(entry_ufOrigemA);

	label = gtk_label_new("	LICENÇA IBAMA: ");
	gtk_widget_set_halign(label, GTK_ALIGN_END);
	entry_licencaIBAMAA = gtk_entry_new();
	gtk_entry_set_max_length(GTK_ENTRY(entry_licencaIBAMAA), 49);
	gtk_grid_attach(GTK_GRID(grid), label, 2, 5, 1, 1);
	gtk_grid_attach(GTK_GRID(grid), entry_licencaIBAMAA, 3, 5, 1, 1);
	gtk_widget_show(label);
	gtk_widget_show(entry_licencaIBAMAA);

	label = gtk_label_new("	TOTAL DE MUDAS: ");
	gtk_widget_set_halign(label, GTK_ALIGN_END);
	adjustment = gtk_adjustment_new(1.0, 0.0, 1000.0, 1.0, 5.0, 0.0);
	button_totalMudasA = gtk_spin_button_new(adjustment, 1.0, 0);
	gtk_grid_attach(GTK_GRID(grid), label, 2, 6, 1, 1);
	gtk_grid_attach(GTK_GRID(grid), button_totalMudasA, 3, 6, 1, 1);
	gtk_widget_show(label);
	gtk_widget_show(button_totalMudasA);

	label = gtk_label_new("	TAMANHO DO BICO (CENTÍMETROS): ");
	gtk_widget_set_halign(label, GTK_ALIGN_END);
	adjustment = gtk_adjustment_new(0.001, 0.0, 150.0, 0.001, 0.1, 0.0);
	button_tamanhoBicoA = gtk_spin_button_new(adjustment, 0.001, 3);
	gtk_grid_attach(GTK_GRID(grid), label, 2, 7, 1, 1);
	gtk_grid_attach(GTK_GRID(grid), button_tamanhoBicoA, 3, 7, 1, 1);
	gtk_widget_show(label);
	gtk_widget_show(button_tamanhoBicoA);	

	label = gtk_label_new("	COR DAS PENAS: ");
	gtk_widget_set_halign(label, GTK_ALIGN_END);
	entry_corPenasA = gtk_entry_new();
	gtk_entry_set_max_length(GTK_ENTRY(entry_corPenasA), 49);
	gtk_grid_attach(GTK_GRID(grid), label, 2, 8, 1, 1);
	gtk_grid_attach(GTK_GRID(grid), entry_corPenasA, 3, 8, 1, 1);
	gtk_widget_show(label);
	gtk_widget_show(entry_corPenasA);

	label = gtk_label_new("TROCA DE PELE: ");
	gtk_widget_set_halign(label, GTK_ALIGN_END);	
	combo_troaPeleA = gtk_combo_box_text_new ();
	gtk_combo_box_text_append_text(GTK_COMBO_BOX_TEXT(combo_troaPeleA), "Não");
	gtk_combo_box_text_append_text(GTK_COMBO_BOX_TEXT(combo_troaPeleA), "Sim");
	gtk_combo_box_set_active(GTK_COMBO_BOX(combo_troaPeleA), 0);
	gtk_grid_attach(GTK_GRID(grid), label, 2, 9, 1, 1);
	gtk_grid_attach(GTK_GRID(grid), combo_troaPeleA, 3, 9, 1, 1);
	gtk_widget_show(combo_troaPeleA);
    gtk_widget_show(label);


	button = gtk_button_new_with_label("CADASTRAR");
	g_signal_connect(button, "clicked", G_CALLBACK(cadastrarAnimais), NULL);
	gtk_grid_attach(GTK_GRID(grid), button, 1, 27, 1, 1);
	gtk_widget_show(button);

	box_base = gtk_box_new(GTK_ORIENTATION_VERTICAL, 1);
	
	janelaCadAnimais = gtk_window_new(GTK_WINDOW_TOPLEVEL);
	gtk_window_set_position(GTK_WINDOW(janelaCadAnimais), GTK_WIN_POS_CENTER);
	gtk_window_set_default_size(GTK_WINDOW(janelaCadAnimais), 850, 550);
	gtk_container_set_border_width(GTK_CONTAINER(janelaCadAnimais), 10);
	gtk_window_set_title(GTK_WINDOW(janelaCadAnimais), "PET FERA");
	g_signal_connect(G_OBJECT(janelaCadAnimais), "destroy", G_CALLBACK(fecharJanelaCadAnimais), NULL);


	gtk_container_add(GTK_CONTAINER(box), grid);
	gtk_container_add(GTK_CONTAINER(box_base), box_head);
	gtk_container_add(GTK_CONTAINER(box_base), box);
	gtk_container_add(GTK_CONTAINER(janelaCadAnimais), box_base);

	gtk_widget_show(janelaCadAnimais);
	gtk_widget_show(box_base);
	gtk_widget_show(box_head);
	gtk_widget_show(box);

}

#endif