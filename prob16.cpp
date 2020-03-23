//PROBLEM 16 #ProjectEuler (Power digit sum)
#include<iostream>
#include<math.h>
using namespace std;
int powerdigitsum(int);
int main()
{
    int n,s;
    cin>>n;
    s=powerdigitsum(n);
    cout<<s;
}
int powerdigitsum(int a)
{
    int s=0;
    unsigned long long int power,temp;
    power=pow(2,a);
    temp=power;
    while(temp)
    {
        int d;
        d=temp%10;
        s=s+d;
        temp/=10;
    }
    return s;
}
