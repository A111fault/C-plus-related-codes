#include <iostream>

using namespace std;
int calculate(int a, int b);
int main()
{
   /* int n=2,m=3;
 for(int i=0;i<n;i++){
    for(int j=0;j<m;j++){
       cout<<i;
    }
    cout<<endl;
 }*/

   /* int Arr[5];
    for(int k=0;k<5;k++){
            Arr[k]=k;
        }
    for(int i=4;i>=0;i--){
        cout<<Arr[i]<<":";
    }*/

   /* int A[5]={0,3,2,4,1};
 int x=0;
 for(int i=0;i<5;i++){
     cout<<A[i]<<",";
     x=x+A[i];
 }
 cout<<endl;
 cout<<"x="<<x<<endl;
*/
/*int M[3][4];
for(int i=0;i<3;i++){
    for(int j=0;j<4;j++){
       M[i][j]=i+j;
       cout<<M[i][j]<<" ";
    }
    cout<<endl;
 }*/


   int x=2,y=1,z;
   z=calculate(x,y);
   cout<<z<<endl;
   cout<<calculate(4,2)<<endl;
}
int calculate(int a, int b){
   int c=(a+b)*(a-b);
   return c;
}
