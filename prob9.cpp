//PROBLEM 9 #ProjectEuler (special pythagorean triplet)
#include<iostream>
#include<math.h>
using namespace std;
int specialpythagoreantriplet(int);
int main()
{
    int n,s;
    cin>>n;
    s=specialpythagoreantriplet(n);
    cout<<s;
}
int specialpythagoreantriplet(int n)
{
    int a=1,b=2,c,prod;
    c=n-(a+b);
    for(a=1;b<c;)                               //fixing value of a 1 by 1 then fixing value of b as
    {                                           //1 greater than a value of a and finding value of c
         for(b;b<c;b++)
        {
            c=n-(a+b);
            if(pow(a,2)+pow(b,2)==pow(c,2))     //if this pythagoras theorem becomes true then 
            {                                   //we return the product of a,b and c as result...
                prod=a*b*c;
                break;
            }                                    
        }                                       //i have used 2 break statements to come out 
        if(pow(a,2)+pow(b,2)==pow(c,2))         //from 2 nested for loopf and displaying 1 combination...
        {
            break;
        }
        b=1+(++a);
        c=n-(a+b);
    }
    return prod;
}