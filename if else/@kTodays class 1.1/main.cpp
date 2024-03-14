#include <iostream>

using namespace std;

int main()
{
   int x, y;

   cout << "Input first integer number: " << endl;
   cin >> x;


   if((x>0) && (x%2==1)){
        cout << " Input second integer number: "<< endl;
        cin >> y;
      }if(y%2==0){
        cout << "It was a complete waste of time"<< endl;
      }
    return 0;
}
