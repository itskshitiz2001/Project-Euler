//PROBLEM 14 #ProjectEuler (Longest Collat sequence)
#include<iostream>
using namespace std;
int longestcollatzsequence(int);
int main()
{
    int n,s;
    cin>>n;
    s=longestcollatzsequence(n);
    cout<<s;
}
int longestcollatzsequence(int a)
{
    int c,mark=0,largest=0;
    while(--a)
    {
        c=1;
        int temp=a;
        while(temp!=1)
        {
            if(temp%2==0)
            {
                temp=temp/2;
            }
            else temp=(temp*3)+1;
            c++;
        }
        if(c>largest)
        {
            largest=c;
            mark=a;
        }
    }
    return mark;
}