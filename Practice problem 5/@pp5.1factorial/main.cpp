#include <iostream>

using namespace std;

int main()
{
    int x, i,fact=1;

      cout << "Enter an integer: ";
      cin >> x;

       if(x==0){
               cout << "1 ";
         }
         if(x>0){
                   for(i=x; i>0; i=i-1){
                        fact = (fact*i);
                   }
            cout << fact ;
         }


    return 0;
}
