#ifndef ABAFUNCIONARIOS_HPP
#define ABAFUNCIONARIOS_HPP
#include <vector>
#include <memory>
#include <string>
#include "interface/notebookAbas.hpp"
#include "interface/cadastrarfuncionarios.hpp"
#include "interface/editarfuncionarios.hpp"

std::vector<std::shared_ptr<Funcionario>> funcionarios;

std::vector<std::string> v;


static int callback2(void *NotUsed, int argc, char **argv, char **azColName)
{

	if(std::stoi(argv[10])==1){
		funcionarios.push_back(std::make_shared<Veterinario>(std::stoi(argv[0]),argv[1],argv[2],argv[3],argv[4],
			argv[5],argv[6],argv[7],argv[8]));
	}else{
		funcionarios.push_back(std::make_shared<Tratador>(std::stoi(argv[0]),argv[1],argv[2],argv[3],argv[4],
			argv[5],argv[6],argv[7],argv[9]));		
	}
	return 0;
}

void show_error(gpointer window) {
    
  GtkWidget *dialog;
  dialog = gtk_message_dialog_new(GTK_WINDOW(window),
            GTK_DIALOG_DESTROY_WITH_PARENT,
            GTK_MESSAGE_ERROR,
            GTK_BUTTONS_OK,
            "Erro: clique em uma das linhas da lista");
  gtk_window_set_title(GTK_WINDOW(dialog), "Error");
  gtk_dialog_run(GTK_DIALOG(dialog));
  gtk_widget_destroy(dialog);
}

void show_ok(gpointer window) {
    
  GtkWidget *dialog;
  dialog = gtk_message_dialog_new(GTK_WINDOW(window),
            GTK_DIALOG_DESTROY_WITH_PARENT,
            GTK_MESSAGE_INFO,
            GTK_BUTTONS_OK,
            "Operação realizada com sucesso!");
  gtk_window_set_title(GTK_WINDOW(dialog), "Operação realizada");
  gtk_dialog_run(GTK_DIALOG(dialog));
  gtk_widget_destroy(dialog);
}


void pegarDados(){
	
	sqlite3 *db;
	char *zErrMsg = 0;
	int rc;
	std::string sql = "Select * from funcionarios;";
   
   	rc = sqlite3_open("../database/dados.db", &db);
   
   	if(rc){
      	std::cout<<sqlite3_errmsg(db)<<std::endl;
      	return;
   	} else {
      	//std::cout<<"Banco de dados aberto com sucesso!"<<std::endl;
   	}

   	rc = sqlite3_exec(db, sql.c_str(), callback2, 0, &zErrMsg);
   
	if(rc != SQLITE_OK){
		std::cout<<"Erro ao buscar dados"<<std::endl;
		sqlite3_free(zErrMsg);
	} else {
		//std::cout<<"Dados abertos com sucesso"<<std::endl;
	}

   	sqlite3_close(db);
   	
}



enum {
	LIST_ID,
	LIST_MATRICULA,
	LIST_NOME,
	LIST_IDADE,
	LIST_CELULAR,
	LIST_ENDERECO,
	LIST_CPF,
	LIST_CARGO,
	LIST_CRMV,
	LIST_SEGURANCA,
	LIST_ISVETERINARIO,
	N_COLUMNS
};


   GtkTreeViewColumn *column;
   GtkListStore* store; 
   GtkWidget *list;
   GtkWidget *scrolled_window;



void listar(){

	for(auto &funcionario : funcionarios){
		gtk_list_store_insert_with_values(store, NULL, -1,
											LIST_ID, std::to_string(funcionario->getId()).c_str(),
											LIST_MATRICULA, funcionario->getMatricula().c_str(),
											LIST_NOME, funcionario->getNome().c_str(),
											LIST_IDADE, funcionario->getIdade().c_str(),
											LIST_CELULAR, funcionario->getCelular().c_str(),
											LIST_ENDERECO, funcionario->getEndereco().c_str(),
											LIST_CPF, funcionario->getCpf().c_str(),
											LIST_CARGO, funcionario->getCargo().c_str(),
											LIST_CRMV, (funcionario->getIsVeterinario() ? std::dynamic_pointer_cast<Veterinario>(funcionario)->getCrmv().c_str() : "NULL"),
											LIST_SEGURANCA, (funcionario->getIsVeterinario() ? "NULL" : std::dynamic_pointer_cast<Tratador>(funcionario)->getNivel_seguranca().c_str()),
											LIST_ISVETERINARIO, (funcionario->getIsVeterinario() ? "SIM" : "NÃO"),
											-1);					
	}

}

void atualizarLista(){
	gtk_list_store_clear(store);
	funcionarios.clear();
	pegarDados();
	listar();
}

void deletarPorId(std::string idDel){
	
	sqlite3 *db;
	char *zErrMsg = 0;
	int rc;
	std::string sqlfinal = ";";
	std::string sql = "DELETE from funcionarios where id="+idDel+sqlfinal;
   
   	rc = sqlite3_open("../database/dados.db", &db);
   
   	if(rc){
      	std::cout<<sqlite3_errmsg(db)<<std::endl;
      	return;
   	} else {
      	//std::cout<<"Banco de dados aberto com sucesso!"<<std::endl;
   	}

   	rc = sqlite3_exec(db, sql.c_str(), NULL, 0, &zErrMsg);
   
	if(rc != SQLITE_OK){
		std::cout<<"Erro ao buscar dados"<<std::endl;
		sqlite3_free(zErrMsg);
	} else {
		//std::cout<<"Dados abertos com sucesso"<<std::endl;
	}

   	sqlite3_close(db);
   	
}

static void atualizar(gpointer data)
{
	atualizarLista();
}

static void deletarFuncionario(){
	GtkTreeSelection *selection;
	GtkTreeModel     *model;
	GtkTreeIter       iter;
	selection = gtk_tree_view_get_selection(GTK_TREE_VIEW(list));
	
	if (gtk_tree_selection_get_selected(selection, &model, &iter)){
		char *name;
		gtk_tree_model_get(model, &iter, LIST_ID, &name, -1);
		std::string idDelete = name;
		delete name;
		deletarPorId(idDelete);
		show_ok(window);
		atualizarLista();
	}else{
    show_error(window);
	}
}

static void editarFuncionario(){
	GtkTreeSelection *selection;
	GtkTreeModel     *model;
	GtkTreeIter       iter;
	selection = gtk_tree_view_get_selection(GTK_TREE_VIEW(list));
	
	if (gtk_tree_selection_get_selected(selection, &model, &iter)){
		char *name;
		gtk_tree_model_get(model, &iter, LIST_ID, &name, -1);
		std::string idEditar = name;
		delete name;
		janelaCadastroEditar(idEditar);
	}else{
    show_error(window);
	}
}

static void inserirNovoFuncionario(){
	janelaCadastro();
}


void exibir_funcionarios()
{
	pegarDados();
	scrolled_window = gtk_scrolled_window_new(NULL, NULL);
	gtk_container_set_border_width(GTK_CONTAINER(scrolled_window), 10);
	gtk_scrolled_window_set_min_content_height(GTK_SCROLLED_WINDOW (scrolled_window), 400);
	gtk_scrolled_window_set_min_content_width(GTK_SCROLLED_WINDOW (scrolled_window), 800);
	gtk_scrolled_window_set_policy(GTK_SCROLLED_WINDOW(scrolled_window), GTK_POLICY_AUTOMATIC, GTK_POLICY_ALWAYS);

	store = gtk_list_store_new(N_COLUMNS, G_TYPE_STRING, G_TYPE_STRING, G_TYPE_STRING, G_TYPE_STRING, G_TYPE_STRING, 
								G_TYPE_STRING, G_TYPE_STRING, G_TYPE_STRING, G_TYPE_STRING, G_TYPE_STRING, G_TYPE_STRING);
	list = gtk_tree_view_new_with_model(GTK_TREE_MODEL(store));
	//g_signal_connect(list, "row-activated", G_CALLBACK(view_onRowActivated), NULL);

	g_object_unref(store);
	
	listar();

	column = gtk_tree_view_column_new_with_attributes("ID", gtk_cell_renderer_text_new(), "text", LIST_ID, NULL);
	gtk_tree_view_column_set_min_width(column, 10);
	gtk_tree_view_column_set_alignment(column, 0.5);
	gtk_tree_view_append_column(GTK_TREE_VIEW(list), column);

	column = gtk_tree_view_column_new_with_attributes("MATRICULA", gtk_cell_renderer_text_new(), "text", LIST_MATRICULA, NULL);
	gtk_tree_view_column_set_min_width(column, 10);
	gtk_tree_view_column_set_alignment(column, 0.5);
	gtk_tree_view_append_column(GTK_TREE_VIEW(list), column);	
	
	column = gtk_tree_view_column_new_with_attributes("NOME", gtk_cell_renderer_text_new(), "text", LIST_NOME, NULL);
	gtk_tree_view_column_set_min_width(column, 200);
	gtk_tree_view_column_set_alignment(column, 0.5);
	gtk_tree_view_append_column(GTK_TREE_VIEW(list), column);

	column = gtk_tree_view_column_new_with_attributes("IDADE", gtk_cell_renderer_text_new(), "text", LIST_IDADE, NULL);
	gtk_tree_view_column_set_min_width(column, 10);
	gtk_tree_view_column_set_alignment(column, 0.5);
	gtk_tree_view_append_column(GTK_TREE_VIEW(list), column);

	column = gtk_tree_view_column_new_with_attributes("CELUAR", gtk_cell_renderer_text_new(), "text", LIST_CELULAR, NULL);
	gtk_tree_view_column_set_min_width(column, 100);
	gtk_tree_view_column_set_alignment(column, 0.5);
	gtk_tree_view_append_column(GTK_TREE_VIEW(list), column);

	column = gtk_tree_view_column_new_with_attributes("ENDEREÇO", gtk_cell_renderer_text_new(), "text", LIST_ENDERECO, NULL);
	gtk_tree_view_column_set_min_width(column, 200);
	gtk_tree_view_column_set_alignment(column, 0.5);
	gtk_tree_view_append_column(GTK_TREE_VIEW(list), column);
	
	column = gtk_tree_view_column_new_with_attributes("CPF", gtk_cell_renderer_text_new(), "text", LIST_CPF, NULL);
	gtk_tree_view_column_set_min_width(column, 100);
	gtk_tree_view_column_set_alignment(column, 0.5);
	gtk_tree_view_append_column(GTK_TREE_VIEW(list), column);	

	column = gtk_tree_view_column_new_with_attributes("CARGO", gtk_cell_renderer_text_new(), "text", LIST_CARGO, NULL);
	gtk_tree_view_column_set_min_width(column, 10);
	gtk_tree_view_column_set_alignment(column, 0.5);
	gtk_tree_view_append_column(GTK_TREE_VIEW(list), column);

	column = gtk_tree_view_column_new_with_attributes("CRMV", gtk_cell_renderer_text_new(), "text", LIST_CRMV, NULL);
	gtk_tree_view_column_set_min_width(column, 10);
	gtk_tree_view_column_set_alignment(column, 0.5);
	gtk_tree_view_append_column(GTK_TREE_VIEW(list), column);

	column = gtk_tree_view_column_new_with_attributes("NÍVEL SEG.", gtk_cell_renderer_text_new(), "text", LIST_SEGURANCA, NULL);
	gtk_tree_view_column_set_min_width(column, 10);
	gtk_tree_view_column_set_alignment(column, 0.5);
	gtk_tree_view_append_column(GTK_TREE_VIEW(list), column);
	
	column = gtk_tree_view_column_new_with_attributes("VETERINÁRIO?", gtk_cell_renderer_text_new(), "text", LIST_ISVETERINARIO, NULL);
	gtk_tree_view_column_set_min_width(column, 10);
	gtk_tree_view_column_set_alignment(column, 0.5);
	gtk_tree_view_append_column(GTK_TREE_VIEW(list), column);

	box_head = gtk_box_new(GTK_ORIENTATION_VERTICAL, 1);
	box = gtk_box_new(GTK_ORIENTATION_VERTICAL, 1);
	gtk_box_pack_start(GTK_BOX(box), list, TRUE, TRUE, 5);

	label = gtk_label_new("\nMÓDUDO DE CONSULTA DE FUNCIONÁRIOS\n");
	gtk_container_add(GTK_CONTAINER(box_head), label);
	
	box_base = gtk_box_new(GTK_ORIENTATION_VERTICAL, 1);
	
	grid = gtk_grid_new();
	button = gtk_button_new_with_label("ATUALIZAR LISTA");
	g_signal_connect(button, "clicked", G_CALLBACK(atualizar), NULL);
	gtk_grid_attach(GTK_GRID(grid), button, 0, 0, 1, 1);
	button = gtk_button_new_with_label("DELETAR FUNCIONÁRIO");
	g_signal_connect(button, "clicked", G_CALLBACK(deletarFuncionario), NULL);
	gtk_grid_attach(GTK_GRID(grid), button, 1, 0, 1, 1);
	button = gtk_button_new_with_label("EDITAR FUNCIONÁRIO");
	g_signal_connect(button, "clicked", G_CALLBACK(editarFuncionario), NULL);
	gtk_grid_attach(GTK_GRID(grid), button, 2, 0, 1, 1);
	button = gtk_button_new_with_label("INSERIR NOVO FUNCIONÁRIO");
	g_signal_connect(button, "clicked", G_CALLBACK(inserirNovoFuncionario), NULL);
	gtk_grid_attach(GTK_GRID(grid), button, 3, 0, 1, 1);


	gtk_container_add(GTK_CONTAINER(box_base), box_head);
	gtk_container_add(GTK_CONTAINER(scrolled_window), box);
	gtk_container_add(GTK_CONTAINER(box_base), scrolled_window);
	gtk_container_add(GTK_CONTAINER(box_base), grid);
	gtk_container_add(GTK_CONTAINER(notebook), box_base);
	gtk_notebook_set_tab_label_text (GTK_NOTEBOOK (notebook), box_base, "CONSULTAR FUNCIONÁRIOS");
	gtk_widget_show(notebook);
	gtk_widget_show_all(box_base);
	gtk_widget_show_all(box_head);
	gtk_widget_show_all(box);
}

#endif