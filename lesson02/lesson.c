#include <stdio.h>
#include "rec.c"



int main(int argv){
	fprintf(stdout,"递归调用开始-------\n");
	//printf("递归调用开始 \n")
	printf("输入递归次数 \n");
	int count = 0;
	//scanf("%d",&count);
	fscanf(stdin,"%d",&count);
	refed(count);
	fprintf(stdout,"递归调用结束-------\n");
	
}
