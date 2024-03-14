#include <iostream>

using namespace std;

int main()
{
    int x, i, y;
    i=0;
    y=0;
    cout << "Enter the number: ";
    cin >> x;

    if(x==0){
        cout << "Number of digits: 1" << endl;
    }else{
         while(x>0){
            x=(x/10);
            y++;
         }
         cout << "Number of digits: " << y << endl;
    }
    return 0;
}
