#include<stdio.h>
#include<stdlib.h>
#include<string.h>
void main(){
	char str[50],str2[50],char** p1,char** p2* ; 
	printf("Enter String one");
	scanf("%s",&str);
	printf("Enter String two");
        scanf("%s",&str2);
	p1 = str;
	p2 = str2;
	int length = strlen(str) ;
	for(i=0;i<length;i++){
	char* temp = *p1
	*p1=*p2;
	*p2=temp;

	}
	printf("%s",&p1);
	printf("%s",&p2);

}
