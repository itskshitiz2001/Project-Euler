//PROBLEM 15 #ProjectEuler (Lattice Paths)
#include<iostream>
#include<math.h>
using namespace std;
unsigned long int latticepaths(int);
unsigned long long int fact(int);
int main()
{
    int n;                                      //n here denotes the order of square matrix.
    unsigned long int s;
    cin>>n;
    s=latticepaths(n);
    cout<<s;
    return 0;
} 
unsigned long int latticepaths(int a)
{
    int temp;
    unsigned long int result;
    temp=2*a;                               //this algo is for finding the no of ways
    unsigned long long int b,c;                          //using concepts of combination
    b=fact(temp);                               //finding factorial
    c=fact(a);
    unsigned long long int power=pow(c,2);
    result=b/power;
    return result;
}
unsigned long long int fact(int x)
{
    unsigned long long int prod=1,i;
    for(i=1;i<=x;i++)
    {
        prod=prod*i;
    }
    return prod;
}
