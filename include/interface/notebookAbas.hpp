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

GtkWidget *entry_matricula, *entry_nome, *entry_idade, *entry_celular, *entry_endereco, *entry_cpf, 
*entry_cargo, *entry_crmv, *entry_nivel_seguranca, *label_veterinario, *label_tratador;

GtkWidget *entry_idA, *entry_nomeA, *entry_sexoA, *entry_idadeA, *entry_pesoA, *entry_comprimentoA, *entry_habitatA, 
*entry_patasA, *entry_especieA, *entry_tipoPeleA, *entry_tipoReproducaoA, *entry_alimentoA, *combo_ameacadoA, *entry_vetResponsavelA, 
*entry_TratadorA, *combo_tipoA, *entry_paisOrigemA, *entry_corPeloA, *entry_dentesA, *entry_ufOrigemA, *entry_licencaIBAMAA, 
*button_totalMudasA, *entry_tamanhoBicoA, *entry_corPenasA, *radio_troaPeleA;

GtkAdjustment *adjustmentInt;

//GtkWidget *combo_box;

std::string nome_image = "../res/petfera.jpg";

void atualizarLista();
void atualizarListaAnimalPorFora();


#endif
