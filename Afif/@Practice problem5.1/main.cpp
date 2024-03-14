#include <iostream>

using namespace std;

int main()
{
    int x, factorial= 1, c;

    cout << "Enter the number: ";
    cin >>  x;


    if(x==0){
        cout << "1" << endl;

        }else{
               for(c=x; c>0; c--){
                factorial = (factorial * c);
               }
               cout << factorial << endl;
        }

        return 0;
}
