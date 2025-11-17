#include <iostream>
using namespace std;

int main() {
    int x;
   
    cout << "Введiть ваш вiк: ";
    cin >> x;
    
    if(x<13) cout << "Дитина";
    else if(x<20) cout << "Пiдлiток";
    else if(x<60) cout << "Дорослий";
    else cout << "Лiтня людина";
    return 0;
}