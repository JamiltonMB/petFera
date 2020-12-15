#ifndef ABAANIMAIS_HPP
#define ABAANIMAIS_HPP
#include <vector>
#include <memory>
#include <string>
#include "interface/notebookAbas.hpp"

GtkTreeViewColumn *column_a;
GtkListStore* store_a; 
GtkWidget *list_a;
GtkWidget *scrolled_window_a;

std::vector<std::shared_ptr<Animal>> animais;

enum {
	LIST_IDA,
	LIST_NOMEA,
	LIST_SEXOA,
	LIST_IDADEA,
	LIST_PESOA,
	LIST_COMPRIMENTOA,
	LIST_HABITATA,
	LIST_PATASA,
	LIST_ESPECIEA,
	LIST_TIPOPELEA,
	LIST_TIPOREPRODUCAOA,
	LIST_ALIMENTOA,
	LIST_AMEACADODEEXA,
	LIST_VETRESPONSAVELA,
	LIST_TRATADORRESPONSAVELA,
	LIST_TIPOA,
	LIST_PAISORIGEMA,
	LIST_CORPELOSA,
	LIST_DENTESA,
	LIST_UFORIGEMA,
	LIST_LICENCAIBAMAA,
	LIST_TOTALMUDASA,
	LIST_TAMANHOBICOA,
	LIST_CORPENASA,
	LIST_TROCADEPELEA,
	N_COLUMNSA
};

static int callbackAnimais(void *NotUsed, int argc, char **argv, char **azColName){
	tpAnimal tp;

	switch(atoi(argv[15])){
		case 0:
			tp = anfibioExotico;
			animais.push_back(std::make_shared<AnfibioExotico>(std::stoi(argv[0]),argv[1],argv[2],std::stoi(argv[3]),
				std::stof(argv[4]), std::stof(argv[5]),argv[6],std::stoi(argv[7]),argv[8],argv[9],argv[10],argv[11],
				argv[12],argv[13],argv[14],tp,std::stoi(argv[21]),argv[16]));
			break;
		case 1:
			tp = anfibioNativo;
			animais.push_back(std::make_shared<AnfibioNativo>(std::stoi(argv[0]),argv[1],argv[2],std::stoi(argv[3]),
				std::stof(argv[4]), std::stof(argv[5]),argv[6],std::stoi(argv[7]),argv[8],argv[9],argv[10],argv[11],
				argv[12],argv[13],argv[14],tp,std::stoi(argv[21]),argv[20],argv[19]));
			break;
		case 2:
			tp = anfibioDomestico;
			animais.push_back(std::make_shared<AnfibioDomestico>(std::stoi(argv[0]),argv[1],argv[2],std::stoi(argv[3]),
				std::stof(argv[4]), std::stof(argv[5]),argv[6],std::stoi(argv[7]),argv[8],argv[9],argv[10],argv[11],
				argv[12],argv[13],argv[14],tp,std::stoi(argv[21])));
			break;
		case 3:
			tp = mamiferoExotico;
			animais.push_back(std::make_shared<MamiferoExotico>(std::stoi(argv[0]),argv[1],argv[2],std::stoi(argv[3]),
				std::stof(argv[4]), std::stof(argv[5]),argv[6],std::stoi(argv[7]),argv[8],argv[9],argv[10],argv[11],
				argv[12],argv[13],argv[14],tp,argv[17],argv[18],argv[16]));
			break;
		case 4:
			tp = mamiferoNativo;
			animais.push_back(std::make_shared<MamiferoNativo>(std::stoi(argv[0]),argv[1],argv[2],std::stoi(argv[3]),
				std::stof(argv[4]), std::stof(argv[5]),argv[6],std::stoi(argv[7]),argv[8],argv[9],argv[10],argv[11],
				argv[12],argv[13],argv[14],tp,argv[17],argv[18],argv[20],argv[19]));
			break;
		case 5:
			tp = mamiferoDomestico;
			animais.push_back(std::make_shared<MamiferoDomestico>(std::stoi(argv[0]),argv[1],argv[2],std::stoi(argv[3]),
				std::stof(argv[4]), std::stof(argv[5]),argv[6],std::stoi(argv[7]),argv[8],argv[9],argv[10],argv[11],
				argv[12],argv[13],argv[14],tp,argv[17],argv[18]));
			break;
		case 6:
			tp = aveExotico;
			animais.push_back(std::make_shared<AveExotico>(std::stoi(argv[0]),argv[1],argv[2],std::stoi(argv[3]),
				std::stof(argv[4]), std::stof(argv[5]),argv[6],std::stoi(argv[7]),argv[8],argv[9],argv[10],argv[11],
				argv[12],argv[13],argv[14],tp,std::stof(argv[22]),argv[23],argv[16]));			
			break;
		case 7:
			tp = aveNativo;
			animais.push_back(std::make_shared<AveNativo>(std::stoi(argv[0]),argv[1],argv[2],std::stoi(argv[3]),
				std::stof(argv[4]), std::stof(argv[5]),argv[6],std::stoi(argv[7]),argv[8],argv[9],argv[10],argv[11],
				argv[12],argv[13],argv[14],tp,std::stof(argv[22]),argv[23],argv[20],argv[19]));			
			break;
		case 8:
			tp = aveDomestico;
			animais.push_back(std::make_shared<AveDomestica>(std::stoi(argv[0]),argv[1],argv[2],std::stoi(argv[3]),
				std::stof(argv[4]), std::stof(argv[5]),argv[6],std::stoi(argv[7]),argv[8],argv[9],argv[10],argv[11],
				argv[12],argv[13],argv[14],tp,std::stof(argv[22]),argv[23]));				
			break;
		case 9:
			tp = reptilExotico;
			animais.push_back(std::make_shared<ReptilExotico>(std::stoi(argv[0]),argv[1],argv[2],std::stoi(argv[3]),
				std::stof(argv[4]), std::stof(argv[5]),argv[6],std::stoi(argv[7]),argv[8],argv[9],argv[10],argv[11],
				argv[12],argv[13],argv[14],tp,std::atoi(argv[24]),argv[16]));			
			break;
		case 10:
			tp = reptilNativo;
			animais.push_back(std::make_shared<ReptilNativo>(std::stoi(argv[0]),argv[1],argv[2],std::stoi(argv[3]),
				std::stof(argv[4]), std::stof(argv[5]),argv[6],std::stoi(argv[7]),argv[8],argv[9],argv[10],argv[11],
				argv[12],argv[13],argv[14],tp,std::atoi(argv[24]),argv[20],argv[19]));			
			break;
		case 11:
			tp = reptilDomestico;
			animais.push_back(std::make_shared<ReptilDomestico>(std::stoi(argv[0]),argv[1],argv[2],std::stoi(argv[3]),
				std::stof(argv[4]), std::stof(argv[5]),argv[6],std::stoi(argv[7]),argv[8],argv[9],argv[10],argv[11],
				argv[12],argv[13],argv[14],tp,std::atoi(argv[24])));			
			break;								
		default:
			std::cout<<"Parâmetro de comando para processamento das provas é inválido"<<std::endl;
			break;									
	}

	/* //Código de debug para imprimir toda tabela animais do banco de dados
	int i;
	for(i=0; i<argc; i++)
	{
		std::cout<<azColName[i]<<" = " << (argv[i] ? argv[i] : "NULL")<<"\n";
	}
	*/
	return 0;
}

void pegarDadosAnimais(){
	sqlite3 *db;
	char *zErrMsg = 0;
	int rc;
	std::string sql = "Select * from animais;";
   
   	rc = sqlite3_open("../database/dados.db", &db);
   
   	if(rc){
      	std::cout<<sqlite3_errmsg(db)<<std::endl;
      	return;
   	}

   	rc = sqlite3_exec(db, sql.c_str(), callbackAnimais, 0, &zErrMsg);
   
	if(rc != SQLITE_OK){
		std::cout<<"Erro ao buscar dados"<<std::endl;
		sqlite3_free(zErrMsg);
	}
   	sqlite3_close(db); 	
}

void listarAnimais(){

	for(auto &animal : animais){
		gtk_list_store_insert_with_values(store_a, NULL, -1,
											LIST_IDA, std::to_string(animal->getId()).c_str(),
											LIST_NOMEA, "x",
											LIST_SEXOA, "x",
											LIST_IDADEA, "x",
											LIST_PESOA, "x",
											LIST_COMPRIMENTOA, "x",
											LIST_HABITATA, "x",
											LIST_PATASA, "x",
											LIST_ESPECIEA, "x",
											LIST_TIPOPELEA, "x",
											LIST_TIPOREPRODUCAOA, "x",
											LIST_ALIMENTOA, "x",
											LIST_AMEACADODEEXA, "x",
											LIST_VETRESPONSAVELA, "x",
											LIST_TRATADORRESPONSAVELA, "x",
											LIST_TIPOA, "x",
											LIST_PAISORIGEMA, 
												(animal->getTpAnimal()==anfibioExotico ? std::dynamic_pointer_cast<AnfibioExotico>(animal)->getPais_origem().c_str() : 
												(animal->getTpAnimal()==mamiferoExotico ? std::dynamic_pointer_cast<MamiferoExotico>(animal)->getPais_origem().c_str() : 
												(animal->getTpAnimal()==aveExotico ? std::dynamic_pointer_cast<AveExotico>(animal)->getPais_origem().c_str() : 
												(animal->getTpAnimal()==reptilExotico ? std::dynamic_pointer_cast<ReptilExotico>(animal)->getPais_origem().c_str() : "NULL")))),											
											LIST_CORPELOSA, "x",
											LIST_DENTESA, "x",
											LIST_UFORIGEMA, "x",
											LIST_LICENCAIBAMAA, "x",
											LIST_TOTALMUDASA, "x",
											LIST_TAMANHOBICOA, "x",
											LIST_CORPENASA, "x",
											LIST_TROCADEPELEA, "x",
											-1);					
	}
}

void exibir_animais()
{
	pegarDadosAnimais();

	store_a = gtk_list_store_new(N_COLUMNSA, G_TYPE_STRING, G_TYPE_STRING, G_TYPE_STRING, G_TYPE_STRING, G_TYPE_STRING, G_TYPE_STRING, 
								G_TYPE_STRING, G_TYPE_STRING, G_TYPE_STRING, G_TYPE_STRING, G_TYPE_STRING, G_TYPE_STRING,
								G_TYPE_STRING, G_TYPE_STRING, G_TYPE_STRING, G_TYPE_STRING, G_TYPE_STRING, G_TYPE_STRING,
								G_TYPE_STRING, G_TYPE_STRING, G_TYPE_STRING, G_TYPE_STRING, G_TYPE_STRING, G_TYPE_STRING, G_TYPE_STRING);

	list_a = gtk_tree_view_new_with_model(GTK_TREE_MODEL(store_a));
	g_object_unref(store_a);

	listarAnimais();

	column_a = gtk_tree_view_column_new_with_attributes("ID", gtk_cell_renderer_text_new(), "text", LIST_IDA, NULL);
	gtk_tree_view_column_set_min_width(column_a, 10);
	gtk_tree_view_column_set_alignment(column_a, 0.5);
	gtk_tree_view_append_column(GTK_TREE_VIEW(list_a), column_a);

	column_a = gtk_tree_view_column_new_with_attributes("NOME", gtk_cell_renderer_text_new(), "text", LIST_NOMEA, NULL);
	gtk_tree_view_column_set_min_width(column_a, 100);
	gtk_tree_view_column_set_alignment(column_a, 0.5);
	gtk_tree_view_append_column(GTK_TREE_VIEW(list_a), column_a);	
	
	column_a = gtk_tree_view_column_new_with_attributes("SEXO", gtk_cell_renderer_text_new(), "text", LIST_SEXOA, NULL);
	gtk_tree_view_column_set_min_width(column_a, 50);
	gtk_tree_view_column_set_alignment(column_a, 0.5);
	gtk_tree_view_append_column(GTK_TREE_VIEW(list_a), column_a);

	column_a = gtk_tree_view_column_new_with_attributes("IDADE", gtk_cell_renderer_text_new(), "text", LIST_IDADEA, NULL);
	gtk_tree_view_column_set_min_width(column_a, 10);
	gtk_tree_view_column_set_alignment(column_a, 0.5);
	gtk_tree_view_append_column(GTK_TREE_VIEW(list_a), column_a);

	column_a = gtk_tree_view_column_new_with_attributes("PESO", gtk_cell_renderer_text_new(), "text", LIST_PESOA, NULL);
	gtk_tree_view_column_set_min_width(column_a, 10);
	gtk_tree_view_column_set_alignment(column_a, 0.5);
	gtk_tree_view_append_column(GTK_TREE_VIEW(list_a), column_a);

	column_a = gtk_tree_view_column_new_with_attributes("COMPRIMENTO", gtk_cell_renderer_text_new(), "text", LIST_COMPRIMENTOA, NULL);
	gtk_tree_view_column_set_min_width(column_a, 50);
	gtk_tree_view_column_set_alignment(column_a, 0.5);
	gtk_tree_view_append_column(GTK_TREE_VIEW(list_a), column_a);

	column_a = gtk_tree_view_column_new_with_attributes("HABITAT", gtk_cell_renderer_text_new(), "text", LIST_HABITATA, NULL);
	gtk_tree_view_column_set_min_width(column_a, 80);
	gtk_tree_view_column_set_alignment(column_a, 0.5);
	gtk_tree_view_append_column(GTK_TREE_VIEW(list_a), column_a);
	
	column_a = gtk_tree_view_column_new_with_attributes("Nº PATAS", gtk_cell_renderer_text_new(), "text", LIST_PATASA, NULL);
	gtk_tree_view_column_set_min_width(column_a, 50);
	gtk_tree_view_column_set_alignment(column_a, 0.5);
	gtk_tree_view_append_column(GTK_TREE_VIEW(list_a), column_a);	

	column_a = gtk_tree_view_column_new_with_attributes("ESPÉCIE", gtk_cell_renderer_text_new(), "text", LIST_ESPECIEA, NULL);
	gtk_tree_view_column_set_min_width(column_a, 100);
	gtk_tree_view_column_set_alignment(column_a, 0.5);
	gtk_tree_view_append_column(GTK_TREE_VIEW(list_a), column_a);

	column_a = gtk_tree_view_column_new_with_attributes("TIPO DE PELE", gtk_cell_renderer_text_new(), "text", LIST_TIPOPELEA, NULL);
	gtk_tree_view_column_set_min_width(column_a, 100);
	gtk_tree_view_column_set_alignment(column_a, 0.5);
	gtk_tree_view_append_column(GTK_TREE_VIEW(list_a), column_a);

	column_a = gtk_tree_view_column_new_with_attributes("TIPO DE REPROD.", gtk_cell_renderer_text_new(), "text", LIST_TIPOREPRODUCAOA, NULL);
	gtk_tree_view_column_set_min_width(column_a, 100);
	gtk_tree_view_column_set_alignment(column_a, 0.5);
	gtk_tree_view_append_column(GTK_TREE_VIEW(list_a), column_a);
	
	column_a = gtk_tree_view_column_new_with_attributes("ALIMENTAÇÃO", gtk_cell_renderer_text_new(), "text", LIST_ALIMENTOA, NULL);
	gtk_tree_view_column_set_min_width(column_a, 100);
	gtk_tree_view_column_set_alignment(column_a, 0.5);
	gtk_tree_view_append_column(GTK_TREE_VIEW(list_a), column_a);


	column_a = gtk_tree_view_column_new_with_attributes("AMEAÇADO DE EXT.", gtk_cell_renderer_text_new(), "text", LIST_AMEACADODEEXA, NULL);
	gtk_tree_view_column_set_min_width(column_a, 100);
	gtk_tree_view_column_set_alignment(column_a, 0.5);
	gtk_tree_view_append_column(GTK_TREE_VIEW(list_a), column_a);	
	
	column_a = gtk_tree_view_column_new_with_attributes("VETERINÁRIO", gtk_cell_renderer_text_new(), "text", LIST_VETRESPONSAVELA, NULL);
	gtk_tree_view_column_set_min_width(column_a, 50);
	gtk_tree_view_column_set_alignment(column_a, 0.5);
	gtk_tree_view_append_column(GTK_TREE_VIEW(list_a), column_a);

	column_a = gtk_tree_view_column_new_with_attributes("TRATADOR", gtk_cell_renderer_text_new(), "text", LIST_TRATADORRESPONSAVELA, NULL);
	gtk_tree_view_column_set_min_width(column_a, 10);
	gtk_tree_view_column_set_alignment(column_a, 0.5);
	gtk_tree_view_append_column(GTK_TREE_VIEW(list_a), column_a);

	column_a = gtk_tree_view_column_new_with_attributes("TIPO", gtk_cell_renderer_text_new(), "text", LIST_TIPOA, NULL);
	gtk_tree_view_column_set_min_width(column_a, 50);
	gtk_tree_view_column_set_alignment(column_a, 0.5);
	gtk_tree_view_append_column(GTK_TREE_VIEW(list_a), column_a);

	column_a = gtk_tree_view_column_new_with_attributes("PAIS DE ORIGEM", gtk_cell_renderer_text_new(), "text", LIST_PAISORIGEMA, NULL);
	gtk_tree_view_column_set_min_width(column_a, 80);
	gtk_tree_view_column_set_alignment(column_a, 0.5);
	gtk_tree_view_append_column(GTK_TREE_VIEW(list_a), column_a);
	
	column_a = gtk_tree_view_column_new_with_attributes("COR DO PELO", gtk_cell_renderer_text_new(), "text", LIST_CORPELOSA, NULL);
	gtk_tree_view_column_set_min_width(column_a, 50);
	gtk_tree_view_column_set_alignment(column_a, 0.5);
	gtk_tree_view_append_column(GTK_TREE_VIEW(list_a), column_a);	

	column_a = gtk_tree_view_column_new_with_attributes("DENTES", gtk_cell_renderer_text_new(), "text", LIST_DENTESA, NULL);
	gtk_tree_view_column_set_min_width(column_a, 100);
	gtk_tree_view_column_set_alignment(column_a, 0.5);
	gtk_tree_view_append_column(GTK_TREE_VIEW(list_a), column_a);

	column_a = gtk_tree_view_column_new_with_attributes("UF DE ORIGEM", gtk_cell_renderer_text_new(), "text", LIST_UFORIGEMA, NULL);
	gtk_tree_view_column_set_min_width(column_a, 100);
	gtk_tree_view_column_set_alignment(column_a, 0.5);
	gtk_tree_view_append_column(GTK_TREE_VIEW(list_a), column_a);

	column_a = gtk_tree_view_column_new_with_attributes("LICENÇA IBAMA", gtk_cell_renderer_text_new(), "text", LIST_LICENCAIBAMAA, NULL);
	gtk_tree_view_column_set_min_width(column_a, 100);
	gtk_tree_view_column_set_alignment(column_a, 0.5);
	gtk_tree_view_append_column(GTK_TREE_VIEW(list_a), column_a);
	
	column_a = gtk_tree_view_column_new_with_attributes("TOTAL DE MUDAS", gtk_cell_renderer_text_new(), "text", LIST_TOTALMUDASA, NULL);
	gtk_tree_view_column_set_min_width(column_a, 100);
	gtk_tree_view_column_set_alignment(column_a, 0.5);
	gtk_tree_view_append_column(GTK_TREE_VIEW(list_a), column_a);

	column_a = gtk_tree_view_column_new_with_attributes("TAMANHO DO BICO", gtk_cell_renderer_text_new(), "text", LIST_TAMANHOBICOA, NULL);
	gtk_tree_view_column_set_min_width(column_a, 100);
	gtk_tree_view_column_set_alignment(column_a, 0.5);
	gtk_tree_view_append_column(GTK_TREE_VIEW(list_a), column_a);

	column_a = gtk_tree_view_column_new_with_attributes("COR DAS PENAS", gtk_cell_renderer_text_new(), "text", LIST_CORPENASA, NULL);
	gtk_tree_view_column_set_min_width(column_a, 100);
	gtk_tree_view_column_set_alignment(column_a, 0.5);
	gtk_tree_view_append_column(GTK_TREE_VIEW(list_a), column_a);
	
	column_a = gtk_tree_view_column_new_with_attributes("TROCA DE PELE", gtk_cell_renderer_text_new(), "text", LIST_TROCADEPELEA, NULL);
	gtk_tree_view_column_set_min_width(column_a, 100);
	gtk_tree_view_column_set_alignment(column_a, 0.5);
	gtk_tree_view_append_column(GTK_TREE_VIEW(list_a), column_a);


	scrolled_window_a = gtk_scrolled_window_new(NULL, NULL);
	gtk_container_set_border_width(GTK_CONTAINER(scrolled_window_a), 10);
	gtk_scrolled_window_set_min_content_height(GTK_SCROLLED_WINDOW (scrolled_window_a), 400);
	gtk_scrolled_window_set_min_content_width(GTK_SCROLLED_WINDOW (scrolled_window_a), 800);
	gtk_scrolled_window_set_policy(GTK_SCROLLED_WINDOW(scrolled_window_a), GTK_POLICY_AUTOMATIC, GTK_POLICY_ALWAYS);

	box_head = gtk_box_new(GTK_ORIENTATION_VERTICAL, 1);
	box = gtk_box_new(GTK_ORIENTATION_VERTICAL, 1);
	gtk_box_pack_start(GTK_BOX(box), list_a, TRUE, TRUE, 5);

	label = gtk_label_new("\nMÓDUDO DE CONSULTA E CADASTRO DE ANIMAIS\n");
	gtk_container_add(GTK_CONTAINER(box_head), label);
	
	box_base = gtk_box_new(GTK_ORIENTATION_VERTICAL, 1);

	cabecalho = gtk_box_new(GTK_ORIENTATION_VERTICAL, 1);
	image = gtk_image_new_from_file(nome_image.c_str());
	gtk_container_add(GTK_CONTAINER(cabecalho), image);
	gtk_container_add(GTK_CONTAINER(box_base), cabecalho);
	
	gtk_container_add(GTK_CONTAINER(box_base), box_head);
	gtk_container_add(GTK_CONTAINER(scrolled_window_a), box);
	gtk_container_add(GTK_CONTAINER(box_base), scrolled_window_a);
	//gtk_container_add(GTK_CONTAINER(box_base), grid);
	gtk_container_add(GTK_CONTAINER(notebook), box_base);
	gtk_notebook_set_tab_label_text (GTK_NOTEBOOK (notebook), box_base, "CONSULTAR ANIMAIS");
	gtk_widget_show(notebook);
	gtk_widget_show_all(box_base);
	gtk_widget_show_all(box_head);
	gtk_widget_show_all(box);
	gtk_widget_show(cabecalho);
	gtk_widget_show(image);
}

#endif