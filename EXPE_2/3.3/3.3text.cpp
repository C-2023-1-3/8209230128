#include <iostream>
#include <iomanip> 
#include "mytemperature.h" 

using namespace std;

int main() {
    double cel, fah;
    const double LOW = 31.0;
    const double UP = 40.0;
    const double STEP = 1.0;
    cout << "Celsius    Fahrenheit  |   Fahrenheit       Celsius"<<endl;
    for (cel = UP; cel >=LOW; cel -= STEP) 
    {
        fah = celsius_to_fah(cel);
        cout << setw(6) << fixed << setprecision(1) << cel << setw(14) << fah;
        cout << "   |   ";
        cel = fahrenheit_to_cels(fah);
        cout << setw(10) << fah << setw(14) << cel << endl;
    }
    return 0;
}
