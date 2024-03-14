#include <iostream>

using namespace std;

int main()
{
    float x, y, z;


    cout << " Enter the number x : ";
    cin >> x;

    cout << " Enter the number y : ";
    cin >> y;

    cout << " Enter the number z : ";
    cin >> z;

    if((x>y)&&(y>z)) {
    cout << "x is largest and z is smallest" << endl;
}
else if((y>x)&&(x>z)) {
    cout << "y is largest and z is smallest" << endl;
}
else if((z>x)&&(x>y)) {
    cout << "z is largest and y is smallest" << endl;
}
else if((z>y)&&(y>x)) {
    cout << "z is largest and x is smallest" << endl;
}

    return 0;
}
