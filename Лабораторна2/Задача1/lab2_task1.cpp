#include <iostream>
using namespace std;

int main() {
    int x;

    cout << "Введiть температуру: ";
    cin >> x;
    
    if(x<=0) cout << "«Беремо теплий одяг та рукавички»";
    else if(x<=15) cout << "«Візьміть легку куртку»";
    else if(x<=25) cout << "«Можна одягати футболку»";
    else cout << "«Легкий одяг, сонцезахисні окуляри»";
    return 0;
}