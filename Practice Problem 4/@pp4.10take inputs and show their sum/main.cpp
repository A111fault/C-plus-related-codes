#include <iostream>

using namespace std;

int main()
{
   int i, sum;

   sum=0;
   for(i=0; i<100; i++){
        cout << i << "+";
        sum=sum+i;
   }
   cout << i;
   sum=sum+i;
   cout << "=" << sum;
    return 0;
}
