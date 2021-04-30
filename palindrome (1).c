#include<string.h>
#include<stdio.h>
#include<stdlib.h>
void isPalindrome(char *message, int maxlen);
int main(void){ 
	int i;
	char = message,c;
	message = ( char*) malloc(maxLength*sizeof(char));
	printf("\nEnterMessage\n");
	for(i=0;i<maxLength;i++){
		c = getchar();
		if(c=='\n'){
			break;
			}
		else{
			message[i]=c;}
	}
}
	isPalindrome(message,maxLength) ;
	return 0;
}
void isPalindrome(char *message, int maxlength){
	int i,j, messageLength=0;
	for(i=0;i<maxLength;i++){
		if((message[i]>='a' && message[i]<='z')||(message[i]>='A' && message[i]<='Z') || (message[i]>='0' && message[i]<='9') || message[i]==' '){
			if(message[i]>='A' && message[i]<='Z'){
				message[i]=message[i]+32;
			}
			messageLength++;
		}
		else{
			break;
		}
	}
	j=0;
	for(i=messageLength-1;i>=0;i--){
	}else{
		break;
	}
	j++;
}
if(i==-1){
	printf("\nIts a Palindrome");
}else{
	printf("\nIts not a pallindrome");
}
}
