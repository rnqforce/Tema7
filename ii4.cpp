#include<bits/stdc++.h>

using namespace std;

int find_largest(int *a,int n)
{
    int mx;
    mx=-1;
    while(a!=a+3)
    {
        if(mx<*a)
            mx=*a;
            a++;
    }
    return mx;
}
int main()
{
    int *p;
    int b[23]={1,23,1};
    p=b;


    cout<<find_largest(p,3);

}
