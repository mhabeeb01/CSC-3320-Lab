#include <stdio.h> 
#include <string.h>

int main()
{
	char ptr[8][12] = // charachter array of the words given 
	{
		"Systems",
		"Programming",
		"Deep",
		"Learning",
		"Internet",
		"Things",
		"Robotics",
		"Course"  } ; 
	int i, j; // initialize I and J for the for loops needed to sort in alphabetical order
	char temp[12] ; // temporart char arr to store for when we swap 
	printf("\n Given Array is:\n"); // print the given array 

			for (i=0;i<8;i++){ // We print the unsorted list of words

			printf("%s\n",&ptr[i]); //print
			}

        for(i = 0;i<7;i++) // for loop to begin alphabetically ordering
        {
                for(j=i+1;i<8;j++){ // j+1 meaning the compare to the one next to it
                        if(strcmp(ptr[i],ptr[j])>0){ // if it compares and one is in higher alhpabet
                               strcpy(temp,ptr[i]);  // we swap
                               strcpy(ptr[i],ptr[j]);// we stre i in temp and put j in I 
                                strcpy(ptr[i],ptr[j]); // put i back in j 
                }
                
	}	
		printf("\nsorted\n"); // here we now print out the sorted array 
                                for(i=0;i<6;i++){
				printf("%s",ptr[i]);
                                }	}

return 0;
}
