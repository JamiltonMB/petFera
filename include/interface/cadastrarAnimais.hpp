#ifndef CADASTARANIMAIS_HPP
#define CADASTARANIMAIS_HPP
#include <string.h>
#include "interface/notebookAbas.hpp"


GtkWidget *janelaCadAnimais;

tpAnimal tpCadastro = anfibioExotico;

static void fecharJanelaCadAnimais(GtkWidget *widget, gpointer data)
{
    atualizarListaAnimalPorFora();
}

void limparCamposCadAnimais(){
	gtk_entry_set_text(GTK_ENTRY(entry_nomeA), "");
}

void hideAtributosEspecificos(){
	gtk_widget_hide(label_paisOrigemA);
	gtk_widget_hide(entry_paisOrigemA);	
	gtk_widget_hide(label_corPeloA);
	gtk_widget_hide(entry_corPeloA);	
	gtk_widget_hide(label_dentesA);
	gtk_widget_hide(entry_dentesA);
	gtk_widget_hide(label_ufOrigemA);
	gtk_widget_hide(entry_ufOrigemA);
	gtk_widget_hide(label_licencaIBAMAA);
	gtk_widget_hide(entry_licencaIBAMAA);
	gtk_widget_hide(label_totalMudasA);
	gtk_widget_hide(button_totalMudasA);
	gtk_widget_hide(label_tamanhoBicoA);
	gtk_widget_hide(button_tamanhoBicoA);	
	gtk_widget_hide(label_corPenasA);
	gtk_widget_hide(entry_corPenasA);
	gtk_widget_hide(combo_trocaPeleA);
    gtk_widget_hide(label_trocaPeleA);
}

void inserirDadosAnimal(){

	std::string aspas = "'";
	std::string aspasV = "',";

	std::string nomeA = gtk_entry_get_text(GTK_ENTRY(entry_nomeA));
	nomeA = aspas+nomeA+aspasV;
	
	std::string sexoA = gtk_entry_get_text(GTK_ENTRY(entry_sexoA));
	sexoA = aspas+sexoA+aspasV;
	
	int idadeA = gtk_spin_button_get_value_as_int(GTK_SPIN_BUTTON(button_idadeA));
	std::string idadeStr = std::to_string(idadeA);
	idadeStr = aspas+idadeStr+aspasV;
	
	float pesoA = gtk_spin_button_get_value(GTK_SPIN_BUTTON(button_pesoA));
	std::string pesoStr = std::to_string(pesoA);
	pesoStr = aspas+pesoStr+aspasV;
	
	float comprimentoA = gtk_spin_button_get_value(GTK_SPIN_BUTTON(button_comprimentoA));
	std::string comprimentoStr = std::to_string(comprimentoA);
	comprimentoStr = aspas+comprimentoStr+aspasV;
	
	std::string habitatA = gtk_entry_get_text(GTK_ENTRY(entry_habitatA));
	habitatA = aspas+habitatA+aspasV;
	
	int patasA = gtk_spin_button_get_value_as_int(GTK_SPIN_BUTTON(button_patasA));
	std::string patasStr = std::to_string(patasA);
	patasStr = aspas+patasStr+aspasV;
	
	std::string especieA = gtk_entry_get_text(GTK_ENTRY(entry_especieA));
	especieA = aspas+especieA+aspasV;
	
	std::string tipoPeleA = gtk_entry_get_text(GTK_ENTRY(entry_tipoPeleA));
	tipoPeleA = aspas+tipoPeleA+aspasV;
	
	std::string tipoReproducaoA = gtk_entry_get_text(GTK_ENTRY(entry_tipoReproducaoA));
	tipoReproducaoA = aspas+tipoReproducaoA+aspasV;
	
	std::string alimentoA = gtk_entry_get_text(GTK_ENTRY(entry_alimentoA));
	alimentoA = aspas+alimentoA+aspasV;
	
	int ameacadoA = gtk_combo_box_get_active(GTK_COMBO_BOX(combo_ameacadoA));
	std::string ameacadoStr = std::to_string(ameacadoA);
	ameacadoStr = aspas+ameacadoStr+aspasV;
	
	std::string vetResponsavelA = gtk_entry_get_text(GTK_ENTRY(entry_vetResponsavelA));
	vetResponsavelA = aspas+vetResponsavelA+aspasV;
	
	std::string tratadorA = gtk_entry_get_text(GTK_ENTRY(entry_TratadorA));
	tratadorA = aspas+tratadorA+aspasV;
	
	int tipoA = gtk_combo_box_get_active(GTK_COMBO_BOX(combo_tipoA));
	std::string tipoStr = std::to_string(tipoA);
	tipoStr = aspas+tipoStr+aspasV;
	
	std::string paisOrigemA = gtk_entry_get_text(GTK_ENTRY(entry_paisOrigemA));
	paisOrigemA = aspas+paisOrigemA+aspasV;
	
	std::string corPeloA = gtk_entry_get_text(GTK_ENTRY(entry_corPeloA));
	corPeloA = aspas+corPeloA+aspasV;
	
	std::string dentesA = gtk_entry_get_text(GTK_ENTRY(entry_dentesA));
	dentesA = aspas+dentesA+aspasV;
	
	std::string ufOrigemA = gtk_entry_get_text(GTK_ENTRY(entry_ufOrigemA));
	ufOrigemA = aspas+ufOrigemA+aspasV;
	
	std::string licencaIBAMAA = gtk_entry_get_text(GTK_ENTRY(entry_licencaIBAMAA));
	licencaIBAMAA = aspas+licencaIBAMAA+aspasV;
	
	int totalMudasA = gtk_spin_button_get_value_as_int(GTK_SPIN_BUTTON(button_totalMudasA));
	std::string totalMudasStr = std::to_string(totalMudasA);
	totalMudasStr = aspas+totalMudasStr+aspasV;
	
	float tamanhoBicoA = gtk_spin_button_get_value(GTK_SPIN_BUTTON(button_tamanhoBicoA));
	std::string tamanhoBicoStr = std::to_string(tamanhoBicoA);
	tamanhoBicoStr = aspas+tamanhoBicoStr+aspasV;
	
	std::string corPenasA = gtk_entry_get_text(GTK_ENTRY(entry_corPenasA));
	corPenasA = aspas+corPenasA+aspasV;
	
	int trocaPeleA = gtk_combo_box_get_active(GTK_COMBO_BOX(combo_trocaPeleA));
	std::string trocaPeleStr = std::to_string(trocaPeleA);
	trocaPeleStr = aspas+trocaPeleStr+aspasV;

	std::string sqlTudo;

	sqlTudo = "(nome,sexo,idade,peso,comprimento,habitat,patas,especie,tipo_pele,tipo_reproducao,alimento,ameacadoDeEx,vetResponsavel,tratadorResponsavel,tipo,pais_origem,cor_pelo,dentes,UF_origem,licenca_IBAMA,total_mudas,tamanho_bico,corPenas,troca_de_pele)";

	std::string sql;
	std::string sqlInicio;
	std::string sqlValues;
	std::string sqlFim = ");";
	sqlInicio = "INSERT INTO ANIMAIS(nome,sexo,idade,peso,comprimento,habitat,patas,especie,tipo_pele,tipo_reproducao,alimento,ameacadoDeEx,vetResponsavel,tratadorResponsavel,tipo,total_mudas,pais_origem) VALUES (";
	sqlValues = "'0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0',";
	sqlValues = sqlValues.substr(0, sqlValues.size()-1);
	//sqlanfibioExoticoInicio = "INSERT INTO ANIMAIS(nome,sexo) VALUES (";
	//sqlanfibioExoticoValues = "'0','0'";	
	sql = sqlInicio+sqlValues+sqlFim;

	sqlite3 *db;
	char *zErrMsg = 0;
	int rc;
   
   	rc = sqlite3_open("../database/dados.db", &db);
   
   	if(rc){
   		std::cout<<"Erro ao abrir banco de dados"<<std::endl;
      	std::cout<<sqlite3_errmsg(db)<<std::endl;
      	return;
   	}
	rc = sqlite3_exec(db, sql.c_str(), NULL, 0, &zErrMsg);
   
	if(rc != SQLITE_OK){
		std::cout<<"Erro ao salvar dados"<<std::endl;
		sqlite3_free(zErrMsg);
	}
   	sqlite3_close(db);
}

static void cadastrarAnimais(gpointer data)
{
    inserirDadosAnimal();
    limparCamposCadAnimais();
}

static void comboBoxTipo(GtkComboBox *widget, gpointer user_data){
	GtkComboBox *combo_box = widget;
	//gchar *tipo = gtk_combo_box_text_get_active_text (GTK_COMBO_BOX_TEXT(combo_box));
	int value = gtk_combo_box_get_active(combo_box);
	switch (value){
		case 0:
			tpCadastro = anfibioExotico;
			hideAtributosEspecificos();
			gtk_widget_show(label_paisOrigemA);
			gtk_widget_show(entry_paisOrigemA);
			gtk_widget_show(label_totalMudasA);
			gtk_widget_show(button_totalMudasA);	
			break;
		case 1:
			tpCadastro = anfibioNativo;
			hideAtributosEspecificos();
			gtk_widget_show(label_ufOrigemA);
			gtk_widget_show(entry_ufOrigemA);
			gtk_widget_show(label_licencaIBAMAA);
			gtk_widget_show(entry_licencaIBAMAA);
			gtk_widget_show(label_totalMudasA);
			gtk_widget_show(button_totalMudasA);	
			break;
		case 2:
			tpCadastro = anfibioDomestico;
			hideAtributosEspecificos();
			gtk_widget_show(label_totalMudasA);
			gtk_widget_show(button_totalMudasA);
			break;
		case 3:
			tpCadastro = mamiferoExotico;
			hideAtributosEspecificos();
			gtk_widget_show(label_paisOrigemA);
			gtk_widget_show(entry_paisOrigemA);
			gtk_widget_show(label_corPeloA);
			gtk_widget_show(entry_corPeloA);		
			gtk_widget_show(label_dentesA);
			gtk_widget_show(entry_dentesA);	
			break;
		case 4:
			tpCadastro = mamiferoNativo;
			hideAtributosEspecificos();
			gtk_widget_show(label_corPeloA);
			gtk_widget_show(entry_corPeloA);
			gtk_widget_show(label_dentesA);
			gtk_widget_show(entry_dentesA);
			gtk_widget_show(label_ufOrigemA);
			gtk_widget_show(entry_ufOrigemA);
			gtk_widget_show(label_licencaIBAMAA);
			gtk_widget_show(entry_licencaIBAMAA);								
			break;
		case 5:
			tpCadastro = mamiferoDomestico;;
			hideAtributosEspecificos();
			gtk_widget_show(label_corPeloA);
			gtk_widget_show(entry_corPeloA);
			gtk_widget_show(label_dentesA);
			gtk_widget_show(entry_dentesA);	
			break;
		case 6:
			tpCadastro = aveExotico;
			hideAtributosEspecificos();
			gtk_widget_show(label_paisOrigemA);
			gtk_widget_show(entry_paisOrigemA);
			gtk_widget_show(label_tamanhoBicoA);
			gtk_widget_show(button_tamanhoBicoA);
			gtk_widget_show(label_corPenasA);
			gtk_widget_show(entry_corPenasA);	
			break;
		case 7:
			tpCadastro = aveNativo;
			hideAtributosEspecificos();
			gtk_widget_show(label_ufOrigemA);
			gtk_widget_show(entry_ufOrigemA);
			gtk_widget_show(label_licencaIBAMAA);
			gtk_widget_show(entry_licencaIBAMAA);	
			gtk_widget_show(label_tamanhoBicoA);
			gtk_widget_show(button_tamanhoBicoA);
			gtk_widget_show(label_corPenasA);
			gtk_widget_show(entry_corPenasA);	
			break;
		case 8:
			tpCadastro = aveDomestico;
			hideAtributosEspecificos();
			gtk_widget_show(label_tamanhoBicoA);
			gtk_widget_show(button_tamanhoBicoA);
			gtk_widget_show(label_corPenasA);
			gtk_widget_show(entry_corPenasA);	
			break;
		case 9:
			tpCadastro = reptilExotico;
			hideAtributosEspecificos();
			gtk_widget_show(label_paisOrigemA);
			gtk_widget_show(entry_paisOrigemA);
			gtk_widget_show(combo_trocaPeleA);
		    gtk_widget_show(label_trocaPeleA);		
			break;
		case 10:
			tpCadastro = reptilNativo;
			hideAtributosEspecificos();
			gtk_widget_show(label_ufOrigemA);
			gtk_widget_show(entry_ufOrigemA);
			gtk_widget_show(label_licencaIBAMAA);
			gtk_widget_show(entry_licencaIBAMAA);		
			gtk_widget_show(combo_trocaPeleA);
		    gtk_widget_show(label_trocaPeleA);		
			break;
		case 11:
			tpCadastro = reptilDomestico;
			hideAtributosEspecificos();
			gtk_widget_show(combo_trocaPeleA);
		    gtk_widget_show(label_trocaPeleA);	
			break;
		default:
			break;
	}
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

    //Atributos de classes derivadas
	label_paisOrigemA = gtk_label_new("	PAIS DE ORIGEM: ");
	gtk_widget_set_halign(label_paisOrigemA, GTK_ALIGN_END);
	entry_paisOrigemA = gtk_entry_new();
	gtk_entry_set_max_length(GTK_ENTRY(entry_paisOrigemA), 49);
	gtk_grid_attach(GTK_GRID(grid), label_paisOrigemA, 2, 1, 1, 1);
	gtk_grid_attach(GTK_GRID(grid), entry_paisOrigemA, 3, 1, 1, 1);
	//gtk_widget_show(label_paisOrigemA);
	//gtk_widget_show(entry_paisOrigemA);

	label_corPeloA = gtk_label_new("	COR DO PÊLO: ");
	gtk_widget_set_halign(label_corPeloA, GTK_ALIGN_END);
	entry_corPeloA = gtk_entry_new();
	gtk_entry_set_max_length(GTK_ENTRY(entry_corPeloA), 49);
	gtk_grid_attach(GTK_GRID(grid), label_corPeloA, 2, 2, 1, 1);
	gtk_grid_attach(GTK_GRID(grid), entry_corPeloA, 3, 2, 1, 1);
	//gtk_widget_show(label_corPeloA);
	//gtk_widget_show(entry_corPeloA);

	label_dentesA = gtk_label_new("	DENTES: ");
	gtk_widget_set_halign(label_dentesA, GTK_ALIGN_END);
	entry_dentesA = gtk_entry_new();
	gtk_entry_set_max_length(GTK_ENTRY(entry_dentesA), 49);
	gtk_grid_attach(GTK_GRID(grid), label_dentesA, 2, 3, 1, 1);
	gtk_grid_attach(GTK_GRID(grid), entry_dentesA, 3, 3, 1, 1);
	//gtk_widget_show(label_dentesA);
	//gtk_widget_show(entry_dentesA);

	label_ufOrigemA = gtk_label_new("	UF DE ORIGEM: ");
	gtk_widget_set_halign(label_ufOrigemA, GTK_ALIGN_END);
	entry_ufOrigemA = gtk_entry_new();
	gtk_entry_set_max_length(GTK_ENTRY(entry_ufOrigemA), 49);
	gtk_grid_attach(GTK_GRID(grid), label_ufOrigemA, 2, 4, 1, 1);
	gtk_grid_attach(GTK_GRID(grid), entry_ufOrigemA, 3, 4, 1, 1);
	//gtk_widget_show(label_ufOrigemA);
	//gtk_widget_show(entry_ufOrigemA);

	label_licencaIBAMAA = gtk_label_new("	LICENÇA IBAMA: ");
	gtk_widget_set_halign(label_licencaIBAMAA, GTK_ALIGN_END);
	entry_licencaIBAMAA = gtk_entry_new();
	gtk_entry_set_max_length(GTK_ENTRY(entry_licencaIBAMAA), 49);
	gtk_grid_attach(GTK_GRID(grid), label_licencaIBAMAA, 2, 5, 1, 1);
	gtk_grid_attach(GTK_GRID(grid), entry_licencaIBAMAA, 3, 5, 1, 1);
	//gtk_widget_show(label_licencaIBAMAA);
	//gtk_widget_show(entry_licencaIBAMAA);

	label_totalMudasA = gtk_label_new("	TOTAL DE MUDAS: ");
	gtk_widget_set_halign(label, GTK_ALIGN_END);
	adjustment = gtk_adjustment_new(1.0, 0.0, 1000.0, 1.0, 5.0, 0.0);
	button_totalMudasA = gtk_spin_button_new(adjustment, 1.0, 0);
	gtk_grid_attach(GTK_GRID(grid), label_totalMudasA, 2, 6, 1, 1);
	gtk_grid_attach(GTK_GRID(grid), button_totalMudasA, 3, 6, 1, 1);
	//gtk_widget_show(label_totalMudasA);
	//gtk_widget_show(button_totalMudasA);

	label_tamanhoBicoA = gtk_label_new("	TAMANHO DO BICO (CENTÍMETROS): ");
	gtk_widget_set_halign(label_tamanhoBicoA, GTK_ALIGN_END);
	adjustment = gtk_adjustment_new(0.001, 0.0, 150.0, 0.001, 0.1, 0.0);
	button_tamanhoBicoA = gtk_spin_button_new(adjustment, 0.001, 3);
	gtk_grid_attach(GTK_GRID(grid), label_tamanhoBicoA, 2, 7, 1, 1);
	gtk_grid_attach(GTK_GRID(grid), button_tamanhoBicoA, 3, 7, 1, 1);
	//gtk_widget_show(label_tamanhoBicoA);
	//gtk_widget_show(button_tamanhoBicoA);	

	label_corPenasA = gtk_label_new("	COR DAS PENAS: ");
	gtk_widget_set_halign(label_corPenasA, GTK_ALIGN_END);
	entry_corPenasA = gtk_entry_new();
	gtk_entry_set_max_length(GTK_ENTRY(entry_corPenasA), 49);
	gtk_grid_attach(GTK_GRID(grid), label_corPenasA, 2, 8, 1, 1);
	gtk_grid_attach(GTK_GRID(grid), entry_corPenasA, 3, 8, 1, 1);
	//gtk_widget_show(label_corPenasA);
	//gtk_widget_show(entry_corPenasA);

	label_trocaPeleA = gtk_label_new("TROCA DE PELE: ");
	gtk_widget_set_halign(label_trocaPeleA, GTK_ALIGN_END);	
	combo_trocaPeleA = gtk_combo_box_text_new ();
	gtk_combo_box_text_append_text(GTK_COMBO_BOX_TEXT(combo_trocaPeleA), "Não");
	gtk_combo_box_text_append_text(GTK_COMBO_BOX_TEXT(combo_trocaPeleA), "Sim");
	gtk_combo_box_set_active(GTK_COMBO_BOX(combo_trocaPeleA), 0);
	gtk_grid_attach(GTK_GRID(grid), label_trocaPeleA, 2, 9, 1, 1);
	gtk_grid_attach(GTK_GRID(grid), combo_trocaPeleA, 3, 9, 1, 1);
	//gtk_widget_show(combo_trocaPeleA);
    //gtk_widget_show(label_trocaPeleA);

    hideAtributosEspecificos();
	tpCadastro = anfibioExotico;
	gtk_widget_show(label_paisOrigemA);
	gtk_widget_show(entry_paisOrigemA);
	gtk_widget_show(label_totalMudasA);
	gtk_widget_show(button_totalMudasA);

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