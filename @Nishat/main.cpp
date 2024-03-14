//all about 1D array
#include<iostream>
#include<cstdlib>
#include<cmath>
#include<ctime>
using namespace std;
//prototype
int arrayInput(float []);
void arrayPrint(float [],int);
float maxIndex(float [],int);
float minIndex(float [],int);
float arraySum(float [], int);
void arrayCopy(float [],float [],int);
void arraySort(float [],int);
float arrayAverage(float [],int);
float arrayStandardDeviation(float [],int);
int arraySearchFrequency(float [],int,int);
int arrayRandInput(float []);

//main function
int main()
{
    float x[100],y[100],z[100];
    int n;
    float maximum,minimum,sum,arr_sort,avg,standard_deviation,searc_h;
    n=arrayInput(x);
    cout<<"--x--"<<endl;
    arrayPrint(x,n);
    maximum=maxIndex(x,n);
    cout<<"Maximum value is:"<<maximum<<endl;
    minimum=minIndex(x,n);
    cout<<"Minimum value is:"<<minimum<<endl;
    sum=arraySum(x,n);
    cout<<"Sum of total digit is:"<<sum<<endl;
    cout<<"--y--"<<endl;
    arrayCopy(x,y,n);
    arrayPrint(y,n);
    cout<<"Before sorting y"<<endl;
    arrayPrint(y,n);
    cout<<"After sorting y(Ascending)"<<endl;
    arraySort(y,n);
    arrayPrint(y,n);
    cout<<"Average is:";
    avg=arrayAverage(x,n);
    cout<<avg<<endl;
    cout<<"Standard Deviation is:";
    standard_deviation=arrayStandardDeviation(x,n);
    cout<<standard_deviation<<endl;
    cout<<"What do you want to find?\n:";
    cin>>searc_h;
    sum=arraySearchFrequency(x,searc_h,n);
    cout<<searc_h<<" Occurs "<<sum<<" times."<<endl;
    n=arrayRandInput(x);
    cout<<"Random Values:";
    arrayPrint(x,n);

    return 0;
}

//define
//array input
int arrayInput(float x[])
{
    int i,n;
    cout<<"How many elements:";
    cin>>n;
    for(i=0;i<n;i++){
        cout<<"["<<i+1<<"]=";
        cin>>x[i];
    }

    return n;
}
//array print
void arrayPrint(float x[],int n)
{
    int i;
    for(i=0;i<n;i++){
        cout<<x[i]<<"   ";
    }
    cout<<endl;
}
//finding maximum value
float maxIndex(float x[],int n)
{
    int i;
    float maxIndex=x[0];
    for(i=0;i<n;i++){
        if(maxIndex<x[i]){
            maxIndex=x[i];
        }
    }
    return maxIndex;
}
//finding minimum value
float minIndex(float x[],int n)
{
    int i;
    float minIndex=x[0];
    for(i=0;i<n;i++){
        if(minIndex>x[i]){
            minIndex=x[i];
        }
    }
    return minIndex;
}
//array sum
float arraySum(float x[], int n)
{
    int i;
    float sum=0;
    for(i=0;i<n;i++){
        sum=sum+x[i];
    }
    return sum;
}
//array copy to y
void arrayCopy(float x[],float y[],int n)
{
    int i;
    for(i=0;i<n;i++){
        y[i]=x[i];
    }
}
//sorted in ascending order
void arraySort(float y[],int n)
{
    int i,j,minInd;
    float temp;
    for(j=0;j<n;j++){
        minInd=j;
        for(i=(j+1);i<n;i++){
            if(y[minInd]>y[i]){
                minInd=i;
            }
        }
        //swap
        temp=y[minInd];
        y[minInd]=y[j];
        y[j]=temp;
    }
}
//array average
float arrayAverage(float x[],int n)
{
    float avg,sum;
    sum=arraySum(x,n);
    avg=sum/n;
    return avg;
}
//array standard deviation
float arrayStandardDeviation(float x[],int n)
{
    int i;
    float avg,subs,standardDeviation;
    avg=arrayAverage(x,n);
    for(i=0;i<n;i++){
        standardDeviation += pow(x[i] - avg, 2);
    }
    return sqrt(standardDeviation / n);

}
//linear search with frequency
int arraySearchFrequency(float x[],int y,int n)
{
    int i,sum;
    sum=0;
    for(i=0;i<n;i++){
        if(x[i]==y){
            cout<<"Search elements found. Position is : "<<i+1<<endl;
            sum++;
        }
    }
    return sum;
}
//random input
int arrayRandInput(float x[])
{
    srand(time(0));
    int i,n;
    cout<<"How many elements do you want for random input?\n:";
    cin>>n;
    for(i=0;i<n;i++){
        x[i]=rand()%10;
    }
    return n;
}
