#include <iostream>
using namespace std;

int main() {
    int n;
    cout << R"(1 — Сир
2 — Молоко
3 — Йогурт
4 — Творог)";
    cout << "Введiть номер товара з меню: ";
    cin >> n;

    switch (n)
    {
    case 1:
        cout << "Сир, цiна: 50 грн";
        break;
    case 2:
        cout << "Молоко, цiна: 45 грн";
        break;
    case 3:
        cout << "Йогурт, цiна: 60 грн";
        break;
    case 4:
        cout << "Творог, цiна: 60 грн";
        break;
    default: 
        cout << "Error!";
    }

    return 0;
}