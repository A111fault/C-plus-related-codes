#include <iostream>

using namespace std;

int main()
{
    int x, y, i, LCM;


    cout << "Enter two integer numbers: ";
    cin >> x >> y ;

    if(y>x){
        x=x+y;
        y=x-y;
        x=x-y;
    }
    for(i=(x*y); i>=x; i=i-1){
        if(((i%x)==0)&&((i%y)==0)){
            LCM=i;
        }
    }
    cout << "LCM = " << LCM ;







    return 0;
}
