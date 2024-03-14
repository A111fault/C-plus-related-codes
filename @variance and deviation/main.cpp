#include <iostream>
#include <cmath>
using namespace std;

int input(int [], int);
void print(int [], int);
int sum(int[],int);
float calculation(int[],int);
float deviation(int [], float);
int main()
{
    int x[10];
    int n,a,q, w;

    n = input(x,n);
    print(x,n);
    cout << endl;
   q = sum(x,n);
     cout << q;
     cout << endl;
     a = calculation(x,n);
     cout << a;
      w =  deviation(x,n);
      cout << w;
    return 0;
}
int input(int x[], int a){
   int i, n;
   cout << "Enter the number of elements to count (n<=10) :";
   cin >> n;
   for(i=0; i < n; i++){
       cout << "Enter the numbers :";
       cin >> x[i];
   }

 return n;
}
void print(int x[], int n){
   int i;
    for(i=0; i < n; i++){
       cout << x[i];
   }
}
int sum(int x[],int n){
    int i, sum;
    sum =0;
   for(i=0; i < n; i++){
       sum = sum + x[i];
   }
   return sum;

}
float calculation(int x[],int n){
    float  ave;
   int a = sum(x,n);
   ave = a / n;
 cout << ave << endl;
  // summation of squared difference from mean
    int i,sum = 0, ver;
    float e = ave;
    for(i = 0; i<n; i = i+1){
       sum = sum + (e - x[i])*(e - x[i]);
    }
    ver = sum / n;
return ver;

}
float deviation(int x[], float n){
  int dev, w;
  w = calculation(x,n);
  dev = sqrt(w);

  return dev;
}
