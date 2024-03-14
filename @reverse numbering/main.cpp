#include <iostream>

using namespace std;

int main()
{
    int x, y, z,a;

    cout << "Enter a 3 digit number: " ;
    cin >> x;

    a=(x/100);
    x = (x%100);
    y = (x/10);
    z = (x%10);


    cout << z << y << a;
    return 0;
}
