#include <iostream>
#include<cstdlib>;

// have to have ctime or the code wont work
using namespace std;

int main()
{
     srand(0);
    int i,n;
    float a[1000];


    cout << "Enter the number of elements: ";
    cin >> n;

    for(i=0; i<n; i++){
        cout << "[ " << i+1 << "]=";
        a[i] = rand()%10;
    }
    return 0;
}
