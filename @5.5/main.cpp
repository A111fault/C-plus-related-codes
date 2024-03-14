#include <iostream>

using namespace std;

int main()
{
    int x, i;

    cout << "Enter a integer number: " ;
    cin >> x;

    for(i=1; i<=x; i=i+1){


    if(x%i==0){
        cout << " The number is not prime" << i << endl;;
    }else{
        cout << "The number is prime" << i << endl;
    }
    }
    return 0;
}
