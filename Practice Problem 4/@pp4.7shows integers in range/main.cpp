#include <iostream>

using namespace std;

int main()
{
    int i, x, y;

   cout << "Enter first integer: ";
   cin >> x;

   cout << "Enter second integer: ";
   cin >> y;

   for(i=x; i<y; i=i+1){
      cout << i << ",";
   }
   cout << y;
    return 0;
}
