#include <iostream>

using namespace std;

int main()
{
    int x, c, avg=0;

    for(c=1; c<11; c++){
        cout << "Enter a integer: " << endl;
        cin >> x;

        avg=(avg+x);
    }

    avg=avg/10;
    cout << "Average= "<< avg << endl;
    return 0;
}
