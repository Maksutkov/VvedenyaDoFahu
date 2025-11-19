#include <iostream>
using namespace std;

int main() {
    int n;
    cout << R"(1 — “Дуже погано”,
2 — “Погано”,
3 — “Задовільно”,
4 — “Добре”,
5 — “Відмінно”

Введiть оцiнку сервiсу вiд 1 до 5: )";
    cin >> n;

    switch (n)
    {
    case 1:
        cout << "“Дуже погано”";
        break;
    case 2:
        cout << "“Погано”";
        break;
    case 3:
        cout << "“Задовільно”";
        break;
    case 4:
        cout << "“Добре”";
        break;
    case 5:
        cout << "“Відмінно”";
        break;
    default: 
        cout << "Error!";
    }

    return 0;
}