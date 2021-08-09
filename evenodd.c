#include<stdio.h>
#include<stdlib.h>
int main()
{
	int i,j,k,even[50],odd[50];
	for(i=1;i<=100;i++)
	{
		//printf("%d,",evenodd[i]);
		if(i%2==0)
		{
			even[j]=i;
			j++;
			//printf("%d,",even[i]);
		}
		else
		{
			odd[k]=i;
			k++;
		}
	}
	printf("Even numbers are:");
    for(i=0;i<=50;i++)
    {
    	printf("%d,",even[i]);
	}
	printf("\nOdd numbers are:");
    for(i=0;i<50;i++)
    {
    	printf("%d,",odd[i]);
	}
	return 0;
	
}

/*
Even numbers are:0,2,4,6,8,10,12,14,16,18,20,22,24,26,28,30,32,34,36,38,40,42,44,46,48,50,52,54,56,58,60,62,64,66,68,70,72,74,76,78,80,82,84,86,88,90,92,94,96,98,100,
Odd numbers are:3,5,7,9,11,13,15,17,19,21,23,25,27,29,31,33,35,37,39,41,43,45,47,49,51,53,55,57,59,61,63,65,67,69,71,73,75,77,79,81,83,85,87,89,91,93,95,97,99,
--------------------------------
Process exited after 0.0697 seconds with return value 0
Press any key to continue . . .

*/
