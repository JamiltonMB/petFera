CMAKE_MINIMUM_REQUIRED(VERSION 3.1)
PROJECT(PetFera)

SET(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -Wall -ggdb3 -pedantic")

INCLUDE_DIRECTORIES(include/)

ADD_EXECUTABLE(prog src/main.cpp src/funcionario.cpp src/veterinario.cpp src/tratador.cpp src/programa.cpp 
src/animal.cpp src/aves.cpp src/mamiferos.cpp src/repteis.cpp)
