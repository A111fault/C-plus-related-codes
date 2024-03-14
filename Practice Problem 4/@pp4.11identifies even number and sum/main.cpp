#include <iostream>

using namespace std;

int main()
{
    int i, sum;

   sum=0;
   for(i=2; i<1024; i=i+2){
        cout << i << "+";
        sum=sum+i;
   }
   cout << i;
   sum=sum+i;
   cout << "=" << sum;
    return 0;
}
