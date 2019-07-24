
#include<iostream>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		long long n;
		cin>>n;
		long long j,at,temp,k,i,burst[n],pr[n],p[n],waiting[n];
		for(i=0;i<n;i++)
		{
			cin>>p[i]>>burst[i];
			pr[i]=i;
		}
		cin>>k;
		for(i=0;i<n-1;i++)
		
		{
			for(j=i+1;j<n;j++)
			{
				if(p[i]>p[j])
				{
					temp=p[i];
					p[i]=p[j];
					p[j]=temp;
					
					temp=pr[i];
					pr[i]=pr[j];
					pr[j]=temp;
					
					temp=burst[i];
					burst[i]=burst[j];
					burst[j]=temp;
				}
			}
			
		}
		waiting[0]=0;
		for(i=1;i<n;i++) {
			waiting[i]=waiting[i-1]+burst[i-1];
		}
		k=k-1;
		for(i=0;i<n;i++){
			if(pr[i]==k){
				at=7*60+waiting[i];
			}
		}
		printf("%.2d:%.2d",at/60,at%60);
		//cout<<at/60<<":"<<at%60<<endl;
	}
}