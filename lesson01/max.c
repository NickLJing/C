#include <stdio.h>

char max(int firstNumber,int secondNumber)
{
	int test1 = 0 ;
	for(int i = 0;i < firstNumber;i++){
		test1+=i;		
	}
	if(firstNumber>secondNumber){

		return 'Y';
	}
	return 'N';

}
