#include <string>
#include <iostream>
using namespace std;

#include "../include/funcionario.hpp"
#include "../include/gerente.hpp"

Gerente::Gerente() { }

Gerente::~Gerente() { }

Gerente::Gerente(string nome, double salario, string dataAdmissao, string senha, int numeroDeFuncionariosGerenciados) {
    this->nome = nome;
    this->salario = salario;
    this->dataAdmissao = dataAdmissao;
    this->senha = senha;
    this->numeroDeFuncionariosGerenciados = numeroDeFuncionariosGerenciados;
} 

void Gerente::aumentoSalario() {
    this->salario *= 10/100;
}

void operator>> (istream &i, Gerente &gerente) {
    Funcionario *funcionario = new Funcionario();
    i >> *funcionario;
    gerente.nome = funcionario->getNome();
    gerente.salario = funcionario->getSalario();
    gerente.dataAdmissao = funcionario->getDataAdmissao();

    cout << "Digite a senha: ";   
    getline(i, gerente.senha);
    cout << "Digite o número de funcionários gerenciados: ";   
    i >> gerente.numeroDeFuncionariosGerenciados;    
}

ostream& operator<< (ostream &o, Gerente gerente) {
    o << gerente;
    o << "\nQuantidade de funcinarios gerenciados: " << gerente.numeroDeFuncionariosGerenciados;
    
    return o;
}

