#include <iostream>

using namespace std;

int main()
{
    int n, i, j;

    cout << "Enter a number: ";
    cin >> n;

    for(i=1; i<=n; i++){
        for(j=n; j>=i; j--){
            if(j==5){
                cout << " Five ";
            }
            if(j==4){
                cout << " Four ";
            }
            if(j==3){
                cout << " Three ";
            }
            if(j==2){
                cout << " Two ";
            }
            if(j==1){
                cout << " One ";
            }
        }
        cout << endl;
    }
    return 0;
}
