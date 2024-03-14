#include <iostream>

using namespace std;

int main()
{
   int a=0,n,i;
   float b;

    for(i=0; i<10; i=i+1){
        cin >> n;
        a=a+n;
        cout << "+"<< endl;
        cout << a << endl;
    }
     b=a/10;
     cout << "Average of " << a << "is " << b;
    return 0;
}
