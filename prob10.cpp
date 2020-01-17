//PROBLEM 10 #ProjectEuler (summation of primes)
//this prog takes long time to execute large values
#include<iostream>
using namespace std;
int long long primesummation(int long long);
int main()
{
    //int n;
    int long long s,n;
    cin>>n;
    s=primesummation(n);
    cout<<s;
}
int long long primesummation(int long long a)
{
    //int j,i;
    int long long sum=0,i,j;
    for(j=2;j<a;j++)                            //as 1 is not a prime no so starting loop from 2
    {
        int flag=0;
        for(i=2;i<(j/2)+1;i++)
        {
            if(j%i==0)
            {
                flag=1;break;
            }
        }
        if(flag==0)
        sum+=j;
    }
    return sum;
}