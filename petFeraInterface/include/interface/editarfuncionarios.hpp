#ifndef EDITARFUNCIONARIOS_HPP
#define EDITARFUNCIONARIOS_HPP
#include <string.h>
#include "interface/notebookAbas.hpp"

bool isVeterinarioEditar=true;

GtkWidget *janela_editar;

static void fecharJanelaEditar(GtkWidget *widget, gpointer data)
{
    atualizarLista();
}

void janelaCadastroEditar(std::string idEditar)
{


	
	janela_editar = gtk_window_new(GTK_WINDOW_TOPLEVEL);
	gtk_window_set_position(GTK_WINDOW(janela_editar), GTK_WIN_POS_CENTER);
	gtk_window_set_default_size(GTK_WINDOW(janela_editar), 600, 300);
	gtk_container_set_border_width(GTK_CONTAINER(janela_editar), 10);
	gtk_window_set_title(GTK_WINDOW(janela_editar), "PET FERA");
	g_signal_connect(G_OBJECT(janela_editar), "destroy", G_CALLBACK(fecharJanelaEditar), NULL);
	gtk_widget_show(janela_editar);

}

#endif