#include <iostream>
using namespace std;

int main() {
    int x;

    cout << "Введiть суму покупки: ";
    cin >> x;
    
    if(x<100) cout << "Знижки нема!";
    else if(x<500) cout << "Знижка 5%";
    else if(x<1000) cout << "Знижка 10%";
    else cout << "Знижка 15%";
    return 0;
}