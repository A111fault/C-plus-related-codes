#include <iostream>
using namespace std;
int array_input(int [], int[],int,int);
void arra_print(int [], int[],int,int);
//int array_add(int [], int [], int);

int main()
{
    int a[10], c[10];
    int m,n,z;

    z=array_input(a,c,m,n);
    array_print(a)
   return 0;
}
int array_input(int a[], int c[], int m,int n)
{
    int i;

    cout << "Enter the size of array 'a' : " ;
    cin >> m;

    cout << "Enter the size of array 'c' : " ;
    cin >> n;

    for(i=0; i<m; i=i+1){
        cout << "a["<< i+1<<"]= ";
        cin >> a[i];
    }

    for(i=0; i<n; i=i+1){
        cout << "c["<< i+1<<"]= ";
        cin >> c[i];
    }
    return m,n;
}

void array_print(int a[], int c[], int m,int n)
{
    int i;
    for(i=0;i<m;i=i+1){
        cout<<a[i]<<"   ";
    }
    cout<<<<endl;
    for(i=0;i<n;i=i+1){
        cout<<c[i]<<"   ";
    }
}
/*
int array_add(int k[], int l[], int j){
   int p;
   int i;
    for(i=0; i<j; i=i+1){
        cout << "["<< i+1<<"]= ";
        p= k[i] + l[i];
    }

  return p;

}
*/
