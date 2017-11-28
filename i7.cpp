#include<iostream>

using namespace std;
int *mn,*mx;
void minmax(int a[],int *min, int *max)
{
    mn=&a[0];
    mx=&a[0];

    for(int i=0;i<10;i++)
        {
        if(a[i]<*mn)
            mn=&a[i];

        if(a[i]>*mx)
            mx=&a[i];
            }
}
int main()
{
    int a[100],n;
    cin>>n;
    for(int i=0;i<n;i++)
        cin>>a[i];
    minmax(a,mn,mx);
    cout<<*mn<<" "<<*mx;
}
