#include<stdio.h>
int main ()
{
	char string[10],n ;
	int i, c=0 ;
	printf("\nEnter String");
	fgets(string);

	printf("\nEnter charachter");
	scanf("%c",&n);

	for(i=0;string[i]!='\0';i++)
	{
		if (string[i]==n)
			c++;
	}
	printf("\nTotal = %d",c);
	return 0;
}
