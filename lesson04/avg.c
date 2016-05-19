#include <stdio.h>
#include <math.h>
int main(int argv){

	float sum;
	int count;
	double log1;
//	fprintf(stdout,"请依次输入sum、count、log1\n");
	scanf("%f,%d,%lf",&sum,&count,&log1);
	printf("sum‘s value = %f\n",sum);
	printf("count's value = %d\n",count);
	printf("log1's value = %lf\n",log1);
	double result = log(log1);
	fprintf(stdout,"自然对数：%lf\n",result);
	fprintf(stdout,"平均数为：sum/count=%f\n",sum/count);
	return 0;
}

