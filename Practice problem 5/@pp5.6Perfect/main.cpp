#include <iostream>

using namespace std;

int main()
{
    int x, i, d, sum=0;

        cout << "Enter an integer: " ;
        cin >> x;
       d =x;
        for(i=1; i<=x; i++){
            for(i=1; i<x; i++){
                if((x%i)==0){
                    sum = (sum +i);
                }
            }
        }
        if(sum==d){
            cout << "The number is perfect number ";
        }
        if(sum!=d){
            cout << "The number is not perfect number";
        }

    return 0;
}
