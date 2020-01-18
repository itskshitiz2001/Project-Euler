//PROBLEM 12 #ProjectEuler (highly dividible triangular number)
//this prog takes long time to execute large values..
#include<iostream>
using namespace std;
int divisibletrianglenumber(int);
int sum(int);
int main()
{
    int n,s;
    cin>>n;
    s=divisibletrianglenumber(n);
    cout<<s;
}
int divisibletrianglenumber(int a)
{
    int i,k,j,c;
    for(i=1;;i++)
    {
        c=1;
        j=sum(i);
        for(k=1;k<=(j/2)+1;k++)
        {
            if(j%k==0)
            {
                c++;
            }
        }
        if(c>=a)
        {
            break;
        }
    }
    return j;
}
int sum(int a)
{
    int j,sum=0;
    for(j=1;j<=a;j++)
        {
            sum=sum+j;
        }
    return sum;
}