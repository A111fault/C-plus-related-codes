#include <iostream>
using namespace std;

int array_1D_input(int[], int);
void array_1D_print(int [], int);
int array_1D_sum(int [], int);
//void counter(int [], int);
float array_1D_average(int [], int);
float array_1D_variance(int [], int);

int main()
{
// declaration of a float array to hold 10 elements
    int x[10];
// variables needed for array access
    int n, b, c, d;


    n = array_1D_input(x,n);
    array_1D_print(x,n);
    cout << endl;
// summation of n elements of an array

    b = array_1D_sum(x,n);
    cout << "Sum  :"  << b <<endl;

// calculate average
    cout<<"Printing Ave  :";
    c = array_1D_average(x,n);
     cout << c << endl;
// calculate variance
    cout << "Printing variance  :";
    d = array_1D_variance(x,n);
    cout << d;


    return 0;
}
int array_1D_input(int x[], int n){
      int i;
// taking input into an array
    cout << "How many elements(n<=10): ";
    cin >> n;

    for (i = 0; i <n; i = i +1){
        cout << "x["<<i+1<<"]= ";
        cin >> x[i];
    }
return n;
}
void array_1D_print(int x[], int n){
    int i;

    for (i = 0; i <n; i = i +1){
        cout << x[i]<<"  "<<endl;
    }

}
int array_1D_sum(int x[], int n){
    int i, sum;

   // summation of n elements of an array
    sum = 0;
    for(i = 0; i<n; i = i+1){
        sum = sum + x[i];
    }
   return sum;
}
//average
float array_1D_average(int b[], int n){
   float  ave;
   int a = array_1D_sum(b,n);
   ave = a / n;
   return ave;
}
float array_1D_variance(int b[], int n){
// summation of squared difference from mean
    int i,sum = 0, ver;
    int e = array_1D_average(b,n);
    for(i = 0; i<n; i = i+1){
       sum = sum + (e - b[i])*(e - b[i]);
    }
    ver = sum / n;

   return ver;
}
