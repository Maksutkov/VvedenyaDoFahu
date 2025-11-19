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
        cout << "Холодний сезон";
        break;
    case 2:
        cout << "Холодний сезон";
        break;
    case 3:
        cout << "Теплий сезон";
        break;
    case 4:
        cout << "Теплий сезон";
        break;
    default: 
        cout << "Error!";
    }

    return 0;
}