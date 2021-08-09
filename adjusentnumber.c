#include<stdio.h>
#include<math.h>
int main()
{
	int n,i,j;
	printf("Enter n value:");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=i;j++)
		{
			printf("%d",i);
		}
	}
	return 0;
}

/*
Enter n value:5
122333444455555
--------------------------------
Process exited after 2.169 seconds with return value 0
Press any key to continue . . .*/
