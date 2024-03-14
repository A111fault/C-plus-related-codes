#include <iostream>

using namespace std;

int main()
{
    int a, b;

    cout << " Enter the two numbers : " << endl;
    cin >> a >> b;

    cout << endl << "The numbers before swapping are : " << a << " and " << b << endl;

    a = a+b;
    b = a-b;
    a = a-b;

    cout << "After swapping the numbers are : ";
    cout << a << " and " << b << endl;


    return 0;
}
