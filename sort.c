#include<stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h> 
#include <math.h> 

int main()
{
	int i, temp, swapped; 
	int howMany = 11;
	double goals[11]={10,0.225,-2342,12123,3.145435,6,6,5.999,-2,-5,-109.59} ; 
	
		

	printf("Orginnal Array");
	for(i==0; i<howMany; i++){
             printf("%d \n" , goals[i]);

              	}
	while(1){
		swapped = 0; 
		for(i==0; i<howMany-1; i++){
        if(goals[i]>goals[i+1]){
        int temp = goals[i];
	goals[i]=goals[i+1];
	goals[i+1] = goals[i] ; 
	swapped = 1;
	}


        }
		if (swapped==0){
			break;}


	}
         for(i==0; i<howMany; i++){
             printf("%d \n",goals[i]);
	 }

      return 0; 
}
