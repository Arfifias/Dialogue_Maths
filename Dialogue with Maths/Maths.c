#include <stdio.h>
#include <math.h>

int main(){
	
	
	int my_IQ;
	char name [30] = "Randy";
	int randy_IQ = round(randy_IQ);
	
	printf("Hello there %s...how it's hanging??\n" , name);
	
	printf("Good man what about you??\n");
	
	printf("I am fine dude...I had an IQ test...can you guess mine???\n");
	
	scanf("%d" , &my_IQ );
	
	if(my_IQ >= 140){
		
		printf("Correct dude I am a genious\n");
	}else{
		printf("False...I am way smarter than this\n");
	}
		
	printf("Well..Well...Well\n");
	
	scanf("%d" , &randy_IQ);
	
	printf("Well mine is at %d" , randy_IQ);
	
	return 0;
}
