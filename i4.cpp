#include<bits/stdc++.h>

using namespace std;

int strend(char s[],char p[])
{

    s=s+(strlen(s)-strlen(p));
    while(*p!='\0')
    {
        if(*s!=*p)
            return 0;
        s++;
        p++;
    }
    return 1;
}

int main()
{
    char sir1[20] , sir2[10];

    cin>>sir1>>sir2;

    cout<<strend(sir1,sir2);
}
