#include <stdio.h>

int main(int argv){
	float a = 0;
	double b =0;
	int c = 0;
	fprintf(stdout,"input float number and double number\n");
	scanf("%f,%lf",&a,&b);
	c = (int)a%(int)b;
	printf("%f,%d,%lf\n",a,c,b);
	return 0;
}
