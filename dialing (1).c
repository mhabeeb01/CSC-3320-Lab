#include<stdio.h>
struct dialing_code{ // construct object for dialing code
	char *country; //pointer for country
	int code; // int code of the dialing code
}
int main(int argc, char* argv[] ){ // this is our class where we assign the codes an
															//etc
	int international, i ; //we create 20 "Dialing codes"
		const struct dialing_code codes[] = 
		{"Egypt", 20},{"SouthSudan", 210},{"Morocco", 212},
{"Algeria", 212},{"Tunisia", 216},{"Lybia", 218},{"Greece", 30},
{"Netherlands", 31},{"Belgium", 32},{"Spain", 34},
{"Hugary", 36},{"italy", 39},{"Romania", 40},{"Switzerland", 41},{"Austria", 43},
{"Denmark", 45},{"Sweden", 46},{"Sweden", 46},{"Norway", 47},{"Poland", 48}
}
printf("Enter international code \n"); // asks user to enter the dialing code
scanf("%d", &international);
if(int i  = 0;i<20;i++){ // we go through the objects we have to match the code
	if(codes[i].code == international) // if the code exists we print the countr
	
		printf("%s\n",codes[i].country);//we can say its kind of like a node
}
else{
	printf("NOT FOUND"); // if not there we print not there
}
		
		
		}
}
