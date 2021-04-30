#include<stdio.h>
#include<string.h>
void checkpass(char* pass)
void main()
{
	char str[50]; //charachter string for the input
	int length = 0; // intialize charachter string at 0
	int score = 30; // the initial score that changes with the number of letters
	printf("Enter a new password = \n" ); // tells user to input password
	scanf("%s",&str); // takes in the input
	checkpass(str); // the length = length of stringracthers more 
		                              // more then 10 / 5 to change score
		return 0}
		void checkpass(char* pass){
			int len ;
			int pts = 0 ;
			int upper = 0;
			int digits = 0;
			int cons = 0;
			int lower =0 
			len = strlen(pass) ;
		       for(int i = 0; pass[i] ! = 0; i++){
		       if (isLower(pass[i])){
		lower = 1; 
		       } 

			pts = 5 * (10 -len);
			if(pts > 30){
				printf("deductions: %d",pts);
			}
			else{
				printf("\nThepassword s safe\n" );
			}
		}
