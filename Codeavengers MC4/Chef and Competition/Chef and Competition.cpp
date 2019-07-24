#include<bits/stdc++.h>
#pragma GCC optimize("Ofast,no-stack-protector")
#pragma GCC target("sse,sse2,sse3,ssse3,sse4,popcnt,abm,mmx")
#pragma GCC target("avx,tune=native")
#include <cstdio>
#pragma GCC optimize ("-O3")
using namespace std; 
#define fastio ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0)
const int MAXN=100000+10;
typedef long long ll;
#define start(test)  ll test; cin>>test;	ll max=0;	while(test--)
#define ASS assign
#define PB push_back
#define POPF pop_front
#define POPB pop_back

long long dp[MAXN];

ll countSetBits(ll n) 
{  
	return __builtin_popcountll(n); 
} 

ll  FlippedCount(ll  a, ll  b) 
{ ll count=0;
for(ll i=a;i<b;i++)
	  {
      dp[i]=countSetBits(i^(i-1));
      count+=dp[i];
    }

      return count;
} 

// Driver code 
int main() 
{ memset(dp,0,sizeof(dp));
  dp[0]=0;
 start(test)
  {
     ll n;
    cin>>n;  
    if(n>max){
                 if(countSetBits(FlippedCount(max,n))%2==0)
                    {cout<<"Even"<<"\n";}
                else
                    {cout<<"Odd"<<"\n";}
    }
    else
    { ll sum=0;
        for(ll i=0;i<n;i++)
        {
          sum+=dp[i];  
        }
              if(countSetBits(sum)%2==0)
                    {cout<<"Even"<<"\n";}
                else
                    {cout<<"Odd"<<"\n";}
    }
     max=n>=max?n:max;
  }
	return 0; 
} 
