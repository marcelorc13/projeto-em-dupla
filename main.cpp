#include <iostream>
#include <vector>
using namespace std;

class Exercicios
{
public:
    string nome;
    int nDeSeries;
    int nDeReps;
};
class Usuarios
{
public:
    string nome;
    string senha;
};

Exercicios exercio;
vector<Exercicios> lista;

Usuarios usuario;

void cadastrarExercicio()
{
    cout << "Insira o nome do exercicio: ";
    cin >> exercio.nome;
    cout << "Insira o numero de series do exercicio: ";
    cin >> exercio.nDeSeries;
    cout << "Insira o numero de repeticoes do exercicio: ";
    cin >> exercio.nDeReps;

    lista.push_back(exercio);
}

void mostrarExercicio()
{
    for (int i = 0; i < lista.size(); i++)
    {
        cout << endl << "Exercicio de numero " << i + 1 << endl;
        cout << "Nome do exercicio: " << lista[i].nome << endl;
        cout << "Numero de series: " << lista[i].nDeSeries << endl;
        cout << "Numero de repeticoes: " << lista[i].nDeReps << endl;
    }
}

void criarusuario()
{
    cout << "Digite seu nome: ";
    cin >> usuario.nome;
    cout << "Digite sua senha: ";
    cin >> usuario.senha;
    cout << endl << "Seja bem vindo " << usuario.nome << endl;
}

int main()
{
    string continuar;
    continuar = "s";
    criarusuario();
    cadastrarExercicio();
    while (continuar == "s"){
        cout << endl << "Deseja adicionar outro exercicio? Insira 's' para Continuar ou qualquer coisa para Sair ";
        cin >> continuar;
        if (continuar == "s"){
            cadastrarExercicio();
        }
        else{
            mostrarExercicio();
        }
    }
}
