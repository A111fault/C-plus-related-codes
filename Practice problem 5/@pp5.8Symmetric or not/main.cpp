#include <iostream>

using namespace std;

int main()
{
    int x, i, rev=0, r;



          cout << "Enter a number : " ;
          cin >> x;

          i=x;
          while(x>0){
            r=(x%10);
            rev=(rev*10)+r;
            x=(x/10);
          }
          if(rev==i){
                       cout << "The number is Symmetric";
          }
          if(rev!=i){
                        cout << "The number is not Symmetric";
          }

    return 0;
}
