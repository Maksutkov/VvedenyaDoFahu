#include <iostream>
using namespace std;

int main() {
    int n;
    cout << R"(1 — звичайний,
2 — студент,
3 — пенсіонер,
4 — VIP-клієнт.

Введiть групу знижки: )";
    cin >> n;

    switch (n)
    {
    case 1:
        cout << "Ваша знижка - 0%";
        break;
    case 2:
        cout << "Ваша знижка - 5%";
        break;
    case 3:
        cout << "Ваша знижка - 10%";
        break;
    case 4:
        cout << "Ваша знижка - 15%";
        break;
    default: 
        cout << "Error!";
    }

    return 0;
}