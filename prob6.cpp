//PROBLEM 6 #ProjectEuler (SUM SQUARE DIFFERENCE)
#include<iostream>
#include<math.h>
using namespace std;
int sumsquaredifference(int);
int main()
{
    int n,s;
    cin>>n;
    s=sumsquaredifference(n);
    cout<<s;
    return 0;
}
int sumsquaredifference(int a)
{
    int whsquare,e=0,square=0;
    while(a)
    {
        square=square+pow(a,2);
        e=e+a;
        a=a-1;
    }
    whsquare=pow(e,2);
    return (whsquare-square);    
}
