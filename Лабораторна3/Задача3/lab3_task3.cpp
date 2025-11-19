#include <iostream>
using namespace std;

int main() {
    int n;
    double x;

    cout << R"(1 — Нова Пошта
2 — Укрпошта
3 — Meest
4 — GLS)";
    cout << "\nВведiть номер бажаноi служби доставки: ";
    cin >> n;

    switch (n)
    {
    case 1:
        cout << "Вартiсть доставки: 300 грн. Час доставки: 3 днi";
        break;
    case 2:
        cout << "Вартiсть доставки: 120 грн. Час доставки: 4 днi";
        break;
    case 3:
        cout << "Вартiсть доставки: 350 грн. Час доставки: 3 днi";
        break;
    case 4:
        cout << "Вартiсть доставки: 600 грн. Час доставки: 5 днiв";
        break;
    default: 
        cout << "Error!";
    }

    return 0;
}