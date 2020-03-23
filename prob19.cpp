//PROBLEM 19 #ProjectEuler (counting Sundays)    @goodproblem
#include<iostream>
using namespace std;
int countingsundays(int a,int b);
int main()
{
    int x,y,z;
    cin>>x>>y;
    z=countingsundays(x,y);
    cout<<z;
}
int countingsundays(int a,int b)
{
    int sum,S,c=0;
    int month[13]={0,1,4,4,0,2,5,0,3,6,1,4,6};
    int year[21]={0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,6,4,2,0,6};
    for(a;a<=b;a++)
    {
        for(int m=1;m<=12;m++)
        {
           sum=0;
           int u,v;
           u=a/100;
           v=a%100;
           int leapyears=v/4;
           if(a==1944||a==2000&&(m==1||m==2))
           leapyears--;
           sum=1+month[m]+year[u]+v+leapyears;
           S=sum%7;
           if(S==1)
           c=c+1;
        }
    }
    return c;
}
