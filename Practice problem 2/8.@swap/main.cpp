#include <iostream>

using namespace std;

int main()
{
    float x,y,tem;

    x = 10;
    y = 5;
    tem = 10;
    cout << "before swap" << endl;
    cout << " x= " << x << " and y=" << y << endl;

    x = y;
    y = tem;
    cout << "after swap" << endl;
    cout << " x=" << x << " and y= " << y << endl;

    return 0;
}
