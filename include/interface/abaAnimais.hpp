#ifndef ABAANIMAIS_HPP
#define ABAANIMAIS_HPP
#include <vector>
#include <memory>
#include <string>
#include "interface/notebookAbas.hpp"


enum {
	LIST_IDA,
	LIST_NOMEA,
	LIST_SEXOA,
	LIST_IDADEA,
	LIST_COMPRIMENTOA,
	LIST_HABITATA,
	LIST_PATASA,
	LIST_ESPECIEA,
	LIST_TIPOPELEA,
	LIST_TIPOREPRODUCAOA,
	LIST_ALIMENTOA,
	LIST_AMEACADODEEXA,
	LIST_VETRESONSAVELA,
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



void exibir_animais()
{

	store = gtk_list_store_new(N_COLUMNS, G_TYPE_STRING, G_TYPE_STRING, G_TYPE_STRING, G_TYPE_STRING, G_TYPE_STRING, 
								G_TYPE_STRING, G_TYPE_STRING, G_TYPE_STRING, G_TYPE_STRING, G_TYPE_STRING, G_TYPE_STRING,
								G_TYPE_STRING, G_TYPE_STRING, G_TYPE_STRING, G_TYPE_STRING, G_TYPE_STRING, G_TYPE_STRING,
								G_TYPE_STRING, G_TYPE_STRING, G_TYPE_STRING, G_TYPE_STRING, G_TYPE_STRING, G_TYPE_STRING);

	list = gtk_tree_view_new_with_model(GTK_TREE_MODEL(store));
	g_object_unref(store);

	column = gtk_tree_view_column_new_with_attributes("ID", gtk_cell_renderer_text_new(), "text", LIST_IDA, NULL);
	gtk_tree_view_column_set_min_width(column, 10);
	gtk_tree_view_column_set_alignment(column, 0.5);
	gtk_tree_view_append_column(GTK_TREE_VIEW(list), column);

	column = gtk_tree_view_column_new_with_attributes("NOME", gtk_cell_renderer_text_new(), "text", LIST_NOMEA, NULL);
	gtk_tree_view_column_set_min_width(column, 100);
	gtk_tree_view_column_set_alignment(column, 0.5);
	gtk_tree_view_append_column(GTK_TREE_VIEW(list), column);	
	
	column = gtk_tree_view_column_new_with_attributes("SEXO", gtk_cell_renderer_text_new(), "text", LIST_SEXOA, NULL);
	gtk_tree_view_column_set_min_width(column, 50);
	gtk_tree_view_column_set_alignment(column, 0.5);
	gtk_tree_view_append_column(GTK_TREE_VIEW(list), column);

	column = gtk_tree_view_column_new_with_attributes("IDADE", gtk_cell_renderer_text_new(), "text", LIST_IDADEA, NULL);
	gtk_tree_view_column_set_min_width(column, 10);
	gtk_tree_view_column_set_alignment(column, 0.5);
	gtk_tree_view_append_column(GTK_TREE_VIEW(list), column);

	column = gtk_tree_view_column_new_with_attributes("COMPRIMENTO", gtk_cell_renderer_text_new(), "text", LIST_COMPRIMENTOA, NULL);
	gtk_tree_view_column_set_min_width(column, 50);
	gtk_tree_view_column_set_alignment(column, 0.5);
	gtk_tree_view_append_column(GTK_TREE_VIEW(list), column);

	column = gtk_tree_view_column_new_with_attributes("HABITAT", gtk_cell_renderer_text_new(), "text", LIST_HABITATA, NULL);
	gtk_tree_view_column_set_min_width(column, 80);
	gtk_tree_view_column_set_alignment(column, 0.5);
	gtk_tree_view_append_column(GTK_TREE_VIEW(list), column);
	
	column = gtk_tree_view_column_new_with_attributes("Nº PATAS", gtk_cell_renderer_text_new(), "text", LIST_PATASA, NULL);
	gtk_tree_view_column_set_min_width(column, 50);
	gtk_tree_view_column_set_alignment(column, 0.5);
	gtk_tree_view_append_column(GTK_TREE_VIEW(list), column);	

	column = gtk_tree_view_column_new_with_attributes("ESPÉCIE", gtk_cell_renderer_text_new(), "text", LIST_ESPECIEA, NULL);
	gtk_tree_view_column_set_min_width(column, 100);
	gtk_tree_view_column_set_alignment(column, 0.5);
	gtk_tree_view_append_column(GTK_TREE_VIEW(list), column);

	column = gtk_tree_view_column_new_with_attributes("TIPO DE PELE", gtk_cell_renderer_text_new(), "text", LIST_TIPOPELEA, NULL);
	gtk_tree_view_column_set_min_width(column, 100);
	gtk_tree_view_column_set_alignment(column, 0.5);
	gtk_tree_view_append_column(GTK_TREE_VIEW(list), column);

	column = gtk_tree_view_column_new_with_attributes("TIPO DE REPROD.", gtk_cell_renderer_text_new(), "text", LIST_TIPOREPRODUCAOA, NULL);
	gtk_tree_view_column_set_min_width(column, 100);
	gtk_tree_view_column_set_alignment(column, 0.5);
	gtk_tree_view_append_column(GTK_TREE_VIEW(list), column);
	
	column = gtk_tree_view_column_new_with_attributes("ALIMENTAÇÃO", gtk_cell_renderer_text_new(), "text", LIST_ALIMENTOA, NULL);
	gtk_tree_view_column_set_min_width(column, 100);
	gtk_tree_view_column_set_alignment(column, 0.5);
	gtk_tree_view_append_column(GTK_TREE_VIEW(list), column);


	column = gtk_tree_view_column_new_with_attributes("AMEAÇADO DE EXT.", gtk_cell_renderer_text_new(), "text", LIST_AMEACADODEEXA, NULL);
	gtk_tree_view_column_set_min_width(column, 100);
	gtk_tree_view_column_set_alignment(column, 0.5);
	gtk_tree_view_append_column(GTK_TREE_VIEW(list), column);	
	
	column = gtk_tree_view_column_new_with_attributes("VETERINÁRIO", gtk_cell_renderer_text_new(), "text", LIST_VETRESONSAVELA, NULL);
	gtk_tree_view_column_set_min_width(column, 50);
	gtk_tree_view_column_set_alignment(column, 0.5);
	gtk_tree_view_append_column(GTK_TREE_VIEW(list), column);

	column = gtk_tree_view_column_new_with_attributes("TRATADOR", gtk_cell_renderer_text_new(), "text", LIST_TRATADORRESPONSAVELA, NULL);
	gtk_tree_view_column_set_min_width(column, 10);
	gtk_tree_view_column_set_alignment(column, 0.5);
	gtk_tree_view_append_column(GTK_TREE_VIEW(list), column);

	column = gtk_tree_view_column_new_with_attributes("TIPO", gtk_cell_renderer_text_new(), "text", LIST_TIPOA, NULL);
	gtk_tree_view_column_set_min_width(column, 50);
	gtk_tree_view_column_set_alignment(column, 0.5);
	gtk_tree_view_append_column(GTK_TREE_VIEW(list), column);

	column = gtk_tree_view_column_new_with_attributes("PAIS DE ORIGEM", gtk_cell_renderer_text_new(), "text", LIST_PAISORIGEMA, NULL);
	gtk_tree_view_column_set_min_width(column, 80);
	gtk_tree_view_column_set_alignment(column, 0.5);
	gtk_tree_view_append_column(GTK_TREE_VIEW(list), column);
	
	column = gtk_tree_view_column_new_with_attributes("COR DO PELO", gtk_cell_renderer_text_new(), "text", LIST_CORPELOSA, NULL);
	gtk_tree_view_column_set_min_width(column, 50);
	gtk_tree_view_column_set_alignment(column, 0.5);
	gtk_tree_view_append_column(GTK_TREE_VIEW(list), column);	

	column = gtk_tree_view_column_new_with_attributes("DENTES", gtk_cell_renderer_text_new(), "text", LIST_DENTESA, NULL);
	gtk_tree_view_column_set_min_width(column, 100);
	gtk_tree_view_column_set_alignment(column, 0.5);
	gtk_tree_view_append_column(GTK_TREE_VIEW(list), column);

	column = gtk_tree_view_column_new_with_attributes("UF DE ORIGEM", gtk_cell_renderer_text_new(), "text", LIST_UFORIGEMA, NULL);
	gtk_tree_view_column_set_min_width(column, 100);
	gtk_tree_view_column_set_alignment(column, 0.5);
	gtk_tree_view_append_column(GTK_TREE_VIEW(list), column);

	column = gtk_tree_view_column_new_with_attributes("LICENÇA IBAMA", gtk_cell_renderer_text_new(), "text", LIST_LICENCAIBAMAA, NULL);
	gtk_tree_view_column_set_min_width(column, 100);
	gtk_tree_view_column_set_alignment(column, 0.5);
	gtk_tree_view_append_column(GTK_TREE_VIEW(list), column);
	
	column = gtk_tree_view_column_new_with_attributes("TOTAL DE MUDAS", gtk_cell_renderer_text_new(), "text", LIST_TOTALMUDASA, NULL);
	gtk_tree_view_column_set_min_width(column, 100);
	gtk_tree_view_column_set_alignment(column, 0.5);
	gtk_tree_view_append_column(GTK_TREE_VIEW(list), column);

	column = gtk_tree_view_column_new_with_attributes("TAMANHO DO BICO", gtk_cell_renderer_text_new(), "text", LIST_TAMANHOBICOA, NULL);
	gtk_tree_view_column_set_min_width(column, 100);
	gtk_tree_view_column_set_alignment(column, 0.5);
	gtk_tree_view_append_column(GTK_TREE_VIEW(list), column);

	column = gtk_tree_view_column_new_with_attributes("COR DAS PENAS", gtk_cell_renderer_text_new(), "text", LIST_CORPENASA, NULL);
	gtk_tree_view_column_set_min_width(column, 100);
	gtk_tree_view_column_set_alignment(column, 0.5);
	gtk_tree_view_append_column(GTK_TREE_VIEW(list), column);
	
	column = gtk_tree_view_column_new_with_attributes("TROCA DE PELE", gtk_cell_renderer_text_new(), "text", LIST_TROCADEPELEA, NULL);
	gtk_tree_view_column_set_min_width(column, 100);
	gtk_tree_view_column_set_alignment(column, 0.5);
	gtk_tree_view_append_column(GTK_TREE_VIEW(list), column);


	scrolled_window = gtk_scrolled_window_new(NULL, NULL);
	gtk_container_set_border_width(GTK_CONTAINER(scrolled_window), 10);
	gtk_scrolled_window_set_min_content_height(GTK_SCROLLED_WINDOW (scrolled_window), 400);
	gtk_scrolled_window_set_min_content_width(GTK_SCROLLED_WINDOW (scrolled_window), 800);
	gtk_scrolled_window_set_policy(GTK_SCROLLED_WINDOW(scrolled_window), GTK_POLICY_AUTOMATIC, GTK_POLICY_ALWAYS);

	box_head = gtk_box_new(GTK_ORIENTATION_VERTICAL, 1);
	box = gtk_box_new(GTK_ORIENTATION_VERTICAL, 1);
	gtk_box_pack_start(GTK_BOX(box), list, TRUE, TRUE, 5);

	label = gtk_label_new("\nMÓDUDO DE CONSULTA E CADASTRO DE ANIMAIS\n");
	gtk_container_add(GTK_CONTAINER(box_head), label);
	
	box_base = gtk_box_new(GTK_ORIENTATION_VERTICAL, 1);

	cabecalho = gtk_box_new(GTK_ORIENTATION_VERTICAL, 1);
	image = gtk_image_new_from_file(nome_image.c_str());
	gtk_container_add(GTK_CONTAINER(cabecalho), image);
	gtk_container_add(GTK_CONTAINER(box_base), cabecalho);
	
	gtk_container_add(GTK_CONTAINER(box_base), box_head);
	gtk_container_add(GTK_CONTAINER(scrolled_window), box);
	gtk_container_add(GTK_CONTAINER(box_base), scrolled_window);
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