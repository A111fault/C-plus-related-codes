#include <iostream>

using namespace std;

int main()
{
    // declaration of a int array to hold 100 elements
    int x[100], y[100], n, i;
// variables needed for this problem
    int min_ind, temp, j;
// taking input into an array
    cout << "How many elements(n<=100): ";
    cin >> n;

    for (i = 0; i <n; i = i +1){
        cout << "x["<<i+1<<"]= ";
        cin >> x[i];
    }
// before sorting
    cout << "Before sorting"<<endl;
    for (i = 0; i <n; i = i +1){
        cout << x[i]<<",";
    }

    for (j = 0; j < n; j = j +1){
        min_ind = j;
        for (i = j + 1; i <n; i = i +1){
            if (x[i] < x[min_ind]){
                    min_ind = i;
            }
        }
    // swap
        temp = x[j];
        x[j] = x[min_ind];
        x[min_ind] = temp;
    }
// after sorting
    cout <<endl<< "After sorting in ascending order: "<<endl;
    for (i = 0; i <n; i = i +1){
        cout << x[i]<<",";
    }
      for (j = 0; j < n; j = j +1){
        min_ind = j;
        for (i = j + 1; i <n; i = i +1){
            if (x[i] > x[min_ind]){
                    min_ind = i;
            }
        }
    // swap
        temp = x[j];
        x[j] = x[min_ind];
        x[min_ind] = temp;
    }
// after sorting
    cout <<endl<< "After sorting in descending order: "<<endl;
    for (i = 0; i <n; i = i +1){
        cout << x[i]<<",";
    }

    return 0;
}
