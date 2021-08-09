#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
int main()
{
	int size,i,max,s_max;
	printf("enter the array size:");
	scanf("%d",&size);
	int *ptr=(int*)malloc(sizeof(size));
	printf("enter n elements:");
	for(i=0;i<size;i++)
	{
		scanf("%d",&ptr[i]);
	}
	//ptr[4,6,3,8]
	max=0;
	s_max=0;
	for(i=0;i<size;i++)
	{
		if(ptr[i]>max)//if 4>0,if 6>4,if 3>6, if 8>6
		{
			s_max=max;//s_max=0,s_max=4,s_max=6
			max=ptr[i];//max=4,max=6,max=8
		}
		else if(ptr[i]>s_max && ptr[i]!=max)//3>4 && 3!=6
		{
			s_max=ptr[i];
		}
	}
	printf("the second largest element in an array is: %d",s_max);
	return 0;
}
/*
enter the array size:4
enter n elements:6 7 5 2
the second largest element in an array is: 6
--------------------------------
Process exited after 12.07 seconds with return value 0
Press any key to continue . . .


*/
