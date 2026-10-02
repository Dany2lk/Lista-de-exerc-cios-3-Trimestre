#include <iostream>
using namespace std;

int main() {
    int vitorias, empates;

    cout << "Quantidade de vitórias: ";
    cin >> vitorias;
    cout << "Quantidade de empates: ";
    cin >> empates;

    if (vitorias < 0 || empates < 0) {
        cout << "Quantidade inválida.\n";
        return 0;
    }

    int pontos = vitorias * 3 + empates;
    cout << "Pontuação total: " << pontos << "\n";

    return 0;
}


