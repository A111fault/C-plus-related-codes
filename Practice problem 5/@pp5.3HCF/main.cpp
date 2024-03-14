#include <iostream>

using namespace std;

int main()
{
      int x, y, i, HCF;

      cout << "Enter two integers: ";
      cin >> x >> y;

        if(y>x){
          x=x+y;
          y=x-y;
          x=x-y;
      }
       for(i=1; i<=y; i++){
        if(((x%i)==0)&&((y%i)==0)){
            HCF = i;
        }
       }
       cout << "The HCF is : " << HCF;






    return 0;
}
