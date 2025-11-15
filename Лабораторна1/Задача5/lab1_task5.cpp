#include <iostream>
using namespace std;

int main() {
    int x;

    do {
    cout << "Введiть оцiнку(0-100): ";
    cin >> x;
    } while(x<0 || x>100);
    
    if(x<60) cout << "Ваша оцiнка - «незадовільно»";
    else if(x<74) cout << "Ваша оцiнка - «задовільно»";
    else if(x<90) cout << "Ваша оцiнка - «добре»";
    else cout << "Ваша оцiнка - «відмінно»";
    return 0;
}