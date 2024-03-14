#include <iostream>

using namespace std;

int main()
{
    int x, y, z;

    cout << " Enter the number x : ";
    cin >> x;

    cout << " Enter the number y : ";
    cin >> y;

    cout << " Enter the number z : ";
    cin >> z;



 if(x>y) {
    cout << "x is greater than y" << endl;
}
if(y>x) {
    cout << "y is greater than x" << endl;
}
if(x>z) {
    cout << "x is greater than z" << endl;
}
if(z>x) {
    cout << "z is greater than x" << endl;
}
if(y>z) {
    cout << "y is greater than z" << endl;
}
if(z>y) {
    cout << "z is greater than y" << endl;
}

    return 0;
}
