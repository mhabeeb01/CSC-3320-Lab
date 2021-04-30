#include <stdio.h>

int main(void)
{

	char phone[13] ; 
	printf("Eter phone number") ; 
	scanf("%s", &phone);
	char nphone[12];
	int i;
	char fone[12];
	for(i=0;i<13;i++){
	if(i==4){
	fone[i-1]='-' ; 
	}
	else{
		fone[i-1]=phone[i] ; 
	}	
	}

	fone[i-1]='\0';
		printf("number is %s\n",fone);
	return 0 ; 
}
