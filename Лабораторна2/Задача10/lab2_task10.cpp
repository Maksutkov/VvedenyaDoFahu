#include <iostream>
using namespace std;

int main() {
    int number,arr[6],firsthalf=0,secondhalf=0;
   
    do {
    cout << "Введiть 6-значний номер квитка: ";
    cin >> number;
    } while (number<100000 || number>999999);
    

    for(int i = 0 ; i<6 ; i++) {
        arr[i]=number%10;
        number/=10;
    }
    
    for(int i = 0 ; i<3 ; i++) {
        secondhalf+=arr[i];
    }
    for(int i = 3 ; i<6 ; i++) {
        firsthalf+=arr[i];
    }

    cout << "Першi 3 цифри квитка = " << firsthalf << endl;
    cout << "Останнi 3 цифри квитка = " << secondhalf << endl;

    if(firsthalf==secondhalf) cout << "Бiлет щасливий:)";
    else cout << "Бiлет нещасливий:(";
    return 0;
}

// Каким образом я должен был это решить в практике, где изучаются if и else?
// Сделал это задание для понтов, извините, если звучит грубо, но заметьте пожалуйста:)))