#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    while(n--)
    {
    int a[10]={6,2,5,5,4,5,6,3,7,6};
    char t[100];
    long long count=0,i=0;
    cin>>t;
    if(t==0) count=6;
    while(t[i]!='\0')
    {
        count=count+a[t[i]-48];
        i++;
    }
    //cout<<count<<endl;
    if(count%2==0) 
    {
        for(i=0;i<count/2;i++) cout<<"1";
    }
    else {
        cout<<"7";
        for(i=1;i<count/2;i++) cout<<"1";
    }
    cout<<endl;
    }
}
