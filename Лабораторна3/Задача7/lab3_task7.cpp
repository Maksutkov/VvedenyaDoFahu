#include <iostream>
using namespace std;

int main() {
    int n;
    cout << R"(1 — Осiнь
2 — Зима
3 — Весна
4 — Лiто)";
    cout << "Введiть пору року за номером: ";
    cin >> n;

    switch (n)
    {
    case 1:
        cout << "Осiнь";
        break;
    case 2:
        cout << "Зима";
        break;
    case 3:
        cout << "Весна";
        break;
    case 4:
        cout << "Лiто";
        break;
    default: 
        cout << "Error!";
    }

    return 0;
}