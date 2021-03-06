#include <string>
#include <iostream>
#include <vector>
using namespace std;

#include "../include/midia.hpp"
#include "../include/cd.hpp"

Cd::Cd() { }

Cd::~Cd() { }

Cd::Cd(string titulo, string autor, string anoLancamento, int qtdFaixas, string gravadora) {
	this->titulo = titulo;
	this->autor = autor;
	this->anoLancamento = anoLancamento;
	this->qtdFaixas = qtdFaixas;
	this->gravadora = gravadora;
}

void operator>> (istream &i, Cd *cd) { 
	i.ignore();

	cout << "Digite o nome do Cd: ";
	getline(i, cd->titulo);

	cout << "Digite o compositor do Cd: ";
	getline(i, cd->autor);

	cout << "Digite o data de lancamento do Cd: ";
	i >> cd->anoLancamento;

	i.ignore();
	cout << "Digite o nome da gravadora do Cd: ";
	getline(i, cd->gravadora);
	
	cout << "Digite quantidade de faixas do Cd: ";
	i >> cd->qtdFaixas;
}

ostream& operator<< (ostream &o, Cd &midia) {
	o << "\nTitulo: " << midia.titulo;
	o << "\nAutor: " << midia.autor;
	o << "\nAno de lancamento: " << midia.anoLancamento;
	o << "\nGravadora: " << midia.gravadora;
	o << "\nQuantidade de faixas: " << midia.qtdFaixas;
	
	return o;
}

