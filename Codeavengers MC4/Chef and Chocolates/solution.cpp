 #include<bits/stdc++.h>
 #include <cstdio>
 using namespace std;
 
#pragma GCC optimize("Ofast,no-stack-protector")
#pragma GCC target("sse,sse2,sse3,ssse3,sse4,popcnt,abm,mmx")
#pragma GCC target("avx,tune=native")
#pragma GCC optimize ("-O3")

#define ASS assign
#define PB push_back
#define POPF pop_front
#define POPB pop_back 
#define start(test) ll test=1; cin>>test;  while(test--)
#define fastio ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0)
const int MAXN=100000+10;
typedef long long ll;

ll choco(ll money) 
{ 
 ll price=1,wrap=3;
    if (money < price) 
     {return 0;} 
    ll choc = money / price;  
    choc = choc + (choc - 1) / (wrap - 1); 
    return choc; 
} 
  

int main() 
{fastio;
start(test)
{
        ll money;
        cin>>money;
      ll sum=0;

   sum=money/2+pow((money-money/2),2); 
    
cout <<choco(sum)<<"\n";
}
return 0; 
}
