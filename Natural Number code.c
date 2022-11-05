#include<stdio.h>

int main()

{
     int num, count;

printf("Enter a positive number\n");
scanf("%d", &num);

printf("\nNatural numbers from 1 to %d are:\n", num);

for(count = 1; count <= num; count++)
{
	printf("%d\t", count);
printf("\n");

return 0;
}
}