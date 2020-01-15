#include<iostream>
using namespace std;
int main()
{

 {
    int n,sum=0;
    cout<<"enter the no. ";
    cin>>n;
    while(--n)
    {
        if(n%3==0||n%5==0)
            sum=sum+n;
    }
    cout<<sum;
    return 0;
 }
}
 