CMAKE_MINIMUM_REQUIRED(VERSION 3.1)
PROJECT(PetFera)

SET(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -Wall -ggdb3 -pedantic")
FIND_PACKAGE(PkgConfig REQUIRED)
PKG_CHECK_MODULES(GTK3 REQUIRED gtk+-3.0)



INCLUDE_DIRECTORIES(include/)
INCLUDE_DIRECTORIES(${GTK3_INCLUDE_DIRS})
LINK_DIRECTORIES(${GTK3_LIBRARY_DIRS})
ADD_DEFINITIONS(${GTK3_CFLAGS_OTHER})
link_directories(/lib)

ADD_EXECUTABLE(prog src/main.cpp src/veterinario.cpp src/tratador.cpp src/funcionario.cpp src/Animal/animal.cpp src/Animal/ave.cpp src/Animal/mamifero.cpp src/Animal/reptil.cpp src/Animal/nativo.cpp
src/Animal/anfibioDomestico.cpp src/Animal/anfibioNativo.cpp src/Animal/anfibioExotico.cpp
src/Animal/aveDomestica.cpp src/Animal/aveExotico.cpp src/Animal/aveNativo.cpp
src/Animal/mamiferoDomestico.cpp src/Animal/mamiferoExotico.cpp src/Animal/mamiferoNativo.cpp
src/Animal/reptilDomestico.cpp src/Animal/reptilNativo.cpp src/Animal/reptilExotico.cpp src/Animal/domestico.cpp src/Animal/anfibio.cpp)

TARGET_LINK_LIBRARIES(prog ${GTK3_LIBRARIES})
target_link_libraries(prog sqlite3)
