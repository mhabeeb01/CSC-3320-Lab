#include<stdio.h>
#include<stdlib.h> 
       void _sortascending(int n, int* ptr){ // This is the function to sort asscending
       int i,j,a ; 	       //intilize the I for the loop A is temp j second loop

	for(i = 0;i<n;i++)  // the for loop first one in the array
	{
		for(j=i+1;j<n;j++){ //For the one after I if its bigger switch
			if(*(ptr +i)>*(ptr+j)){ // we have the pointer at i vs j
			a=*(ptr +i); // if i is bigger switch with j, a stores temp
			*(ptr +i)=*(ptr +j); //put value of j in I 
			*(ptr +j) = a ; //put value of i which is in a in j
			} 
		}
	}
	printf("The sorted array"); // print the sorted array
         for(i=0;i<n;++i){
		 printf("%d\n",*(ptr + i));
	 }
}
void sortdescending(int n, int* ptr){ // sort descending order
       int i,j,a ;             // intilaize the variables

        for(i = 0;i<n;i++) // for the for loop, for each value of I in the array
        {
                for(j=i+1;j<n;j++){ // compare with hte value after I which is J 
                        if(*(ptr +j)> *(ptr+i)){ //compare the pointers at each i and j
                        a=*(ptr +j); // temporary value now has j 
                        *(ptr +j)=*(ptr +i); // put I in j
                        *(ptr +i) = a ;// put j in A *FULL SWAP* 
                        }
                }
        }
        printf("The sorted array"); // print the sorted array
         for(i=0;i<n;++i){
                 printf("%d\n",*(ptr + i));
         }

}
int main() // main function 
{
	int n,i;
         // the size of the array
       int* a ; // we declare the pointer variable
       printf("How many numbers you want sorted:");// asks users for n
       scanf("%d",&n);
       a =( int*)malloc(n * sizeof(int));//the program can now call malloc to allocate                                           // a space for the array  
       printf("Enter %d Number: \n\n",n);
       for(int i;i<n-1;i++) // takes in the number and puts it into the program
       {
scanf("%d",(a+i));
       }
      
            		// This is ^The array we are required to sort 
       char type; // this is to see for Ascneding or Desending
        printf("D for descending and A for Ascedning") ;
        scanf("%c",&type); // check which sort
        if(type=='A'||'a'){
                _sortascending(n,a); // A or a ascending scord
        }
	else if(type=='d'||'D')  {
                sortdescending(n,a); // else descending sort
        }
        return 0 ;
}

