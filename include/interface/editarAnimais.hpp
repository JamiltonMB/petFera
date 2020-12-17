#ifndef EDITARANIMAIS_HPP
#define EDITARANIMAIS_HPP
#include <string.h>
#include "interface/notebookAbas.hpp"

std::string id_Animal;

GtkWidget *janelaEditarAnimais;

tpAnimal tpEditar = anfibioExotico;

AnfibioExotico* anfibioExoticoC;
AnfibioNativo* anfibioNativoC;
AnfibioDomestico* anfibioDomesticoC;
MamiferoExotico* mamiferoExoticoC;
MamiferoNativo* mamiferoNativoC;
MamiferoDomestico* mamiferoDomesticoC;
AveExotico* aveExoticoC;
AveNativo* aveNativoC;
AveDomestica* aveDomesticaC;
ReptilExotico* reptilExoticoC;
ReptilNativo* reptilNativoC;
ReptilDomestico* reptilDomesticoC;

static int callback_editarAnimal(void *NotUsed, int argc, char **argv, char **azColName)
{
	tpAnimal tp;	
	switch(atoi(argv[15])){
		case 0:
			tp = anfibioExotico;
			anfibioExoticoC = new AnfibioExotico(std::stoi(argv[0]),argv[1],argv[2],std::stoi(argv[3]),
				std::stof(argv[4]), std::stof(argv[5]),argv[6],std::stoi(argv[7]),argv[8],argv[9],argv[10],argv[11],
				std::stoi(argv[12]),argv[13],argv[14],tp,std::stoi(argv[21]),argv[16]);
			break;
		case 1:
			tp = anfibioNativo;
			anfibioNativoC = new AnfibioNativo(std::stoi(argv[0]),argv[1],argv[2],std::stoi(argv[3]),
				std::stof(argv[4]), std::stof(argv[5]),argv[6],std::stoi(argv[7]),argv[8],argv[9],argv[10],argv[11],
				std::stoi(argv[12]),argv[13],argv[14],tp,std::stoi(argv[21]),argv[20],argv[19]);
			break;
		case 2:
			tp = anfibioDomestico;
			anfibioDomesticoC = new AnfibioDomestico(std::stoi(argv[0]),argv[1],argv[2],std::stoi(argv[3]),
				std::stof(argv[4]), std::stof(argv[5]),argv[6],std::stoi(argv[7]),argv[8],argv[9],argv[10],argv[11],
				std::stoi(argv[12]),argv[13],argv[14],tp,std::stoi(argv[21]));
			break;
		case 3:
			tp = mamiferoExotico;
			mamiferoExoticoC = new MamiferoExotico(std::stoi(argv[0]),argv[1],argv[2],std::stoi(argv[3]),
				std::stof(argv[4]), std::stof(argv[5]),argv[6],std::stoi(argv[7]),argv[8],argv[9],argv[10],argv[11],
				std::stoi(argv[12]),argv[13],argv[14],tp,argv[17],argv[18],argv[16]);
			break;
		case 4:
			tp = mamiferoNativo;
			mamiferoNativoC = new MamiferoNativo(std::stoi(argv[0]),argv[1],argv[2],std::stoi(argv[3]),
				std::stof(argv[4]), std::stof(argv[5]),argv[6],std::stoi(argv[7]),argv[8],argv[9],argv[10],argv[11],
				std::stoi(argv[12]),argv[13],argv[14],tp,argv[17],argv[18],argv[20],argv[19]);
			break;
		case 5:
			tp = mamiferoDomestico;
			mamiferoDomesticoC = new MamiferoDomestico(std::stoi(argv[0]),argv[1],argv[2],std::stoi(argv[3]),
				std::stof(argv[4]), std::stof(argv[5]),argv[6],std::stoi(argv[7]),argv[8],argv[9],argv[10],argv[11],
				std::stoi(argv[12]),argv[13],argv[14],tp,argv[17],argv[18]);
			break;
		case 6:
			tp = aveExotico;
			aveExoticoC = new AveExotico(std::stoi(argv[0]),argv[1],argv[2],std::stoi(argv[3]),
				std::stof(argv[4]), std::stof(argv[5]),argv[6],std::stoi(argv[7]),argv[8],argv[9],argv[10],argv[11],
				std::stoi(argv[12]),argv[13],argv[14],tp,std::stof(argv[22]),argv[23],argv[16]);			
			break;
		case 7:
			tp = aveNativo;
			aveNativoC = new AveNativo(std::stoi(argv[0]),argv[1],argv[2],std::stoi(argv[3]),
				std::stof(argv[4]), std::stof(argv[5]),argv[6],std::stoi(argv[7]),argv[8],argv[9],argv[10],argv[11],
				std::stoi(argv[12]),argv[13],argv[14],tp,std::stof(argv[22]),argv[23],argv[20],argv[19]);			
			break;
		case 8:
			tp = aveDomestico;
			aveDomesticaC = new AveDomestica(std::stoi(argv[0]),argv[1],argv[2],std::stoi(argv[3]),
				std::stof(argv[4]), std::stof(argv[5]),argv[6],std::stoi(argv[7]),argv[8],argv[9],argv[10],argv[11],
				std::stoi(argv[12]),argv[13],argv[14],tp,std::stof(argv[22]),argv[23]);				
			break;
		case 9:
			tp = reptilExotico;
			reptilExoticoC = new ReptilExotico(std::stoi(argv[0]),argv[1],argv[2],std::stoi(argv[3]),
				std::stof(argv[4]), std::stof(argv[5]),argv[6],std::stoi(argv[7]),argv[8],argv[9],argv[10],argv[11],
				std::stoi(argv[12]),argv[13],argv[14],tp,std::atoi(argv[24]),argv[16]);			
			break;
		case 10:
			tp = reptilNativo;
			reptilNativoC = new ReptilNativo(std::stoi(argv[0]),argv[1],argv[2],std::stoi(argv[3]),
				std::stof(argv[4]), std::stof(argv[5]),argv[6],std::stoi(argv[7]),argv[8],argv[9],argv[10],argv[11],
				std::stoi(argv[12]),argv[13],argv[14],tp,std::atoi(argv[24]),argv[20],argv[19]);			
			break;
		case 11:
			tp = reptilDomestico;
			reptilDomesticoC = new ReptilDomestico(std::stoi(argv[0]),argv[1],argv[2],std::stoi(argv[3]),
				std::stof(argv[4]), std::stof(argv[5]),argv[6],std::stoi(argv[7]),argv[8],argv[9],argv[10],argv[11],
				std::stoi(argv[12]),argv[13],argv[14],tp,std::atoi(argv[24]));			
			break;								
		default:
			std::cout<<"Parâmetro inválido"<<std::endl;
			break;									
	}
	return 0;
}


static void fecharJanelaEditarAnimais(GtkWidget *widget, gpointer data)
{
	anfibioExoticoC=nullptr;
	anfibioNativoC=nullptr;
	anfibioDomesticoC=nullptr;
	mamiferoExoticoC=nullptr;
	mamiferoNativoC=nullptr;
	mamiferoDomesticoC=nullptr;
	aveExoticoC=nullptr;
	aveNativoC=nullptr;
	aveDomesticaC=nullptr;
	reptilExoticoC=nullptr;
	reptilNativoC=nullptr;
	reptilDomesticoC=nullptr;
	delete anfibioExoticoC;
	delete anfibioNativoC;
	delete anfibioDomesticoC;
	delete mamiferoExoticoC;
	delete mamiferoNativoC;
	delete mamiferoDomesticoC;
	delete aveExoticoC;
	delete aveNativoC;
	delete aveDomesticaC;
	delete reptilExoticoC;
	delete reptilNativoC;
	delete reptilDomesticoC;		
    atualizarListaAnimalPorFora();
}

void limparCamposEditarAnimais(){
	gtk_entry_set_text(GTK_ENTRY(entry_nomeA), "");
}

void hideAtributosEspecificosEditar(){
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

void editarDadosAnimal(){

	std::string aspas = "'";
	std::string aspasV = "',";
	std::string virgula = ", ";
	std::string pontovirgula = ";";
	std::string coluna;

	std::string nomeA = gtk_entry_get_text(GTK_ENTRY(entry_nomeA));
	coluna = "nome = ";
	nomeA = coluna+aspas+nomeA+aspasV;
	
	std::string sexoA = gtk_entry_get_text(GTK_ENTRY(entry_sexoA));
	coluna = " sexo = ";
	sexoA = coluna+aspas+sexoA+aspasV;
	
	int idadeA = gtk_spin_button_get_value_as_int(GTK_SPIN_BUTTON(button_idadeA));
	std::string idadeStr = std::to_string(idadeA);
	coluna = " idade = ";
	idadeStr = coluna+aspas+idadeStr+aspasV;
	
	float pesoA = gtk_spin_button_get_value(GTK_SPIN_BUTTON(button_pesoA));
	std::string pesoStr = std::to_string(pesoA);
	coluna = " peso = ";
	pesoStr = coluna+aspas+pesoStr+aspasV;
	
	float comprimentoA = gtk_spin_button_get_value(GTK_SPIN_BUTTON(button_comprimentoA));
	std::string comprimentoStr = std::to_string(comprimentoA);
	coluna = "comprimento = ";
	comprimentoStr = coluna+aspas+comprimentoStr+aspasV;
	
	std::string habitatA = gtk_entry_get_text(GTK_ENTRY(entry_habitatA));
	coluna = "habitat = ";
	habitatA = coluna+aspas+habitatA+aspasV;
	
	int patasA = gtk_spin_button_get_value_as_int(GTK_SPIN_BUTTON(button_patasA));
	std::string patasStr = std::to_string(patasA);
	coluna = "patas = ";
	patasStr = coluna+aspas+patasStr+aspasV;
	
	std::string especieA = gtk_entry_get_text(GTK_ENTRY(entry_especieA));
	coluna = "especie = ";
	especieA = coluna+aspas+especieA+aspasV;
	
	std::string tipoPeleA = gtk_entry_get_text(GTK_ENTRY(entry_tipoPeleA));
	coluna = "tipo_pele = ";
	tipoPeleA = coluna+aspas+tipoPeleA+aspasV;
	
	std::string tipoReproducaoA = gtk_entry_get_text(GTK_ENTRY(entry_tipoReproducaoA));
	coluna = "tipo_reproducao = ";
	tipoReproducaoA = coluna+aspas+tipoReproducaoA+aspasV;
	
	std::string alimentoA = gtk_entry_get_text(GTK_ENTRY(entry_alimentoA));
	coluna = "alimento = ";
	alimentoA = coluna+aspas+alimentoA+aspasV;
	
	int ameacadoA = gtk_combo_box_get_active(GTK_COMBO_BOX(combo_ameacadoA));
	std::string ameacadoStr = std::to_string(ameacadoA);
	coluna = "ameacadoDeEx = ";
	ameacadoStr = coluna+aspas+ameacadoStr+aspasV;
	
	std::string vetResponsavelA = gtk_entry_get_text(GTK_ENTRY(entry_vetResponsavelA));
	coluna = "vetResponsavel = ";
	vetResponsavelA = coluna+aspas+vetResponsavelA+aspasV;
	
	std::string tratadorA = gtk_entry_get_text(GTK_ENTRY(entry_TratadorA));
	coluna = "tratadorResponsavel = ";
	tratadorA = coluna+aspas+tratadorA+aspasV;
	
	int tipoA = gtk_combo_box_get_active(GTK_COMBO_BOX(combo_tipoA));
	std::string tipoStr = std::to_string(tipoA);
	coluna = "tipo = ";
	tipoStr = coluna+aspas+tipoStr+aspasV;
	
	std::string paisOrigemA = gtk_entry_get_text(GTK_ENTRY(entry_paisOrigemA));
	coluna = "pais_origem = ";
	paisOrigemA = coluna+aspas+paisOrigemA+aspasV;
	
	std::string corPeloA = gtk_entry_get_text(GTK_ENTRY(entry_corPeloA));
	coluna = "cor_pelo = ";
	corPeloA = coluna+aspas+corPeloA+aspasV;
	
	std::string dentesA = gtk_entry_get_text(GTK_ENTRY(entry_dentesA));
	coluna = "dentes = ";
	dentesA = coluna+aspas+dentesA+aspasV;
	
	std::string ufOrigemA = gtk_entry_get_text(GTK_ENTRY(entry_ufOrigemA));
	coluna = "UF_origem = ";
	ufOrigemA = coluna+aspas+ufOrigemA+aspasV;

	std::string licencaIBAMAA = gtk_entry_get_text(GTK_ENTRY(entry_licencaIBAMAA));
	coluna = "licenca_IBAMA = ";
	licencaIBAMAA = coluna+aspas+licencaIBAMAA+aspasV;
	
	int totalMudasA = gtk_spin_button_get_value_as_int(GTK_SPIN_BUTTON(button_totalMudasA));
	std::string totalMudasStr = std::to_string(totalMudasA);
	coluna = "total_mudas = ";
	totalMudasStr = coluna+aspas+totalMudasStr+aspasV;
	
	float tamanhoBicoA = gtk_spin_button_get_value(GTK_SPIN_BUTTON(button_tamanhoBicoA));
	std::string tamanhoBicoStr = std::to_string(tamanhoBicoA);
	coluna = "tamanho_bico = ";
	tamanhoBicoStr = coluna+aspas+tamanhoBicoStr+aspasV;
	
	std::string corPenasA = gtk_entry_get_text(GTK_ENTRY(entry_corPenasA));
	coluna = "corPenas = ";
	corPenasA = coluna+aspas+corPenasA+aspasV;
	
	int trocaPeleA = gtk_combo_box_get_active(GTK_COMBO_BOX(combo_trocaPeleA));
	std::string trocaPeleStr = std::to_string(trocaPeleA);
	coluna = "troca_de_pele = ";
	trocaPeleStr = coluna+aspas+trocaPeleStr+aspasV;

	//std::string sqlTudo;
	//sqlTudo = "(nome,sexo,idade,peso,comprimento,habitat,patas,especie,tipo_pele,tipo_reproducao,alimento,ameacadoDeEx,vetResponsavel,tratadorResponsavel,tipo,pais_origem,cor_pelo,dentes,UF_origem,licenca_IBAMA,total_mudas,tamanho_bico,corPenas,troca_de_pele)";

	std::string sql;
	std::string sqlInicio = "UPDATE animais set ";
	std::string sqlValues;
	std::string sqlFim = "where id=";
	sqlFim = sqlFim+id_Animal+pontovirgula;
	
	switch (tipoA){
		case 0:
			sqlValues = nomeA+sexoA+idadeStr+pesoStr+comprimentoStr+habitatA+patasStr+especieA+tipoPeleA+tipoReproducaoA+alimentoA+ameacadoStr+vetResponsavelA+tratadorA+tipoStr+totalMudasStr+paisOrigemA;
			sqlValues = sqlValues.substr(0, sqlValues.size()-1);	
			break;
		case 1:
			sqlValues = nomeA+sexoA+idadeStr+pesoStr+comprimentoStr+habitatA+patasStr+especieA+tipoPeleA+tipoReproducaoA+alimentoA+ameacadoStr+vetResponsavelA+tratadorA+tipoStr+totalMudasStr+licencaIBAMAA+ufOrigemA;
			sqlValues = sqlValues.substr(0, sqlValues.size()-1);
			break;
		case 2:
			sqlValues = nomeA+sexoA+idadeStr+pesoStr+comprimentoStr+habitatA+patasStr+especieA+tipoPeleA+tipoReproducaoA+alimentoA+ameacadoStr+vetResponsavelA+tratadorA+tipoStr+totalMudasStr;
			sqlValues = sqlValues.substr(0, sqlValues.size()-1);
			break;
		case 3:
			sqlValues = nomeA+sexoA+idadeStr+pesoStr+comprimentoStr+habitatA+patasStr+especieA+tipoPeleA+tipoReproducaoA+alimentoA+ameacadoStr+vetResponsavelA+tratadorA+tipoStr+corPeloA+dentesA+paisOrigemA;
			sqlValues = sqlValues.substr(0, sqlValues.size()-1);
			break;
		case 4:
			sqlValues = nomeA+sexoA+idadeStr+pesoStr+comprimentoStr+habitatA+patasStr+especieA+tipoPeleA+tipoReproducaoA+alimentoA+ameacadoStr+vetResponsavelA+tratadorA+tipoStr+corPeloA+dentesA+licencaIBAMAA+ufOrigemA;
			sqlValues = sqlValues.substr(0, sqlValues.size()-1);							
			break;
		case 5:
			sqlValues = nomeA+sexoA+idadeStr+pesoStr+comprimentoStr+habitatA+patasStr+especieA+tipoPeleA+tipoReproducaoA+alimentoA+ameacadoStr+vetResponsavelA+tratadorA+tipoStr+corPeloA+dentesA;
			sqlValues = sqlValues.substr(0, sqlValues.size()-1);
			break;
		case 6:
			sqlValues = nomeA+sexoA+idadeStr+pesoStr+comprimentoStr+habitatA+patasStr+especieA+tipoPeleA+tipoReproducaoA+alimentoA+ameacadoStr+vetResponsavelA+tratadorA+tipoStr+tamanhoBicoStr+corPenasA+paisOrigemA;
			sqlValues = sqlValues.substr(0, sqlValues.size()-1);
			break;
		case 7:
			sqlValues = nomeA+sexoA+idadeStr+pesoStr+comprimentoStr+habitatA+patasStr+especieA+tipoPeleA+tipoReproducaoA+alimentoA+ameacadoStr+vetResponsavelA+tratadorA+tipoStr+tamanhoBicoStr+corPenasA+licencaIBAMAA+ufOrigemA;
			sqlValues = sqlValues.substr(0, sqlValues.size()-1);	
			break;
		case 8:
			sqlValues = nomeA+sexoA+idadeStr+pesoStr+comprimentoStr+habitatA+patasStr+especieA+tipoPeleA+tipoReproducaoA+alimentoA+ameacadoStr+vetResponsavelA+tratadorA+tipoStr+tamanhoBicoStr+corPenasA;
			sqlValues = sqlValues.substr(0, sqlValues.size()-1);	
			break;
		case 9:
			sqlValues = nomeA+sexoA+idadeStr+pesoStr+comprimentoStr+habitatA+patasStr+especieA+tipoPeleA+tipoReproducaoA+alimentoA+ameacadoStr+vetResponsavelA+tratadorA+tipoStr+trocaPeleStr+paisOrigemA;
			sqlValues = sqlValues.substr(0, sqlValues.size()-1);	
			break;
		case 10:
			sqlValues = nomeA+sexoA+idadeStr+pesoStr+comprimentoStr+habitatA+patasStr+especieA+tipoPeleA+tipoReproducaoA+alimentoA+ameacadoStr+vetResponsavelA+tratadorA+tipoStr+trocaPeleStr+licencaIBAMAA+ufOrigemA;
			sqlValues = sqlValues.substr(0, sqlValues.size()-1);	
			break;
		case 11:
			sqlValues = nomeA+sexoA+idadeStr+pesoStr+comprimentoStr+habitatA+patasStr+especieA+tipoPeleA+tipoReproducaoA+alimentoA+ameacadoStr+vetResponsavelA+tratadorA+tipoStr+trocaPeleStr;
			sqlValues = sqlValues.substr(0, sqlValues.size()-1);
			break;
		default:
			break;
	}	

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

static void editarAnimais(gpointer data)
{
    editarDadosAnimal();
    limparCamposEditarAnimais();
}

static void comboBoxTipoEditar(GtkComboBox *widget, gpointer user_data){
	GtkComboBox *combo_box = widget;
	int value = gtk_combo_box_get_active(combo_box);
	switch (value){
		case 0:
			tpEditar = anfibioExotico;
			hideAtributosEspecificosEditar();
			gtk_widget_show(label_paisOrigemA);
			gtk_widget_show(entry_paisOrigemA);
			gtk_widget_show(label_totalMudasA);
			gtk_widget_show(button_totalMudasA);	
			break;
		case 1:
			tpEditar = anfibioNativo;
			hideAtributosEspecificosEditar();
			gtk_widget_show(label_ufOrigemA);
			gtk_widget_show(entry_ufOrigemA);
			gtk_widget_show(label_licencaIBAMAA);
			gtk_widget_show(entry_licencaIBAMAA);
			gtk_widget_show(label_totalMudasA);
			gtk_widget_show(button_totalMudasA);	
			break;
		case 2:
			tpEditar = anfibioDomestico;
			hideAtributosEspecificosEditar();
			gtk_widget_show(label_totalMudasA);
			gtk_widget_show(button_totalMudasA);
			break;
		case 3:
			tpEditar = mamiferoExotico;
			hideAtributosEspecificosEditar();
			gtk_widget_show(label_paisOrigemA);
			gtk_widget_show(entry_paisOrigemA);
			gtk_widget_show(label_corPeloA);
			gtk_widget_show(entry_corPeloA);		
			gtk_widget_show(label_dentesA);
			gtk_widget_show(entry_dentesA);	
			break;
		case 4:
			tpEditar = mamiferoNativo;
			hideAtributosEspecificosEditar();
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
			tpEditar = mamiferoDomestico;;
			hideAtributosEspecificosEditar();
			gtk_widget_show(label_corPeloA);
			gtk_widget_show(entry_corPeloA);
			gtk_widget_show(label_dentesA);
			gtk_widget_show(entry_dentesA);	
			break;
		case 6:
			tpEditar = aveExotico;
			hideAtributosEspecificosEditar();
			gtk_widget_show(label_paisOrigemA);
			gtk_widget_show(entry_paisOrigemA);
			gtk_widget_show(label_tamanhoBicoA);
			gtk_widget_show(button_tamanhoBicoA);
			gtk_widget_show(label_corPenasA);
			gtk_widget_show(entry_corPenasA);	
			break;
		case 7:
			tpEditar = aveNativo;
			hideAtributosEspecificosEditar();
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
			tpEditar = aveDomestico;
			hideAtributosEspecificosEditar();
			gtk_widget_show(label_tamanhoBicoA);
			gtk_widget_show(button_tamanhoBicoA);
			gtk_widget_show(label_corPenasA);
			gtk_widget_show(entry_corPenasA);	
			break;
		case 9:
			tpEditar = reptilExotico;
			hideAtributosEspecificosEditar();
			gtk_widget_show(label_paisOrigemA);
			gtk_widget_show(entry_paisOrigemA);
			gtk_widget_show(combo_trocaPeleA);
		    gtk_widget_show(label_trocaPeleA);		
			break;
		case 10:
			tpEditar = reptilNativo;
			hideAtributosEspecificosEditar();
			gtk_widget_show(label_ufOrigemA);
			gtk_widget_show(entry_ufOrigemA);
			gtk_widget_show(label_licencaIBAMAA);
			gtk_widget_show(entry_licencaIBAMAA);		
			gtk_widget_show(combo_trocaPeleA);
		    gtk_widget_show(label_trocaPeleA);		
			break;
		case 11:
			tpEditar = reptilDomestico;
			hideAtributosEspecificosEditar();
			gtk_widget_show(combo_trocaPeleA);
		    gtk_widget_show(label_trocaPeleA);	
			break;
		default:
			break;
	}
}

void prepararEdicaoAnimais(std::string id_editar){
	sqlite3 *db;
	char *zErrMsg = 0;
	int rc;
	std::string sql_inicio = "Select * from ANIMAIS where id=";
	std::string sql_fim = ";";
	std::string sql = sql_inicio+id_editar+sql_fim;
   
   	rc = sqlite3_open("../database/dados.db", &db);
   
   	if(rc){
      	std::cout<<sqlite3_errmsg(db)<<std::endl;
      	return;
   	}

   	rc = sqlite3_exec(db, sql.c_str(), callback_editarAnimal, 0, &zErrMsg);
   
	if(rc != SQLITE_OK){
		std::cout<<"Erro ao buscar dados"<<std::endl;
		sqlite3_free(zErrMsg);
	}
   	sqlite3_close(db);
}


void setTextosEditarAnimais(){
	if(anfibioExoticoC!=nullptr){
		gtk_entry_set_text(GTK_ENTRY(entry_nomeA), anfibioExoticoC->getNome().c_str());
		gtk_entry_set_text(GTK_ENTRY(entry_sexoA), anfibioExoticoC->getSexo().c_str());
		gtk_spin_button_set_value(GTK_SPIN_BUTTON(button_idadeA), anfibioExoticoC->getIdade());
		gtk_spin_button_set_value(GTK_SPIN_BUTTON(button_pesoA), anfibioExoticoC->getPeso());
		gtk_spin_button_set_value(GTK_SPIN_BUTTON(button_comprimentoA), anfibioExoticoC->getComprimento());
		gtk_entry_set_text(GTK_ENTRY(entry_habitatA), anfibioExoticoC->getHabitat().c_str());
		gtk_spin_button_set_value(GTK_SPIN_BUTTON(button_patasA), anfibioExoticoC->getPatas());
		gtk_entry_set_text(GTK_ENTRY(entry_especieA), anfibioExoticoC->getEspecie().c_str());		
		gtk_entry_set_text(GTK_ENTRY(entry_tipoPeleA), anfibioExoticoC->getTipo_pele().c_str());
		gtk_entry_set_text(GTK_ENTRY(entry_tipoReproducaoA), anfibioExoticoC->getTipo_reproducao().c_str());
		gtk_entry_set_text(GTK_ENTRY(entry_alimentoA), anfibioExoticoC->getAlimento().c_str());
		gtk_combo_box_set_active(GTK_COMBO_BOX(combo_ameacadoA), anfibioExoticoC->getAmeacadoDeEx());
		gtk_entry_set_text(GTK_ENTRY(entry_vetResponsavelA), anfibioExoticoC->getVetResposavel().c_str());
		gtk_entry_set_text(GTK_ENTRY(entry_TratadorA), anfibioExoticoC->getTratadorResponsavel().c_str());
		gtk_combo_box_set_active(GTK_COMBO_BOX(combo_tipoA), anfibioExoticoC->getTpAnimal());
		gtk_entry_set_text(GTK_ENTRY(entry_paisOrigemA), anfibioExoticoC->getPais_origem().c_str());
		gtk_spin_button_set_value(GTK_SPIN_BUTTON(button_totalMudasA), anfibioExoticoC->getMudas());
	}
	else if(anfibioNativoC!=nullptr){
		gtk_entry_set_text(GTK_ENTRY(entry_nomeA), anfibioNativoC->getNome().c_str());
		gtk_entry_set_text(GTK_ENTRY(entry_sexoA), anfibioNativoC->getSexo().c_str());
		gtk_spin_button_set_value(GTK_SPIN_BUTTON(button_idadeA), anfibioNativoC->getIdade());
		gtk_spin_button_set_value(GTK_SPIN_BUTTON(button_pesoA), anfibioNativoC->getPeso());
		gtk_spin_button_set_value(GTK_SPIN_BUTTON(button_comprimentoA), anfibioNativoC->getComprimento());
		gtk_entry_set_text(GTK_ENTRY(entry_habitatA), anfibioNativoC->getHabitat().c_str());
		gtk_spin_button_set_value(GTK_SPIN_BUTTON(button_patasA), anfibioNativoC->getPatas());
		gtk_entry_set_text(GTK_ENTRY(entry_especieA), anfibioNativoC->getEspecie().c_str());		
		gtk_entry_set_text(GTK_ENTRY(entry_tipoPeleA), anfibioNativoC->getTipo_pele().c_str());
		gtk_entry_set_text(GTK_ENTRY(entry_tipoReproducaoA), anfibioNativoC->getTipo_reproducao().c_str());
		gtk_entry_set_text(GTK_ENTRY(entry_alimentoA), anfibioNativoC->getAlimento().c_str());
		gtk_combo_box_set_active(GTK_COMBO_BOX(combo_ameacadoA), anfibioNativoC->getAmeacadoDeEx());
		gtk_entry_set_text(GTK_ENTRY(entry_vetResponsavelA), anfibioNativoC->getVetResposavel().c_str());
		gtk_entry_set_text(GTK_ENTRY(entry_TratadorA), anfibioNativoC->getTratadorResponsavel().c_str());
		gtk_combo_box_set_active(GTK_COMBO_BOX(combo_tipoA), anfibioNativoC->getTpAnimal());
		gtk_entry_set_text(GTK_ENTRY(entry_ufOrigemA), anfibioNativoC->getUF_origem().c_str());
		gtk_entry_set_text(GTK_ENTRY(entry_licencaIBAMAA), anfibioNativoC->getLicenca_IBAMA().c_str());
		gtk_spin_button_set_value(GTK_SPIN_BUTTON(button_totalMudasA), anfibioNativoC->getMudas());
	}
	else if(anfibioDomesticoC!=nullptr){
		gtk_entry_set_text(GTK_ENTRY(entry_nomeA), anfibioDomesticoC->getNome().c_str());
		gtk_entry_set_text(GTK_ENTRY(entry_sexoA), anfibioDomesticoC->getSexo().c_str());
		gtk_spin_button_set_value(GTK_SPIN_BUTTON(button_idadeA), anfibioDomesticoC->getIdade());
		gtk_spin_button_set_value(GTK_SPIN_BUTTON(button_pesoA), anfibioDomesticoC->getPeso());
		gtk_spin_button_set_value(GTK_SPIN_BUTTON(button_comprimentoA), anfibioDomesticoC->getComprimento());
		gtk_entry_set_text(GTK_ENTRY(entry_habitatA), anfibioDomesticoC->getHabitat().c_str());
		gtk_spin_button_set_value(GTK_SPIN_BUTTON(button_patasA), anfibioDomesticoC->getPatas());
		gtk_entry_set_text(GTK_ENTRY(entry_especieA), anfibioDomesticoC->getEspecie().c_str());		
		gtk_entry_set_text(GTK_ENTRY(entry_tipoPeleA), anfibioDomesticoC->getTipo_pele().c_str());
		gtk_entry_set_text(GTK_ENTRY(entry_tipoReproducaoA), anfibioDomesticoC->getTipo_reproducao().c_str());
		gtk_entry_set_text(GTK_ENTRY(entry_alimentoA), anfibioDomesticoC->getAlimento().c_str());
		gtk_combo_box_set_active(GTK_COMBO_BOX(combo_ameacadoA), anfibioDomesticoC->getAmeacadoDeEx());
		gtk_entry_set_text(GTK_ENTRY(entry_vetResponsavelA), anfibioDomesticoC->getVetResposavel().c_str());
		gtk_entry_set_text(GTK_ENTRY(entry_TratadorA), anfibioDomesticoC->getTratadorResponsavel().c_str());
		gtk_combo_box_set_active(GTK_COMBO_BOX(combo_tipoA), anfibioDomesticoC->getTpAnimal());
		gtk_spin_button_set_value(GTK_SPIN_BUTTON(button_totalMudasA), anfibioDomesticoC->getMudas());		
	}
	else if(mamiferoExoticoC!=nullptr){
		gtk_entry_set_text(GTK_ENTRY(entry_nomeA), mamiferoExoticoC->getNome().c_str());
		gtk_entry_set_text(GTK_ENTRY(entry_sexoA), mamiferoExoticoC->getSexo().c_str());
		gtk_spin_button_set_value(GTK_SPIN_BUTTON(button_idadeA), mamiferoExoticoC->getIdade());
		gtk_spin_button_set_value(GTK_SPIN_BUTTON(button_pesoA), mamiferoExoticoC->getPeso());
		gtk_spin_button_set_value(GTK_SPIN_BUTTON(button_comprimentoA), mamiferoExoticoC->getComprimento());
		gtk_entry_set_text(GTK_ENTRY(entry_habitatA), mamiferoExoticoC->getHabitat().c_str());
		gtk_spin_button_set_value(GTK_SPIN_BUTTON(button_patasA), mamiferoExoticoC->getPatas());
		gtk_entry_set_text(GTK_ENTRY(entry_especieA), mamiferoExoticoC->getEspecie().c_str());		
		gtk_entry_set_text(GTK_ENTRY(entry_tipoPeleA), mamiferoExoticoC->getTipo_pele().c_str());
		gtk_entry_set_text(GTK_ENTRY(entry_tipoReproducaoA), mamiferoExoticoC->getTipo_reproducao().c_str());
		gtk_entry_set_text(GTK_ENTRY(entry_alimentoA), mamiferoExoticoC->getAlimento().c_str());
		gtk_combo_box_set_active(GTK_COMBO_BOX(combo_ameacadoA), mamiferoExoticoC->getAmeacadoDeEx());
		gtk_entry_set_text(GTK_ENTRY(entry_vetResponsavelA), mamiferoExoticoC->getVetResposavel().c_str());
		gtk_entry_set_text(GTK_ENTRY(entry_TratadorA), mamiferoExoticoC->getTratadorResponsavel().c_str());
		gtk_combo_box_set_active(GTK_COMBO_BOX(combo_tipoA), mamiferoExoticoC->getTpAnimal());
		gtk_entry_set_text(GTK_ENTRY(entry_corPeloA), mamiferoExoticoC->getCorPelo().c_str());
		gtk_entry_set_text(GTK_ENTRY(entry_dentesA), mamiferoExoticoC->getDentes().c_str());		
		gtk_entry_set_text(GTK_ENTRY(entry_paisOrigemA), mamiferoExoticoC->getPais_origem().c_str());
	}
	else if(mamiferoNativoC!=nullptr){
		gtk_entry_set_text(GTK_ENTRY(entry_nomeA), mamiferoNativoC->getNome().c_str());
		gtk_entry_set_text(GTK_ENTRY(entry_sexoA), mamiferoNativoC->getSexo().c_str());
		gtk_spin_button_set_value(GTK_SPIN_BUTTON(button_idadeA), mamiferoNativoC->getIdade());
		gtk_spin_button_set_value(GTK_SPIN_BUTTON(button_pesoA), mamiferoNativoC->getPeso());
		gtk_spin_button_set_value(GTK_SPIN_BUTTON(button_comprimentoA), mamiferoNativoC->getComprimento());
		gtk_entry_set_text(GTK_ENTRY(entry_habitatA), mamiferoNativoC->getHabitat().c_str());
		gtk_spin_button_set_value(GTK_SPIN_BUTTON(button_patasA), mamiferoNativoC->getPatas());
		gtk_entry_set_text(GTK_ENTRY(entry_especieA), mamiferoNativoC->getEspecie().c_str());		
		gtk_entry_set_text(GTK_ENTRY(entry_tipoPeleA), mamiferoNativoC->getTipo_pele().c_str());
		gtk_entry_set_text(GTK_ENTRY(entry_tipoReproducaoA), mamiferoNativoC->getTipo_reproducao().c_str());
		gtk_entry_set_text(GTK_ENTRY(entry_alimentoA), mamiferoNativoC->getAlimento().c_str());
		gtk_combo_box_set_active(GTK_COMBO_BOX(combo_ameacadoA), mamiferoNativoC->getAmeacadoDeEx());
		gtk_entry_set_text(GTK_ENTRY(entry_vetResponsavelA), mamiferoNativoC->getVetResposavel().c_str());
		gtk_entry_set_text(GTK_ENTRY(entry_TratadorA), mamiferoNativoC->getTratadorResponsavel().c_str());
		gtk_combo_box_set_active(GTK_COMBO_BOX(combo_tipoA), mamiferoNativoC->getTpAnimal());
		gtk_entry_set_text(GTK_ENTRY(entry_corPeloA), mamiferoNativoC->getCorPelo().c_str());
		gtk_entry_set_text(GTK_ENTRY(entry_dentesA), mamiferoNativoC->getDentes().c_str());
		gtk_entry_set_text(GTK_ENTRY(entry_ufOrigemA), mamiferoNativoC->getUF_origem().c_str());
		gtk_entry_set_text(GTK_ENTRY(entry_licencaIBAMAA), mamiferoNativoC->getLicenca_IBAMA().c_str());
	}
	else if(mamiferoDomesticoC!=nullptr){
		gtk_entry_set_text(GTK_ENTRY(entry_nomeA), mamiferoDomesticoC->getNome().c_str());
		gtk_entry_set_text(GTK_ENTRY(entry_sexoA), mamiferoDomesticoC->getSexo().c_str());
		gtk_spin_button_set_value(GTK_SPIN_BUTTON(button_idadeA), mamiferoDomesticoC->getIdade());
		gtk_spin_button_set_value(GTK_SPIN_BUTTON(button_pesoA), mamiferoDomesticoC->getPeso());
		gtk_spin_button_set_value(GTK_SPIN_BUTTON(button_comprimentoA), mamiferoDomesticoC->getComprimento());
		gtk_entry_set_text(GTK_ENTRY(entry_habitatA), mamiferoDomesticoC->getHabitat().c_str());
		gtk_spin_button_set_value(GTK_SPIN_BUTTON(button_patasA), mamiferoDomesticoC->getPatas());
		gtk_entry_set_text(GTK_ENTRY(entry_especieA), mamiferoDomesticoC->getEspecie().c_str());		
		gtk_entry_set_text(GTK_ENTRY(entry_tipoPeleA), mamiferoDomesticoC->getTipo_pele().c_str());
		gtk_entry_set_text(GTK_ENTRY(entry_tipoReproducaoA), mamiferoDomesticoC->getTipo_reproducao().c_str());
		gtk_entry_set_text(GTK_ENTRY(entry_alimentoA), mamiferoDomesticoC->getAlimento().c_str());
		gtk_combo_box_set_active(GTK_COMBO_BOX(combo_ameacadoA), mamiferoDomesticoC->getAmeacadoDeEx());
		gtk_entry_set_text(GTK_ENTRY(entry_vetResponsavelA), mamiferoDomesticoC->getVetResposavel().c_str());
		gtk_entry_set_text(GTK_ENTRY(entry_TratadorA), mamiferoDomesticoC->getTratadorResponsavel().c_str());
		gtk_combo_box_set_active(GTK_COMBO_BOX(combo_tipoA), mamiferoDomesticoC->getTpAnimal());
		gtk_entry_set_text(GTK_ENTRY(entry_corPeloA), mamiferoDomesticoC->getCorPelo().c_str());
		gtk_entry_set_text(GTK_ENTRY(entry_dentesA), mamiferoDomesticoC->getDentes().c_str());		
	}
	else if(aveExoticoC!=nullptr){
		gtk_entry_set_text(GTK_ENTRY(entry_nomeA), aveExoticoC->getNome().c_str());
		gtk_entry_set_text(GTK_ENTRY(entry_sexoA), aveExoticoC->getSexo().c_str());
		gtk_spin_button_set_value(GTK_SPIN_BUTTON(button_idadeA), aveExoticoC->getIdade());
		gtk_spin_button_set_value(GTK_SPIN_BUTTON(button_pesoA), aveExoticoC->getPeso());
		gtk_spin_button_set_value(GTK_SPIN_BUTTON(button_comprimentoA), aveExoticoC->getComprimento());
		gtk_entry_set_text(GTK_ENTRY(entry_habitatA), aveExoticoC->getHabitat().c_str());
		gtk_spin_button_set_value(GTK_SPIN_BUTTON(button_patasA), aveExoticoC->getPatas());
		gtk_entry_set_text(GTK_ENTRY(entry_especieA), aveExoticoC->getEspecie().c_str());		
		gtk_entry_set_text(GTK_ENTRY(entry_tipoPeleA), aveExoticoC->getTipo_pele().c_str());
		gtk_entry_set_text(GTK_ENTRY(entry_tipoReproducaoA), aveExoticoC->getTipo_reproducao().c_str());
		gtk_entry_set_text(GTK_ENTRY(entry_alimentoA), aveExoticoC->getAlimento().c_str());
		gtk_combo_box_set_active(GTK_COMBO_BOX(combo_ameacadoA), aveExoticoC->getAmeacadoDeEx());
		gtk_entry_set_text(GTK_ENTRY(entry_vetResponsavelA), aveExoticoC->getVetResposavel().c_str());
		gtk_entry_set_text(GTK_ENTRY(entry_TratadorA), aveExoticoC->getTratadorResponsavel().c_str());
		gtk_combo_box_set_active(GTK_COMBO_BOX(combo_tipoA), aveExoticoC->getTpAnimal());		
		gtk_spin_button_set_value(GTK_SPIN_BUTTON(button_tamanhoBicoA), aveExoticoC->getTamanhoBico());
		gtk_entry_set_text(GTK_ENTRY(entry_corPenasA), aveExoticoC->getCorPenas().c_str());
		gtk_entry_set_text(GTK_ENTRY(entry_paisOrigemA), aveExoticoC->getPais_origem().c_str());
	}
	else if(aveNativoC!=nullptr){
		gtk_entry_set_text(GTK_ENTRY(entry_nomeA), aveNativoC->getNome().c_str());
		gtk_entry_set_text(GTK_ENTRY(entry_sexoA), aveNativoC->getSexo().c_str());
		gtk_spin_button_set_value(GTK_SPIN_BUTTON(button_idadeA), aveNativoC->getIdade());
		gtk_spin_button_set_value(GTK_SPIN_BUTTON(button_pesoA), aveNativoC->getPeso());
		gtk_spin_button_set_value(GTK_SPIN_BUTTON(button_comprimentoA), aveNativoC->getComprimento());
		gtk_entry_set_text(GTK_ENTRY(entry_habitatA), aveNativoC->getHabitat().c_str());
		gtk_spin_button_set_value(GTK_SPIN_BUTTON(button_patasA), aveNativoC->getPatas());
		gtk_entry_set_text(GTK_ENTRY(entry_especieA), aveNativoC->getEspecie().c_str());		
		gtk_entry_set_text(GTK_ENTRY(entry_tipoPeleA), aveNativoC->getTipo_pele().c_str());
		gtk_entry_set_text(GTK_ENTRY(entry_tipoReproducaoA), aveNativoC->getTipo_reproducao().c_str());
		gtk_entry_set_text(GTK_ENTRY(entry_alimentoA), aveNativoC->getAlimento().c_str());
		gtk_combo_box_set_active(GTK_COMBO_BOX(combo_ameacadoA), aveNativoC->getAmeacadoDeEx());
		gtk_entry_set_text(GTK_ENTRY(entry_vetResponsavelA), aveNativoC->getVetResposavel().c_str());
		gtk_entry_set_text(GTK_ENTRY(entry_TratadorA), aveNativoC->getTratadorResponsavel().c_str());
		gtk_combo_box_set_active(GTK_COMBO_BOX(combo_tipoA), aveNativoC->getTpAnimal());		
		gtk_spin_button_set_value(GTK_SPIN_BUTTON(button_tamanhoBicoA), aveNativoC->getTamanhoBico());
		gtk_entry_set_text(GTK_ENTRY(entry_corPenasA), aveNativoC->getCorPenas().c_str());
		gtk_entry_set_text(GTK_ENTRY(entry_ufOrigemA), aveNativoC->getUF_origem().c_str());
		gtk_entry_set_text(GTK_ENTRY(entry_licencaIBAMAA), aveNativoC->getLicenca_IBAMA().c_str());				
	}
	else if(aveDomesticaC!=nullptr){
		gtk_entry_set_text(GTK_ENTRY(entry_nomeA), aveDomesticaC->getNome().c_str());
		gtk_entry_set_text(GTK_ENTRY(entry_sexoA), aveDomesticaC->getSexo().c_str());
		gtk_spin_button_set_value(GTK_SPIN_BUTTON(button_idadeA), aveDomesticaC->getIdade());
		gtk_spin_button_set_value(GTK_SPIN_BUTTON(button_pesoA), aveDomesticaC->getPeso());
		gtk_spin_button_set_value(GTK_SPIN_BUTTON(button_comprimentoA), aveDomesticaC->getComprimento());
		gtk_entry_set_text(GTK_ENTRY(entry_habitatA), aveDomesticaC->getHabitat().c_str());
		gtk_spin_button_set_value(GTK_SPIN_BUTTON(button_patasA), aveDomesticaC->getPatas());
		gtk_entry_set_text(GTK_ENTRY(entry_especieA), aveDomesticaC->getEspecie().c_str());		
		gtk_entry_set_text(GTK_ENTRY(entry_tipoPeleA), aveDomesticaC->getTipo_pele().c_str());
		gtk_entry_set_text(GTK_ENTRY(entry_tipoReproducaoA), aveDomesticaC->getTipo_reproducao().c_str());
		gtk_entry_set_text(GTK_ENTRY(entry_alimentoA), aveDomesticaC->getAlimento().c_str());
		gtk_combo_box_set_active(GTK_COMBO_BOX(combo_ameacadoA), aveDomesticaC->getAmeacadoDeEx());
		gtk_entry_set_text(GTK_ENTRY(entry_vetResponsavelA), aveDomesticaC->getVetResposavel().c_str());
		gtk_entry_set_text(GTK_ENTRY(entry_TratadorA), aveDomesticaC->getTratadorResponsavel().c_str());
		gtk_combo_box_set_active(GTK_COMBO_BOX(combo_tipoA), aveDomesticaC->getTpAnimal());		
		gtk_spin_button_set_value(GTK_SPIN_BUTTON(button_tamanhoBicoA), aveDomesticaC->getTamanhoBico());
		gtk_entry_set_text(GTK_ENTRY(entry_corPenasA), aveDomesticaC->getCorPenas().c_str());		
	}
	else if(reptilExoticoC!=nullptr){
		gtk_entry_set_text(GTK_ENTRY(entry_nomeA), reptilExoticoC->getNome().c_str());
		gtk_entry_set_text(GTK_ENTRY(entry_sexoA), reptilExoticoC->getSexo().c_str());
		gtk_spin_button_set_value(GTK_SPIN_BUTTON(button_idadeA), reptilExoticoC->getIdade());
		gtk_spin_button_set_value(GTK_SPIN_BUTTON(button_pesoA), reptilExoticoC->getPeso());
		gtk_spin_button_set_value(GTK_SPIN_BUTTON(button_comprimentoA), reptilExoticoC->getComprimento());
		gtk_entry_set_text(GTK_ENTRY(entry_habitatA), reptilExoticoC->getHabitat().c_str());
		gtk_spin_button_set_value(GTK_SPIN_BUTTON(button_patasA), reptilExoticoC->getPatas());
		gtk_entry_set_text(GTK_ENTRY(entry_especieA), reptilExoticoC->getEspecie().c_str());		
		gtk_entry_set_text(GTK_ENTRY(entry_tipoPeleA), reptilExoticoC->getTipo_pele().c_str());
		gtk_entry_set_text(GTK_ENTRY(entry_tipoReproducaoA), reptilExoticoC->getTipo_reproducao().c_str());
		gtk_entry_set_text(GTK_ENTRY(entry_alimentoA), reptilExoticoC->getAlimento().c_str());
		gtk_combo_box_set_active(GTK_COMBO_BOX(combo_ameacadoA), reptilExoticoC->getAmeacadoDeEx());
		gtk_entry_set_text(GTK_ENTRY(entry_vetResponsavelA), reptilExoticoC->getVetResposavel().c_str());
		gtk_entry_set_text(GTK_ENTRY(entry_TratadorA), reptilExoticoC->getTratadorResponsavel().c_str());
		gtk_combo_box_set_active(GTK_COMBO_BOX(combo_tipoA), reptilExoticoC->getTpAnimal());		
		gtk_combo_box_set_active(GTK_COMBO_BOX(combo_trocaPeleA), reptilExoticoC->getTrocaDePele());
		gtk_entry_set_text(GTK_ENTRY(entry_paisOrigemA), reptilExoticoC->getPais_origem().c_str());		
	}
	else if(reptilNativoC!=nullptr){
		gtk_entry_set_text(GTK_ENTRY(entry_nomeA), reptilNativoC->getNome().c_str());
		gtk_entry_set_text(GTK_ENTRY(entry_sexoA), reptilNativoC->getSexo().c_str());
		gtk_spin_button_set_value(GTK_SPIN_BUTTON(button_idadeA), reptilNativoC->getIdade());
		gtk_spin_button_set_value(GTK_SPIN_BUTTON(button_pesoA), reptilNativoC->getPeso());
		gtk_spin_button_set_value(GTK_SPIN_BUTTON(button_comprimentoA), reptilNativoC->getComprimento());
		gtk_entry_set_text(GTK_ENTRY(entry_habitatA), reptilNativoC->getHabitat().c_str());
		gtk_spin_button_set_value(GTK_SPIN_BUTTON(button_patasA), reptilNativoC->getPatas());
		gtk_entry_set_text(GTK_ENTRY(entry_especieA), reptilNativoC->getEspecie().c_str());		
		gtk_entry_set_text(GTK_ENTRY(entry_tipoPeleA), reptilNativoC->getTipo_pele().c_str());
		gtk_entry_set_text(GTK_ENTRY(entry_tipoReproducaoA), reptilNativoC->getTipo_reproducao().c_str());
		gtk_entry_set_text(GTK_ENTRY(entry_alimentoA), reptilNativoC->getAlimento().c_str());
		gtk_combo_box_set_active(GTK_COMBO_BOX(combo_ameacadoA), reptilNativoC->getAmeacadoDeEx());
		gtk_entry_set_text(GTK_ENTRY(entry_vetResponsavelA), reptilNativoC->getVetResposavel().c_str());
		gtk_entry_set_text(GTK_ENTRY(entry_TratadorA), reptilNativoC->getTratadorResponsavel().c_str());
		gtk_combo_box_set_active(GTK_COMBO_BOX(combo_tipoA), reptilNativoC->getTpAnimal());		
		gtk_combo_box_set_active(GTK_COMBO_BOX(combo_trocaPeleA), reptilNativoC->getTrocaDePele());
		gtk_entry_set_text(GTK_ENTRY(entry_ufOrigemA), reptilNativoC->getUF_origem().c_str());
		gtk_entry_set_text(GTK_ENTRY(entry_licencaIBAMAA), reptilNativoC->getLicenca_IBAMA().c_str());					
	}
	else if(reptilDomesticoC!=nullptr){
		gtk_entry_set_text(GTK_ENTRY(entry_nomeA), reptilDomesticoC->getNome().c_str());
		gtk_entry_set_text(GTK_ENTRY(entry_sexoA), reptilDomesticoC->getSexo().c_str());
		gtk_spin_button_set_value(GTK_SPIN_BUTTON(button_idadeA), reptilDomesticoC->getIdade());
		gtk_spin_button_set_value(GTK_SPIN_BUTTON(button_pesoA), reptilDomesticoC->getPeso());
		gtk_spin_button_set_value(GTK_SPIN_BUTTON(button_comprimentoA), reptilDomesticoC->getComprimento());
		gtk_entry_set_text(GTK_ENTRY(entry_habitatA), reptilDomesticoC->getHabitat().c_str());
		gtk_spin_button_set_value(GTK_SPIN_BUTTON(button_patasA), reptilDomesticoC->getPatas());
		gtk_entry_set_text(GTK_ENTRY(entry_especieA), reptilDomesticoC->getEspecie().c_str());		
		gtk_entry_set_text(GTK_ENTRY(entry_tipoPeleA), reptilDomesticoC->getTipo_pele().c_str());
		gtk_entry_set_text(GTK_ENTRY(entry_tipoReproducaoA), reptilDomesticoC->getTipo_reproducao().c_str());
		gtk_entry_set_text(GTK_ENTRY(entry_alimentoA), reptilDomesticoC->getAlimento().c_str());
		gtk_combo_box_set_active(GTK_COMBO_BOX(combo_ameacadoA), reptilDomesticoC->getAmeacadoDeEx());
		gtk_entry_set_text(GTK_ENTRY(entry_vetResponsavelA), reptilDomesticoC->getVetResposavel().c_str());
		gtk_entry_set_text(GTK_ENTRY(entry_TratadorA), reptilDomesticoC->getTratadorResponsavel().c_str());
		gtk_combo_box_set_active(GTK_COMBO_BOX(combo_tipoA), reptilDomesticoC->getTpAnimal());		
		gtk_combo_box_set_active(GTK_COMBO_BOX(combo_trocaPeleA), reptilDomesticoC->getTrocaDePele());		
	}
}

void janelaEditarAnimaisRun(std::string idEditar)
{
	id_Animal = idEditar;
	prepararEdicaoAnimais(idEditar);

	box_head = gtk_box_new(GTK_ORIENTATION_VERTICAL, 1);
	box = gtk_box_new(GTK_ORIENTATION_VERTICAL, 1);
	grid = gtk_grid_new();
	gtk_widget_show(grid);

	label = gtk_label_new("EDITAR ANIMAIS\n");
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
	g_signal_connect (combo_tipoA, "changed", G_CALLBACK(comboBoxTipoEditar), NULL);
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

    hideAtributosEspecificosEditar();
	tpEditar = anfibioExotico;
	gtk_widget_show(label_paisOrigemA);
	gtk_widget_show(entry_paisOrigemA);
	gtk_widget_show(label_totalMudasA);
	gtk_widget_show(button_totalMudasA);

	button = gtk_button_new_with_label("CADASTRAR");
	g_signal_connect(button, "clicked", G_CALLBACK(editarAnimais), NULL);
	gtk_grid_attach(GTK_GRID(grid), button, 1, 27, 1, 1);
	gtk_widget_show(button);
	
	setTextosEditarAnimais();

	box_base = gtk_box_new(GTK_ORIENTATION_VERTICAL, 1);
	
	janelaEditarAnimais = gtk_window_new(GTK_WINDOW_TOPLEVEL);
	gtk_window_set_position(GTK_WINDOW(janelaEditarAnimais), GTK_WIN_POS_CENTER);
	gtk_window_set_default_size(GTK_WINDOW(janelaEditarAnimais), 850, 550);
	gtk_container_set_border_width(GTK_CONTAINER(janelaEditarAnimais), 10);
	gtk_window_set_title(GTK_WINDOW(janelaEditarAnimais), "PET FERA");
	g_signal_connect(G_OBJECT(janelaEditarAnimais), "destroy", G_CALLBACK(fecharJanelaEditarAnimais), NULL);

	gtk_container_add(GTK_CONTAINER(box), grid);
	gtk_container_add(GTK_CONTAINER(box_base), box_head);
	gtk_container_add(GTK_CONTAINER(box_base), box);
	gtk_container_add(GTK_CONTAINER(janelaEditarAnimais), box_base);

	gtk_widget_show(janelaEditarAnimais);
	gtk_widget_show(box_base);
	gtk_widget_show(box_head);
	gtk_widget_show(box);

}

#endif