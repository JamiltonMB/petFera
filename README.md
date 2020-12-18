<h1>PetFera</h1>
  

Equipe Desenvolvedora:

1 - Fernando Breno dos Santos Barbosa -> MAT.: 20190146817

2 - Jamilton Medeiros Barbosa -> MAT.: 20190125325

3 - Raquel Alves de Brito -> MAT.: 20190039595


Conteúdo Implementado:
Na primeira parte foram implementados dois módulos do programa PetFera: O módulo de cadastro de 
funcionários e o módulo de cadastro de animais. Cada módulo conta com seu respectivo
CRUD e uum conjunto de classes. A interação com o usuário era feita via
terminal, porém já implementamos uma interface gráfica. O programa
era executado através de uma instância de uma classe chamada "Programa", os métodos
dessa classe fazem o uso das classes animal e funcionário.

Na primeira entrega ocorreu um erro de versionamento e foi entregue uma versão que não
compilava e apresentava muitos erros, nesta segunda etapa nós corrigimos os erros e implementamos 
a interface gráfica.

Na segunda parte, versão atual, usamos o gtk para criação da interface gráfica e para persistência de 
dados utilizamos o banCo de dados SQLite. Na janela principal foi criado duas abas: Consultar Funcionários
e Consultar Animais, nelas o usuário pode atualizar, deletar, editar e inserir um novo tipo especificado 
em cada aba.

============================================================================


Como usar o programa:
Para que o programa seja compilado é necessario instalar o banco de dados SQLite e a biblioteca gtk, digite os seguintes comandos no terminal para instalação:
Para o SQLite: sudo apt-get install sqlite3
Para o gtk : sudo apt-get install libgtk-3-dev

O processo de compilação foi automatizado com CMAKE, para compilar e executar
o programa deve-se seguir os seguints passos:

1 - Navegar via terminal até o diretório /build

2 - Executar o comando: cmake ..

3 - Executar o comando: make

4 - Executar o comando: ./prog

Melhorias a serem feitas: Para melhorias futuras é necessario fazer o tratamento de exceções e a validação de dados dos campos, neste segundo caso, na versão atual, se o usuário digitar dados inválidos nos campos o programa da erro

============================================================================

Endereço do repositório:
https://github.com/JamiltonMB/petFera
Endereço do video no YouTube:
https://youtu.be/TUgKzerv9FI

