//PROBLEM 4 #ProjectEuler (largest palindrome product)
#include<iostream>
#include<math.h>
using namespace std;
int largestpalindromeproduct(int);
int main()
{
    long long int s;
    int n;
    cin>>n;
    s=largestpalindromeproduct(n);
    cout<<s;
}
int largestpalindromeproduct(int a)
{
    int i,j,r,c;
    long long int temp,prod,revprod,max=0;
    i=pow(10,a-1);
    j=pow(10,a)-1;
    for(r=j;r>=i;r--)
    {
        for(c=j;c>=i;c--)                          
        {
            prod=r*c;                             // checking all occurences for the inputted digit numbers
            temp=prod;
            revprod=0;
            while(temp)
            {
                revprod=revprod*10+(temp%10);
                temp/=10;
            }
            if(revprod==prod&&prod>max)
            {
                max=prod;                         // checking largest palindrome product
            }
        }
    }
    return max;
}