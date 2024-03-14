#include <iostream>

using namespace std;

int main()
{
    int i;
    int sum;
    sum = 0;

    for(i=0; i<9; i=i+1){
        cout << i << "+";
        sum = sum + i;
    }
    cout << i;
    sum = sum +i;
    cout << "=" << sum;
    return 0;
}
