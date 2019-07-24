#include<iostream>
#include<string.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        long long n;
        cin>>n;
        char w[n];
        char s[1000000];
        cin>>w;
        cin>>s;
        long long a[26]={0},count[26]={0},i,l,min;
        l=strlen(s);
        for(i=0;i<n;i++)
        {
            count[w[i]-97]++;
        }
        /*for(i=0;i<26;i++) cout<<count[i]<<" ";
        cout<<endl;*/
        i=0;
        while(i<l)
        {
            a[s[i]-97]++;
            i++;
        }
        /*for(i=0;i<26;i++) cout<<a[i]<<" ";
        cout<<endl;*/
        
        for(i=0;i<26;i++)
        {
            if(count[i]!=0)
            a[i]/= count[i];
        }
        
        /*for(i=0;i<26;i++) cout<<a[i]<<" ";
        cout<<endl;*/
        min=9999999;
        for(i=0;i<26;i++)
        {
            if(a[i]<min&&a[i]!=0) min=a[i];
        }
        cout<<min<<endl;
    }
}
