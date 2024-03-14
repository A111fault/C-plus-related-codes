#include <iostream>

using namespace std;

int main()
{
    int number;

    cout << "Enter a integer number: ";
    cin >> number;

    while(number!=-1){
        cout << "Enter a integer number: ";
        cin >> number;
    }
    return 0;
}
