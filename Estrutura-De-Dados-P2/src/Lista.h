/*
ESTRUTURA DE DADOS - P2 - Lista Encadeada
  Grupo:
    Caio Cezar Oliveira Filardi do Carmo        |   TIA: 31891365   |
    Mayara Meneghetti Honda	                    |   TIA: 32152280   |
    Paulo Henrique Braga Cechinel               |   TIA: 32151128   |
    Ricardo Gabriel Marques dos Santos Ruiz     |   TIA: 32134908   |
*/

#ifndef LISTA_H
#define LISTA_H

#if !(__cplusplus >= 201103L || (defined(_MSC_VER) && _MSC_VER >= 1900))
    #define nullptr NULL
#endif

#include "Paciente.h"
#include <string>
#include <ostream>
#include <iostream>
#include <sstream>

using namespace std;
typedef Paciente TYPE;
// No
class Node
{
public:
    Node(TYPE& data, Node* nextNode);
    Node();
    ~Node();
    TYPE& GetData() { return _data; }
    Node* GetNextNode() const { return _nextNode; }
    void SetNextNode(Node* node) { _nextNode = node;}
private:
    TYPE _data;
    Node* _nextNode;
};

// Lista
class Lista
{
public:
    Lista();
    ~Lista();
    bool IsEmpty() const;
    bool IsFull() const;
    bool Insert(TYPE& data);                                // O(1)
    bool Remove(TYPE& data);                                // O(n)
    void Clear();                                           // O(n)
    bool Find(const TYPE& data) const;                      // O(n)
    TYPE& FindByPosition(unsigned int position) const;      // O(n)
    unsigned int FindPosition(TYPE& data) const;            // O(n)
    unsigned int GetSize() const { return _size; }
    string ToString() const;
    // Custom Query
    unsigned int GetDeadQuantity() const;                   // O(n)
    unsigned int GetDeadSmokers() const;                    // O(n)
    unsigned int GetDeadObeses() const;                     // O(n)
    unsigned int GetYoungSmokerPregnantWoman() const;       // O(n)
    unsigned int GetDeadYoungSmokerPregnantWoman() const;   // O(n)
private:
    unsigned int _size;
    Node* _head;
    Node* _tail;
};
// Overload do operador bitwise para facilitar o print da lista
inline ostream& operator <<(ostream& str, const Lista& lista)
{
    return str << lista.ToString();
}

#endif