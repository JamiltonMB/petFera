#ifndef PROGRAMA_HPP
#define PROGRAMA_HPP
#include "interface/abafuncionarios.hpp"
#include "interface/abaAnimais.hpp"

static void destroy(GtkWidget *widget, gpointer data)
{
    gtk_main_quit();
}

void chamarPrograma(int argc, char *argv[]){
	gtk_init(&argc, &argv);
	window = gtk_window_new(GTK_WINDOW_TOPLEVEL);
	gtk_window_set_position(GTK_WINDOW(window), GTK_WIN_POS_CENTER);
	gtk_window_set_default_size(GTK_WINDOW(window), 1200, 600);
	gtk_container_set_border_width(GTK_CONTAINER(window), 10);
	gtk_window_set_title(GTK_WINDOW(window), "PET FERA");
	gtk_window_maximize(GTK_WINDOW(window));
	g_signal_connect(G_OBJECT(window), "destroy", G_CALLBACK(destroy), NULL);

	notebook = gtk_notebook_new();
	exibir_funcionarios();
	exibir_animais();

	gtk_container_add(GTK_CONTAINER(window), notebook);

	//gtk_widget_show_all(window);
	gtk_widget_show(window);

	gtk_main();
}


#endif