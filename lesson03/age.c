#include <stdio.h>

int age(int num){
	
	static int ages = 2 ;
	
	if(num == 0){
		ages = 0;
	}else if(num == 1){
		ages += 10;
	}else{
		ages += age(num-1);
	}
	return ages;	
}