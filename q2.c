#include <stdio.h>
int main(){
	int letters;
	int words;
	char character;

	printf("Enter a Sentence");
	while((character=getchar()) != \n){ 
			if (charachter !=' '){
			if(!space){
				words++;
				space =1;
			}
			letters++;
		}else
			space = 0;
	}
	printf("Average word length : %.if", letters/words);
	return 0 ;
}

