#include <iostream>

using namespace std;

int main()
{
    int a[10], i;
// Here we are defining the array size for which the loop is closely ran
    for(i=0;i<10;i++){
        cin >> a[i];
    }
    for(i=0;i<10;i++){
        cout <<  a[i] << " ";

    }
    return 0;
}
