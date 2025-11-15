#include <iostream>
using namespace std;

int main() {
    int a,y,x;

    cout << "Введiть число: ";
    cin >> a;
    cout << "Остаток вiд дiлення " << a << " на 7 = " << a%7 << endl;

    cout << "Введiть перше число: ";
	cin >> y;
	cout << "Введiть друге число: ";
	cin >> x;
	

	if(y%x==0) cout << "\nЧисло " << y << " дiлиться на " << x << " без остачи\n";
    else cout << "\nОстаток вiд дiлення x на y = " << x%y << endl;
    
    if(y&2==0) cout << "Число " << y << "парне\n";
    if(x&2==0) cout << "Число " << x << "парне\n";

	return 0;
}