#include<stdio.h>
void main ()
{
	char charvar = '\0' ;
	printf("Address of charvar = %p\n",   (void *)(&charvar));
	printf("Address of charvar - 1 = %p\n",   (void *)(&charvar - 1));
	printf("Address of charvar + 1 = %p\n",   (void *)(&charvar + 1));


	int intvar = 1;
	printf("Address of intvar = %p\n",   (void *)(&intvar));
	printf("Address of intvar - 1 = %p\n", (void *)(&intvar - 1));
	printf("Address of intvar + 1 = %p\n", (void *)(&intvar + 1));
}




