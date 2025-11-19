#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int n,x;

    cout << "Введiть число: ";
    cin >> x;
    cout << "Введiть до якого степеню пiднести число (1 - квадрат, 2 - куб): ";
    cin >> n;

    switch (n)
    {
    case 1:
        cout << x << " у квадратi = " << pow(x,2);
        break;
    case 2:
        cout << x << " у кубi = " << pow(x,3);
        break;
    default: 
        cout << "Error!";
    }

    return 0;
}