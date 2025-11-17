#include <iostream>
using namespace std;

int main() {
    int x;
   
    cout << "Введiть ваше число для перевiрки на кратнiсть: ";
    cin >> x;
    
    if(x%3==0 && x%5==0) {
        cout << "Число кратне 15";
    }
    else cout << "Число некратне 15";
    return 0;
}