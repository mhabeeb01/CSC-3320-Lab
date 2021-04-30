#include <stdio.h>

void main () {
	int num,bin = 0, rem =0, place =1 ;

	printf("Enter a new number= \n ") ; 
	scanf("%d", &num);
	printf("\n Binary is ", num) ; 
	while(num)
	{
		rem = num %2;
		num = num /2;
		bin = bin +(rem*place);
		place = place *10 ; 
	}
	printf("%d\n",bin ) ; 
}
		/*
	b=a<<3;
	printf("\nAfter shiifting the threeis = \n %d",b);
}*/
/*	for(i=1; i<=input; i++)
	fact = fact*i
		;
	printf("factorial of %d is %d", input, fact);

*/
//}
/*void main () {
        int input, i, fact =1;
        printf("Enter a new numbe") ;
        scanf("%d, &input");


        for(i=1; i<=input; i++)
        fact = fact*i
                ;
        printf("factorial of %d is %d", input, fact);


}
~ */
