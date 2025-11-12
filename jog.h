#include <iostream>
#include <string>
#include <vector>
#include <map>
#include <fstream>
#include <locale>
#include <cstdlib>

using namespace std;

#define CACETINHO system("chcp 65001");

#define LIMPAR system("cls");

class Funcionario{
    public:
        int id;
        map<string, int> atributos = {
            {"Inteligencia", 1},
            {"Desenvolvimento e Pesquisa", 1},
            {"Motivacao", 1}
        };
        double salario;

};

class Empresa{
    public:
        string nome;
        double valor = 0 ;
        vector<Funcionario> funcionarios;

        map<string, int> melhorias = {
            {"Ambiente", 1},
            {"Infraestrutura", 1},
            {"Marketing", 1}
        };
};

string NomeDoEmpresario;
double dinheiro;
int dia;

string op;

vector<Empresa> Empresas;

void menu();
void criarEmpresa(string nome);