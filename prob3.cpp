//PROBLEM 3 #ProjectEuler (LARGEST PRIME FACTOR)
//this prog takes long time to execute large values
#include<iostream>
using namespace std;
long long int largestprimefactor(long long int a);
int main()
{
    long long int n,lp;
    cin>>n;
    lp=largestprimefactor(n);
    cout<<lp;
}
long long int largestprimefactor(long long int a)
{
    long long int i,j,largest=0;
    for(i=2;i<=a;i++)
    {
        if(a%i==0)
        {
            int flag=0;
            for(j=2;j<i;j++)
            {
                if(i%j==0)
                {
                    flag=1;
                    break;
                }
            }
            if(flag==0)
            {
                if(i>largest)
                largest=i;
            }
        }
    }
    return largest;
}