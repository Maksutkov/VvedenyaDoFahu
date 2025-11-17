#include <iostream>
using namespace std;

int main() {
    int a,b,c;
   
    cout << "Введiть першу сторону трикутника: ";
    cin >> a;
    cout << "Введiть другу сторону трикутника: ";
    cin >> b;
    cout << "Введiть третю сторону трикутника: ";
    cin >> c;
    
    if(a+b>c && b+c>a && c+a>b) {
        cout << "Трикутник iснуэ, бо кожнi 2 його сторони бiльше за третю";
    }
    else cout << "Трикутник не iснуэ, бо якiсь 2 його сторони не бiльше за третю";
    return 0;
}