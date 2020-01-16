//PROBLEM 7 #ProjectEuler (10001st PRIME)
#include<iostream>
using namespace std;
int nthprime(int);
int main()
{
    int n,s;
    cin>>n;
    s=nthprime(n);
    cout<<s;
    return 0;
}
int nthprime(int a)
{
    int i,flag=0;
    for(i=2;flag!=a;i++)
    { 
        int check=0;
        for(int j=2;j<i;j++)
        {
            if(i%j==0)
            {
                check=1;
                break;
            }
        }
        if(check==0)
        flag++;
    }
    return (i-1);
}