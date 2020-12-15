#ifndef NOTEBOOKABAS_HPP
#define NOTEBOOKABAS_HPP
#include <gtk/gtk.h>
#include <sqlite3.h>
#include <iostream>
#include "veterinario.hpp"
#include "tratador.hpp"
#include "interface/abafuncionarios.hpp"
#include "Animal/anfibioNativo.hpp"
#include "Animal/anfibioExotico.hpp"
#include "Animal/anfibioDomestico.hpp"
#include "Animal/reptilDomestico.hpp"
#include "Animal/reptilExotico.hpp"
#include "Animal/reptilNativo.hpp"
#include "Animal/aveNativo.hpp"
#include "Animal/aveDomestica.hpp"
#include "Animal/aveExotico.hpp"
#include "Animal/mamiferoNativo.hpp"
#include "Animal/mamiferoExotico.hpp"
#include "Animal/mamiferoDomestico.hpp"

GtkWidget *cabecalho, *image;
GtkWidget *window, *notebook;
GtkWidget *box_buttons;
GtkWidget *button, *grid, *frame, *box, *label, *box_head, *box_base;
GtkWidget *radio1, *radio2;
//GtkWidget *entry_prod, *entry_cb, *entry_medida, *entry_qtd, *entry_preco;
GtkWidget *entry_matricula, *entry_nome, *entry_idade, *entry_celular, *entry_endereco, *entry_cpf, 
*entry_cargo, *entry_crmv, *entry_nivel_seguranca, *label_veterinario, *label_tratador;

std::string nome_image = "../res/petfera.jpg";

void atualizarLista();


#endif
