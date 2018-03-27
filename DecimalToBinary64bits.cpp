#include <stdio.h>
#include <math.h>
int main()
{
	int binary[64], number, i; 
	do{
		printf("input a number: ");
		scanf("%d",&number);
		fflush(stdin);
		}
	while(number>9223372036854775807 || number < 0 ); //2^64 =9223372036854775807
	
	for (i=0; i<=63; i++)
	{
    	binary[i]=number%2;
    	number = number/2;
		}
	
	for (i=63; i >=0; i--)  //for 5 bits use i=4
    printf("%d", binary[i]);
	number=0; // its allready 0.
	for (i=0; i<=63; i++) {number=number+binary[i]*pow(2,i);}
	printf("\n%c",number);
}
