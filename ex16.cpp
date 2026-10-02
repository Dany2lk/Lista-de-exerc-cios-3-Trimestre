#include <iostream>
using namespace std;

int main() {
    double nota;

    cout << "Pontuação (0 a 10): ";
    cin >> nota;

    if (nota < 0 || nota > 10) {
        cout << "Pontuação inválida.\n";
    } else if (nota < 4) {
        cout << "Insatisfatório\n";
    } else if (nota < 6) {
        cout << "Regular\n";
    } else if (nota < 8) {
        cout << "Bom\n";
    } else {
        cout << "Excelente\n";
    }

    return 0;
}
