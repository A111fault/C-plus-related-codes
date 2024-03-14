#include <iostream>

using namespace std;

int main()
{
    int x;
    cout << "Enter an integer: ";
    cin >> x;

    if(((x%3)==0)&&((x%2)==0)){
        cout << "The number" << x <<"is divisible by 3 and multiple of 2" << endl;
    }else if(((x%3)==0)&&((x%2)!=0)){
        cout << "The number" << x <<"is divisible by 3 but not multiple of 2" << endl;
    }else if(((x%3)!=0)&&(x>=15&&x<=60)){
        cout << "The number" << x <<"is not divisible by 3, however between 15 to 60" << endl;
    }
   return 0;
}
