#include<cstdio>
using namespace std;
 long long int arr[100005];
 int n;
 long long int  maximum(  long long int  x,  long long int  y)
{
return x>y?x:y;

}
int main()
{
	int t,h=1;
	scanf("%d",&t);
	while(t--)
	{
		
		scanf("%d",&n);
		int i;
		for(i=0;i<n;i++)
		scanf("%lld",&arr[i]);
		//for(i=0;i<n;i++)
		//printf("array %d\n",arr[i]);
	  	 long long int sum[10005]={0};
	  	 if(n>=0)
	  	 sum[0]=arr[0];
	  	 if(n>=1)
	  	 sum[1]=arr[1];
	  	 if(n>=2)
	  	 sum[2]=arr[0]+arr[2];
		for(i=3;i<n;i++)
		{
			
			
			
			
			sum[i]=(long long int )(arr[i])+ (maximum(sum[i-2],sum[i-3]));
			
			
			
			
		
		
		}
		/*for(i=0;i<n;i++)
		{
		
			printf("Case %d: %lld \n",h,sum[i]);
		
		}*/
		long long int gsum=0;
		for(i=0;i<n;i++)
		{
		if(gsum<sum[i])
		gsum=sum[i];
		
		}
		
		printf("Case %d: %lld\n",h,gsum);
		h++;
		
		
		
		
		
		
	}
	
	
	
	
return 0;	
}
