#include<bits/stdc++.h>

using namespace std;

int find_largest(int *a,int n)
{
     int *mx = &a[0];
    for(int i = 0 ; i < n ; i++)
    {
        if(*mx < *(a+i))
            *mx = *(a+i);
    }
    return *mx;
}
int main()
{
    int n = 3;
    int b[100];

    for(int i = 0 ; i < n ; i++)
        cin>>b[i];

    cout<<find_largest(b,n);

}
