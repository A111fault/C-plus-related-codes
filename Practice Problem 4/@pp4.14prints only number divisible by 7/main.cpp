#include <iostream>

using namespace std;

int main()
{
    int x, y, c;

    cout << "Enter two numbers: " << endl;

    cin >> x;
    cin >> y;
    cout << endl << endl;

    for(c=x+1; c<=y; c++){
        if((c%7)==0){
            cout << c << endl;
        }
    }
     return 0;
}
