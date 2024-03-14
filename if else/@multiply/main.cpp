#include <iostream>

using namespace std;

int main()
{
    int i;
    int multiple;
    multiple = 1;

    for(i=1; i<5; i=i+1){
        cout << i <<"*" ;
        multiple = multiple*i;
    }
    cout << i;
    multiple = multiple*i;
    cout << "=" << multiple;
    return 0;
}
