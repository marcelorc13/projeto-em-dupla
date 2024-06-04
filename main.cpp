#include <iostream>
#include <vector>
using namespace std;

class exercicio {
public:
    string nome;
    int nDeSeries;
    int nDeReps;
};

vector<exercicio> lista;

exercicio objeto;

void cadastrarExercicio() {
    cout << "Insira o nome do exercicio: ";
    cin >> objeto.nome;
    cout << "Insira o numero de series do exercicio: ";
    cin >> objeto.nDeSeries;
    cout << "Insira o numero de repeticoes do exercicio: ";
    cin >> objeto.nDeReps;

    lista.push_back(objeto);
}

void mostrarExercicio() {
    for(int i = 0; i < lista.size(); i++) {
        cout << endl << "Exercicio de numero " << i+1 << endl;
        cout << "Nome do exercicio: " << lista[i].nome << endl;
        cout << "Numero de series: " << lista[i].nDeSeries << endl;
        cout << "Numero de repeticoes: " << lista[i].nDeReps << endl;
    }
}

int main() {
    cadastrarExercicio();
    mostrarExercicio();
}
