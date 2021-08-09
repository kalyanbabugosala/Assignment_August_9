#include<stdio.h>
#include<stdlib.h>

int main()
{
	int i,j;
	char arg;
	while(1)
	{
		printf("a.add\nb.sub\n");
		scanf("%c",&arg);
		switch(arg)
		{
			case 'a':
				printf("\nenter two digits:");
				scanf("\n%d %d",&i,&j);
				printf("\nThe sum is:%d\n",i+j);
				break;
			case 'b':
				printf("\nenter two digits:");
				scanf("\n%d %d",&i,&j);
				printf("\nThe difference is:%d\n",i-j);
				break;
			default:
				printf("No action\n");
				break;
		}
	}
	return 0;
}


