#include <iostream>

using namespace std;

int main()
{
    float x;
    int y;

    cout << "Enter a number: " ;
    cin >> x;

    y=x;

    if((x-y)==0){
        cout << "Integer";
    }else{
        cout << "Float";
    }

    return 0;
}
