#include<iostream>
using namespace std;
int fiboevensum(int a);
int main()
{
    int n,r;
    cin>>n;
    r=fiboevensum(n);
    cout<<r;
    return 0; 
}
int fiboevensum(int a)
{
    int s,sum=0,b=0,c=1;
    while(a--)
    {
       s=b+c; 
       b=c;
       c=s;
       if(s%2==0)
       {
           sum=sum+s;
       }
    }
    return sum;
}