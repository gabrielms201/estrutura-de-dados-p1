/*
ESTRUTURA DE DADOS - P2 - Lista Encadeada
  Grupo:
    Caio Cezar Oliveira Filardi do Carmo        |   TIA: 31891365   |
    Mayara Meneghetti Honda	                    |   TIA: 32152280   |
    Paulo Henrique Braga Cechinel               |   TIA: 32151128   |
    Ricardo Gabriel Marques dos Santos Ruiz     |   TIA: 32134908   |
*/

#ifndef MAIN_H
#define MAIN_H

#include <iostream>
#include "Paciente.h"
#include "Fila.h"
#include "Lista.h"
#include <string>
#include <fstream>
#include <sstream>
#include <iostream>
#include <chrono>

#ifdef WIN32 
    #define CLEAR_SCREAM() system("cls");
#else
    #define CLEAR_SCREAM() system("clear");
#endif


using namespace std;
using namespace chrono;


void submenuComorbidade(ostringstream& opcoes);
void submenuCovid(ostringstream& opcoes);
void submenuMorte(ostringstream& opcoes);
long consultar(ostringstream& opcoes, Lista& lista);
void testes(string filePath);
void putContentIntoList(string filePath, Lista& list);
void menu(Lista& list);


#endif