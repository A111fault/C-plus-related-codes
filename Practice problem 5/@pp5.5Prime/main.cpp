#include <iostream>

using namespace std;

int main()
{
    int x, i, isprime=0;

        cout << "Enter a integer: ";
        cin >> x;

        for(i=1; i<=x; i++){
            isprime=0;
            for(i=2; i<x; i++){
                if((x%i)==0){
                    isprime=1;
                }
            }
        }
       if(isprime==0){
        cout << "The number is a Prime number";
       }
       if(isprime==1){
        cout << "The number is not a Prime number:";
       }



    return 0;
}
