#include <iostream>
using namespace std;

int main() {
    int age, payment;
    string name, surname, pos;

    cout << "Введiть вiк: ";
    cin >> age;4
    cout << "Введiть бажану зарплату: ";
    cin >> payment;

    if(age > 20 && (payment >= 400 && payment <= 1000)) {
    cout << "We will consider your position\n";
    }
    else {
        cout << "You are not suitable\n";
        return 0;
    }

    cout << "Введiть ваше iм'я: ";
    cin >> name;
    cout << "Введiть ваше прiзвище: ";
    cin >> surname;
    cout << "Введiть вашу бажану посаду: ";
    cin >> pos;

    cout << endl << "Ваше iм'я: " << name << endl;
    cout << "Ваше прiзвище: " << surname << endl;
    cout << "Ваш вiк: " << age << endl;
    cout << "Ваша бажана посада: " << pos << endl;
    cout << "Ваша бажана зарплата: " << payment << endl;
    cout << "Заявка вiдправлена, вам передзвонять";
    return 0;
}