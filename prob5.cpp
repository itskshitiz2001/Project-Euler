//PROBLEM 5 #ProjectEuler (smallest multiple)
//this prog takes long time to execute large values
#include<iostream>
using namespace std;
long long int smallestmult(long long int a);
int main()
{
    long long int n,sml;
    cin>>n;
    sml=smallestmult(n);
    cout<<sml;
}
long long int smallestmult(long long int a)
{
    long long int i,j=1,k,small=2000000000;
    for(i=1;i<=a;i++)
        j=j*i;
    for(k=a;k<=j;k=k+a)
    {
        long long int flag=0;
        for(i=1;i<=a;i++)
        {
            if(k%i!=0)
            {
                flag=1;
                break;
            }
            
        }
        if(flag==0&&k<small)
        small=k;
    }    
    return small;
}