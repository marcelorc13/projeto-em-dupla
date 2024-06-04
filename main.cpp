#include <iostream>
#include <vector>
using namespace std;

class Usuarios
{
public:
    string nome;
    string senha;
};

class Exercicios
{
public:
    string nome;
    int nDeSeries;
    int nDeReps;
};

Usuarios usuario;

Exercicios exercio;
vector<Exercicios> lista;

void cadastrarUsuario()
{
    cout << "Digite seu nome: ";
    cin >> usuario.nome;
    cout << "Digite sua senha: ";
    cin >> usuario.senha;
    cout << "Usuario cadastrado com sucesso" << endl;
}

void verificarUsuario()
{
    string user, pass;

    cout << endl
         << "Fazer login do usuario: " << endl
         << "Insira o nome do usuario cadastrado: ";
    cin >> user;
    cout << "Insira a senha cadastrada: ";
    cin >> pass;

    if (user == usuario.nome && pass == usuario.senha)
    {
        cout << endl
             << "Seja bem vindo " << usuario.nome << endl;
    }
    else
    {
        cout << endl
             << "Usuario ou senha incorreto, tente novamente" << endl;
        verificarUsuario();
    }
}

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
        cout << endl
             << "Exercicio de numero " << i + 1 << endl;
        cout << "Nome do exercicio: " << lista[i].nome << endl;
        cout << "Numero de series: " << lista[i].nDeSeries << endl;
        cout << "Numero de repeticoes: " << lista[i].nDeReps << endl;
    }
}

int main()
{
    cadastrarUsuario();
    verificarUsuario();

    string continuar = "s";
    cadastrarExercicio();
    while (continuar == "s")
    {
        cout << "\n Deseja adicionar outro exercicio? Insira 's' para Continuar ou qualquer botao para Sair \n ";
        cin >> continuar;
        if (continuar == "s")
        {
            cadastrarExercicio();
        }
        else
        {
            mostrarExercicio();
            cout << endl
                 << "Deseja voltar ao sistema? Insira 's' para Continuar ou qualquer botao para Sair \n";
            cin >> continuar;
            if (continuar == "s")
            {
                cadastrarExercicio();
            }
            else
            {
                cout << "Voce saiu do sistema com sucesso";
            }
        }
    }
}
