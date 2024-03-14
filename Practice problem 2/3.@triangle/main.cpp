#include <iostream>

using namespace std;

int main()
{
    float base, height, area;

    cout << "input the base in m" << endl;
    cin >> base;

    cout << "input height in m"<< endl;
    cin >> height;

    area = 0.5*base*height;

    cout << "the area is" << area << "m" << endl;
    return 0;
}
