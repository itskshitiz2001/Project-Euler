#include <iostream>
using namespace std;

int main() {
     int T,N,i,n,x=0,y=0;
     cin>>T;
     while(T--)
     {
          cin>>N;
          char S[N];
          for(i=0;i<N;i++)
          {
               cin>>S[i];
          }
          for(i=0;i<N;i++)
          {
             for(n=i+1;n<=N;n++)
             {
                  if(S[i]==S[n])
                  {
                     continue;  
                  }
                                    else
                  {
                       if(S[i]=='L')
                       x--;
                       else if(S[i]=='R')
                       x++;
                       else if(S[i]=='U')
                       y++;
                       else if(S[i]=='D')
                       y--;
                       i=n;
                  }
             }
          }
          cout<<x<<" "<<y;
          
     }
	// your code goes here
	return 0;