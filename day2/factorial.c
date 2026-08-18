//program to find factorial of N using recursion
#include <stdio.h>
int fact(int n){
	//Base case
	if (n == 0)
		return 1;
	//recursive call
	return n * fact(n-1);
}
int main(){
	int n;
	scanf("%d", &n);
	printf("%d", fact(n));
	return 0;
}