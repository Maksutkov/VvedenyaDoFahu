#include <iostream>
using namespace std;

int main() {
    int x,percent,count,res;
   
    cout << "Введiть вартiсть товару: ";
    cin >> x;
    cout << "Введiть кiлькiсть товару: ";
    cin >> count;
    cout << "Введiть знижку(вiдсоток): ";
    cin >> percent;
    
    if(x>=1000) {
        res = (x*count*percent)/100;
        cout << "Знижкa дiэ, бо вартiсть бiльше за 1000!\nКiнцева вартiсть товару: " << res;
    }
    else {
        res = x*count;
        cout << "Знижка не дiэ, бо вартiсть товара меньше за 1999!\nКiнцева вартiсть товару: " << res;
    }
    return 0;
}