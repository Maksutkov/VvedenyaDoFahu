#include <iostream>
using namespace std;

int main() {
    int n;
    cout << R"(1 — Еспресо
2 — Американо
3 — Капучино
4 — Лате
5 — Какао)";
    cout << "Введiть номер кофе з меню: ";
    cin >> n;

    switch (n)
    {
    case 1:
        cout << "Еспрессо, цiна: 40 грн";
        break;
    case 2:
        cout << "Американо, цiна: 50 грн";
        break;
    case 3:
        cout << "Капучино, цiна: 60 грн";
        break;
    case 4:
        cout << "Лате, цiна: 70 грн";
        break;
    case 5:
        cout << "Какао, цiна: 45 грн";
        break;
    default: 
        cout << "Error!";
    }

    return 0;
}