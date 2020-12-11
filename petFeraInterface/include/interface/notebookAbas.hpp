#ifndef NOTEBOOKABAS_HPP
#define NOTEBOOKABAS_HPP
#include <gtk/gtk.h>
#include <sqlite3.h>
#include <iostream>
#include "veterinario.hpp"
#include "tratador.hpp"

GtkWidget *window;
GtkWidget *notebook;
GtkWidget *button, *grid, *frame, *box, *label, *label_veterinario, *label_tratador, *box_head, *box_base;
GtkWidget *radio1, *radio2;
GtkWidget *entry_prod, *entry_cb, *entry_medida, *entry_qtd, *entry_preco;
GtkWidget *entry_matricula, *entry_nome, *entry_idade, *entry_celular, *entry_endereco, *entry_cpf, *entry_cargo, *entry_crmv, *entry_nivel_seguranca;

void atualizarLista();


#endif
