﻿#include "ArvoreBinaria.h"
using namespace std;

// No
No::No(int dado)
	: esq(NULL), dir(NULL), chave(dado)
{

}

// ArvoreBST
// Arvore BST esta sendo inicializada pelo metodo ArvoreBST
ArvoreBST::ArvoreBST()
	: raiz(NULL)
{

}
//const -> não altera atributo
// Implementacao de metodos:
// TIPO_RETORNO CLASSE::NOME_DO_METODO(TIPO_PARAMETRO NOME_PARAMETRO, ...) 

void ArvoreBST::inserir(int chave)
{
	if (raiz == NULL) // verifica se a �rvore est� vazia
		raiz = new No(chave); // cria um novo n�
	else
		inserirAux(raiz, chave);
}

void ArvoreBST::inserirAux(No* no, int chave) const
{
	// se for menor, ent�o insere � esquerda
	
	if (chave < no->getChave())
	{
		// verifica se a esquerda � nulo
		if (no->getEsq() == NULL)
		{
			No* novo_no = new No(chave);
			no->setEsq(novo_no); // seta o novo_no � esquerda
		}
		else
		{
			// sen�o, continua percorrendo recursivamente
			inserirAux(no->getEsq(), chave);
		}
	}
	// se for maior, ent�o insere � direita
	else if (chave > no->getChave())
	{
		// verifica se a direita � nulo
		if (no->getDir() == NULL)
		{
			No* novo_no = new No(chave);
			no->setDir(novo_no); // seta o novo_no � direita
		}
		else
		{
			// sen�o, continua percorrendo recursivamente
			inserirAux(no->getDir(), chave);
		}
	}
	// se for igual, n�o vai inserir
	// n�o pode existir 2 chaves iguais
}

void ArvoreBST::emOrdem(No* no) const
{
	if (no != NULL)
	{
		emOrdem(no->getEsq());
		cout << no->getChave() << " ";
		emOrdem(no->getDir());
	}
}

void ArvoreBST::preOrdem(No* no) const
{
	if (no != NULL)
	{
		cout << no->getChave() << " ";
		preOrdem(no->getEsq());
		preOrdem(no->getDir());
	}
}

void ArvoreBST::posOrdem(No* no) const
{
	if (no != NULL)
	{
		posOrdem(no->getEsq());
		posOrdem(no->getDir());
		cout << no->getChave() << " ";

	}
}

No* ArvoreBST::pesquisarRec(int chave) const
{
	return pesquisarRecAux(raiz, chave);
}

No* ArvoreBST::pesquisarRecAux(No* no, int chave) const
{
	if (no == NULL)
	{
		return NULL;
	}
	No* aux = no;
	if (chave > no->getChave()) 
	{
		aux = pesquisarRecAux(no->getDir(), chave);
	}
	else if (chave < no->getChave())
	{
		aux = pesquisarRecAux(no->getEsq(), chave);
	}
	return aux;
}

No* ArvoreBST::pesquisarIter(int chave) const
{
	return nullptr;
}

int ArvoreBST::qdeNos() const
{
	return 0;
}

int ArvoreBST::alturaBST() const
{
	return 0;
}

int ArvoreBST::min() const
{
	return 0;
}

int ArvoreBST::max() const
{
	return 0;
}

int ArvoreBST::folhas() const
{
	return 0;
}

int ArvoreBST::removerFolha(int chave) const
{
	return 0;
}

