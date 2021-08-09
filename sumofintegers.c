#include<stdio.h>
int main()
{
	int i,n,k,sum=0;
	printf("enter n:");
	scanf("%d",&n);
	printf("Enter n integers:");
	for(i=1;i<=n;i++)
	{
		scanf("%d",&k);
		if(k==0)
		{
			break;
		}
		if(k<0)
		{
			continue;
			//sum=sum+k;
		}
	
		sum=sum+k;
	}
	printf("the sum is:%d",sum);
	
	return 0;
}
/*
enter n:5
Enter n integers:8
-1
2
3
-5
the sum is:13
--------------------------------
Process exited after 30.98 seconds with return value 0
Press any key to continue . . .
*/
