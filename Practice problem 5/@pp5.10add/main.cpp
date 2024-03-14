#include <iostream>

using namespace std;

int main()
{
    int x, i, n, sum=1, total=0;

         cout << "Enter a number: ";
         cin >> x;

          for (i=0; i<x-1; i=i+1){
                    sum=sum+i;
                    cout << sum << " + ";
                    total=total+sum;
             }
            sum=sum+i;
            cout << sum << "= ";
            total=total+sum;
            cout << total;




    return 0;
}
