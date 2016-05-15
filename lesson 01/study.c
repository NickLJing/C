#include <stdio.h>
#include "max.c"

//int main(int argv ,char* argc[])
int main(int argv)
{
	
//	printf("the argument is %d\n",argv);
//	for(int i = 0;i<=argv ;i++){
//		char arg =  argc[i] ;
//		if(arg == 'f'){
//			fprintf(stdout,"finally ,你找到了这个参数\n");			
//		}else if(arg=='t'){
//			int r = 0;
//			printf("根据参数请输入一个数字：\n");
//			fscanf(stdin,"%d",&r);
//			fprintf(stdout,"你输入的数字是：%d\n",r);
//		}else if(arg=='p'){
//			printf("根据参数请输入一个字符\n");
//			int str;
//			scanf("%d",&str);
//			fprintf(stdout,"输入的字符是：%d\n",str);			
//		}else{
//			printf("你输入错了参数请重新输入！！\n");
//		}		
		
//	}
	fprintf(stdout,"please input the first num");
	int num1 = 0;
	fscanf(stdin,"%d",&num1);
	fprintf(stdout,"please input the second num");
	int num2 = 0;
	fscanf(stdin,"%d",&num2);
	char a = 'N';
	a = max(num1,num2);
	char b= 'N';
	b = min(num1,num2);
	if(a=='Y'&&b == 'N'){
		return 0;	

	}else{
		fprintf(stderr,"the first input number must bigger than the second input number,please try again \n 第一个输入的数字必须比第二个输入的数字大，请重试\n");
		return 1;
	}

}
