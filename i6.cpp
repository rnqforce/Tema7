#include<iostream>

using namespace std;


void split_time(long int total_sec, int *hr, int *mins, int *sec)
{
     int ore=total_sec/3600;
     int minute=(total_sec%3600)/60;
     int secunde=total_sec%60;
     hr=&ore;
     mins=&minute;
     sec=&secunde;
     cout<<*hr<<" "<<*mins<<" "<<*sec;
}
int main()
{
    int *hr, *mins,  *sec;
    int total_sec=12345;
    split_time(total_sec,hr,mins,sec);


}
