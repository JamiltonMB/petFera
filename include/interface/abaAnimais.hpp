#ifndef ABAANIMAIS_HPP
#define ABAANIMAIS_HPP
#include <vector>
#include <memory>
#include <string>
#include "interface/notebookAbas.hpp"


void exibir_animais()
{


	scrolled_window = gtk_scrolled_window_new(NULL, NULL);
	gtk_container_set_border_width(GTK_CONTAINER(scrolled_window), 10);
	gtk_scrolled_window_set_min_content_height(GTK_SCROLLED_WINDOW (scrolled_window), 400);
	gtk_scrolled_window_set_min_content_width(GTK_SCROLLED_WINDOW (scrolled_window), 800);
	gtk_scrolled_window_set_policy(GTK_SCROLLED_WINDOW(scrolled_window), GTK_POLICY_AUTOMATIC, GTK_POLICY_ALWAYS);

	box_head = gtk_box_new(GTK_ORIENTATION_VERTICAL, 1);
	box = gtk_box_new(GTK_ORIENTATION_VERTICAL, 1);
	//gtk_box_pack_start(GTK_BOX(box), list, TRUE, TRUE, 5);

	label = gtk_label_new("\nMÓDUDO DE CONSULTA E CADASTRO DE ANIMAIS\n");
	gtk_container_add(GTK_CONTAINER(box_head), label);
	
	box_base = gtk_box_new(GTK_ORIENTATION_VERTICAL, 1);
	
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
}

#endif