#include <iostream>
using namespace std;

int main() {
    int x,balance = 1000;

    cout << "Ваш баланс: " << balance << endl;
    cout << "Введiть суму для зняття: ";
    cin >> x;
    
    if(x<=0) cout << "Помилка!";
    else if(x>balance) cout << "Недостатньо коштiв!";
    else {
        cout << "Операцiя успiшна!\n Списано: " << x << "\n Ваш баланс: " << balance-x;
    }
    return 0;
}