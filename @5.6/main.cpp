#include <iostream>

using namespace std;

int main()
{
    int i,x, sum=0;

    cout << "Enter an integer: " ;
    cin >> x;

    for(i=1; i<x; i=i+1){
            (x%i==0);
           sum=sum+i;
           }
           if(sum==x){
            cout << "The number is perfect number";
           }else{
             cout << "The number is not perfect number";
           }
    return 0;
}
