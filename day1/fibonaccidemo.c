//program to find nth term of Fibonacci series
#include <stdio.h>
int cnt; // global variable
int fib(int n){
	cnt++;
	// Base case
	if ( n == 1 || n == 0)
		return n;
	return fib(n-2) + fib(n-1);
}

int main(){
	int n;
	
	scanf("%d", &n);
	printf("%d\n", fib(n));
	printf("%d", cnt);
	return 0;
}