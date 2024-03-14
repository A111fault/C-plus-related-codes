#include <iostream>

using namespace std;

int main()
{
   int n, i, prime=1;

    cout << "Enter a number: " << endl;
    cin >> n;

    for(i=2; i<n; i++){
        if((n%i)==0){
            prime=0;
        }
    }
    if(prime==1){
        cout << n << "Is prime" << endl;
    }else{
          cout << n<<" is not prime" << endl;
    }
    return 0;
}
