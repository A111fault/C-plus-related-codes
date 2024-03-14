#include <iostream>

using namespace std;

int main()
{
    int x, y, i, hcf, lcm;

    cout << "Enter two numbers: " << endl;
    cin >> x >> y;


    if(y>x){
        x=x+y;
        y=x-y;
        x=-y;
    }
    for(i=1; i<=y; i++){
        if(((x%i)==0)&&((y%i)==0)){
            hcf=i;
        }
    }
    cout << "The Highest Common Factor(HCF) is: " << hcf << endl;

    for((i=(x*y)); i>=x; i--){
        if(((i%x)==0)&&((i%x)==0))
            lcm=1;
    }
    cout << " The Lowest Common Factor(LCM) is:  " << lcm << endl;
    return 0;
}
