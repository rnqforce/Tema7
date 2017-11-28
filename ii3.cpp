#include<bits/stdc++.h>

using namespace std;

#define N 10

float inde[N][N];

int main()
{
    float *p;

    p=&inde[0][0];

    for(int i = 0 ; i < 10 ; i ++)
        *(p+9*i+i)=1.0;

     for(int i = 0 ; i < 10 ; i ++){
            cout<<'\n';
        for(int j = 0 ; j < 10 ; j ++)
        cout<<*(p+9*i+j);
     }
}
