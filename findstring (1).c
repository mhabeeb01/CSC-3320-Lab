#include <stdio.h>

int main()
{
	char na[100], sna[10][20];
	int i,j=0,k=0,m=0,n=0,max,min;
	printf("Enter String");
	gets(na);
	for(i=0;na[i] !=NULL;i++)
	{
		if(na[i]==' ')
		{
			sna[k][j]='\0';
			k++;
			j=0;
		}
		else
		{
			sna[k][j]=na[i];
			j++;
		}
	}
	sna[k][j]='\0'
		max=strlength(sna[0]);
	min=strlength(sna[0]);
	for(i=0;i<=k;i++)
	{
		if(max<strlength(sna[i]))
		{
			m=i;
		}
		if(min>strlength(sna[i]))
		{
			n=i;
		}
	}
	printf("Largest Word = %s and Smallest Word = %s in a string",sna[m],sna[n]);
	getch();
}


