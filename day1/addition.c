#include <stdio.h>
//Program to add two numbers
int main(){
	double x, y, sum;
	scanf("%lf %lf", &x, &y);
	sum = x + y;
	if ((long)sum == sum )
		printf("%ld", (long)sum);
	else
		printf("%.2lf", sum);
		
	return 0;
	
}