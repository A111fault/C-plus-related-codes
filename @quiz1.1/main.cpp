#include <iostream>

using namespace std;

int main()
{
    int i;
    int sum=0;

    for(i=0; i<10; i=i+1){
        if(i%2==1){
            cout << sum << endl;
        }
        sum = sum +i;
    }
    cout << sum;

      return 0;
}
