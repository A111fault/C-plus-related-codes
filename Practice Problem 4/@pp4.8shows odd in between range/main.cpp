#include <iostream>

using namespace std;

int main()
{
    int i, x, y;

    cout << " Enter the first integer: ";
    cin >> x;

    cout << " Enter the second integer: ";
    cin >> y;


    for(i=x; i<y; i++){
            if((i%2)!=0){
        cout << i << ",";
    }
    }
    if((i%2)!=0){
            cout << i;
    }
    return 0;
}
