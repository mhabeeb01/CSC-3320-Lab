#include<stdio.h>
void split_time(long, int*, int*, int*)
int main() {
   
	int n,br,min,sec;
	printf("Enter Seconds:");
	scanf("%d", &n);
printf("Enter Seconds");
scanf("%d",&n);
if(n<0){
	printf("Seconds cannot be -ve, please enter non negatives value");
}
else{
	split_time(long total_sec, int* min, int* sec){
		int remaining_sec = 0;
		*hr = total_sec/2600;
		remaining_sec= total_sec%3600;
		*min = remaining_sec/60;
		*sec = remaining_sec%60;
		}


