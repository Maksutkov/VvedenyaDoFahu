#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Введiть оцiнку сервiсу вiд 1 до 5: ";
    cin >> n;

    switch (n)
    {
    case 1:
        cout << "F";
        break;
    case 2:
        cout << "D";
        break;
    case 3:
        cout << "C";
        break;
    case 4:
        cout << "B";
        break;
    case 5:
        cout << "A";
        break;
    default: 
        cout << "Error!";
    }

    return 0;
}