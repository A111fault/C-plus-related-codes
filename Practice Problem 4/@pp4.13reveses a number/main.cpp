#include <iostream>

using namespace std;

int main()
{
    int i, r, rev=0;

    cout << "Enter the integer: " << endl;
    cin >> i;

    while(i>0){

        r=(i%10);
        rev=(rev*10)+r;
        i=(i/10);
    }
    cout << "Reversed number: " << rev << endl;

    return 0;
}
