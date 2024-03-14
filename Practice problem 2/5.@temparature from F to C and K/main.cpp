#include <iostream>

using namespace std;

int main()
{
    float tempf, tempc, tempk;

    cout << "Input the temperature in fahrenheit" << endl;
    cin >> tempf;

    tempc = ((tempf-32)*0.55);
    tempk = (tempc+273.15);

    cout << " the temperature in celsius is " << tempc << "C" << endl;
    cout << " the temperature in kelvin is " << tempk << "K" << endl;

    return 0;
}
