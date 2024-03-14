#include <iostream>

using namespace std;

int main()
{
    int x, d1, d2, d3;

    cout << " type in the 3 digit number : " << endl;
    cin >> x;

    d1 = (x/100);
    x = (x%100);
    d2 = (x/10);
    d3 = (x%10);

    cout << " The reversed 3 digit number is : " << d3 << d2 << d1 << endl;

    return 0;
}
