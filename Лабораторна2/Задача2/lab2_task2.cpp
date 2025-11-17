#include <iostream>
using namespace std;

int main() {
    int x;

    cout << "Введiть ваш вiк: ";
    cin >> x;
    
    if(x<13) cout << "Доступ заборонено";
    else if(x<=17) cout << "Доступ з батьківським контролем";
    else cout << "Повний доступ";
    return 0;
}