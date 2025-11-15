#include <iostream>
using namespace std;

int main() {
    int a,b,x,y,size;

	cout << "Введiть перше число: ";
	cin >> x;
	cout << "Введiть друге число: ";
	cin >> y;

	cout << "x+y = " << x+y << endl;
	cout << "x-y = " << x-y << endl;
	cout << "x*y = " << x*y << endl;
	cout << "x/y = " << x/y << endl;

	cout << "Введiть довжину прямокутника: ";
	cin >> a;
	cout << "Введiть ширину прямокутника: ";
	cin >> b;

	double newa = a, newb = b;

	cout << "Площа прямокутника = a*b = " << newa*newb << endl;

	size = sizeof(a)+sizeof(b)+sizeof(x)+sizeof(y)+sizeof(newa)+sizeof(newb)+sizeof(size);
    cout << endl << "Обсяг пам'ятi всiх змiнных = " << size << endl;

	cout << "\nАдреса a: " << &a << " Обсяг пам'ятi a = " << sizeof(a) << endl;
    cout << "Адреса b: " << &b << " Обсяг пам'ятi b = " << sizeof(b) << endl;
	cout << "Адреса x: " << &x << " Обсяг пам'ятi x = " << sizeof(x) << endl;
	cout << "Адреса y: " << &y << " Обсяг пам'ятi y = " << sizeof(y) << endl;
	cout << "Адреса newa: " << &newa << " Обсяг пам'ятi newa = " << sizeof(newa) << endl;
	cout << "Адреса newb: " << &newb << " Обсяг пам'ятi newb = " << sizeof(newb) << endl;
	cout << "Адреса size: " << &size << " Обсяг пам'ятi size = " << sizeof(size);

	return 0;
}