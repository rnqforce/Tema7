#include<iostream>

using namespace std;

void minmax(int a[10],int *min, int *max)
{
    *min=10000;
    *max=-1;

    for(int i=0;i<10;i++)
        {
        if(a[i]<*min)
            min=&a[i];
        if(a[i]>*max)
            max=&a[i];
            }
}
int main()
{
    int a[15],*min,*max,n;
    cin>>n;
    for(int i=0;i<n;i++)
        cin>>a[i];
    minmax(a,min,max);
    cout<<*min<<" "<<*max;
}
