#include <stdio.h>

static int aget(int num){
	
	static int ages = 2 ;
	
	if(num == 0){
		ages = 0;
	}else if(num == 1){
		ages += 10;
	}else{
		ages += aget(num-1);
	}
	return ages;	
}


int main(int argv){
	int agest = aget(5);
	
	fprintf(stdout,"第五人的岁数:%d",agest);
}


