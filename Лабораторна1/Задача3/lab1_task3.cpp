#include <iostream>
using namespace std;

int main() {
    int x, y, memx;

    cout << "Введiть число X: ";
    cin >> memx;
    x = memx;
    cout << "Х до виконання операцiй: " << x << endl;
    cout << "Х з префiксним iнкрементом: " << ++x << endl;
    x = memx;
    cout << "Х з постфiксним iнкрементом: " << x++ << endl;
    x = memx;
    cout << "Х з префiксним дикрементом: " << --x << endl;
    x = memx;
    cout << "Х з постфiксним дикрементом: " << x-- << endl << endl;
    x = memx;

    y = 10;
    cout << "Початкове значення y = 10" << endl;
    cout << "Y + X з префiксним iнкрементом = " << y << " + ++x" << " = " << y + ++x << endl;
    x = memx;
    cout << "Y + Х з постфiксним iнкрементом = " << y << " + x++" << " = " << y + x++ << endl;

    return 0;
}