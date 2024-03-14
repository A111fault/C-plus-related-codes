#include <iostream>

using namespace std;

int main()
{
    int x, y, i, power=1;


    cout << "Enter an integer number: " ;
    cin >> x;

     cout << "Enter power: ";
     cin >> y;

     for(i=1; i<=y;i=i+1){
        power=(power*x);
     }
    cout << "x^y: " << power;


    return 0;
}
