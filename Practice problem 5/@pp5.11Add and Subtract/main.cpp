#include <iostream>

using namespace std;

int main()
{
    int x,i, sum=0;


          cout << "Enter a number: ";
         cin >> x;

         for(i=1; i<x; i=i+1){
             if((i%2)!=0){
            cout << i << " - ";
            sum=(sum+i);
             }
            else{
                    cout << i << " + ";
                    sum=(sum-i);
            }

         }



    cout << "=" << sum;



     return 0;
}
