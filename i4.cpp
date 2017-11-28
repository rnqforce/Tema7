#include <bits/stdc++.h>

using namespace std;

void mstrcat(char s[],char p[])
{
    s+=strlen(s);
    while(*p!='\0')
    {
        *s=*p;
        s++;
        p++;
    }
    *s='\0';
}

int main()
{
    char sir1[20] , sir2[10];

    cin>>sir1>>sir2;

    mstrcat(sir1,sir2);

    cout<<sir1;
}
