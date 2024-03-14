#include <iostream>

using namespace std;

int main()
{
    int x;

    cout << "Enter a integer number" << endl;
    cin >> x;

    if(((x>50)&&(x<100))&&((x%13==0)||(x%9==0)))
        cout << x << " is divisible by 13 or 9" << endl;

     else{
        cout << x << " is not divisible by 13 or 9" << endl;
    }
    return 0;
}
