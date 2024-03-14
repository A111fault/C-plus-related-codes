#include<iostream>
using namespace std;

//prototype declaration
int arrayInput(int []);
void arrayPrint(int [],int);
//void arrayCopy(float[],float[],int);
int arrayCalc(int [], int);

//main function
int main()
{
    int n;
    int a[10];
    n=arrayInput(a);
    cout<<"Printing A:\n";
    arrayPrint(a,n);
    //arrayCopy(a,b,n);
    //arrayPrint(b,n);
    cout<< "calculate time: " << arrayCalc(a,n) << endl;

    return 0;

}

//define of a function
int arrayInput(int a[])
{
    int i,n;
    cout<<"Enter the elements number:";
    cin>>n;
    for(i=0;i<n;i++){
        cout<<"["<<i+1<<"]=";
        cin>>a[i];
    }
    return n;
}

void arrayPrint(int a[],int n)
{
    int i;
    for(i=0;i<n;i++){
        cout<<a[i]<<"   ";
    }
    cout<<endl;
}
//calculation

int arrayCalc(int x[],int n)
{
    int i, counter;

    counter=0;
    for(i=0; i<n; i++){
        if((x[i]%2)!=0){
                cout<<"["<<i+1<<"]="<<x[i] << "  "<<endl;
                counter=counter+1;
        }
    }

     return counter;
}
