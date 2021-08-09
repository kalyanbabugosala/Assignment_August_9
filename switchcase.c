#include<stdio.h>
#include<stdlib.h>

int main()
{
	int i,j;
	char arg;
		printf("a.add\ns.sub\n");
		scanf("%c",&arg);
		switch(arg)
		{
			case 'a':
				printf("\nenter two digits:");
				scanf("\n%d %d",&i,&j);
				printf("\nThe sum is:%d\n",i+j);
				break;
			case 's':
				printf("\nenter two digits:");
				scanf("\n%d %d",&i,&j);
				printf("\nThe difference is:%d\n",i-j);
				break;
			default:
				printf("No action\n");
				break;
		}

	return 0;
}

/*
a.add
s.sub
a

enter two digits:5 3

The sum is:8

--------------------------------
Process exited after 11.11 seconds with return value 0
Press any key to continue . . .


*/
