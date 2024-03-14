#include <iostream>

using namespace std;

int main()
{
    int x;

    cout << "Enter the value of x : " << endl;
    cin >> x;

    if(x%3==0){
        if(x%5==0){
            cout << x << " is divisible by 3 and 5" << endl;
    }
    else{
            cout << x << " is divisible by 3 but not by 5" << endl;
    }
   }
   else{
    if(x%5==0){
        cout << x << " is divisible by by 5 but not by 3" << endl;
    }
    else{
        cout << x << " is not divisible by 3 or 5" << endl;
    }
   }
    return 0;
}
