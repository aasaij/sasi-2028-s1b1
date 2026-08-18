//program to find nth term of Fibonacci series
#include <stdio.h>
int cnt; // global variable
int fib(int n, int dp[]){
	cnt++;
	// Base case
	if ( n == 1 || n == 0)
		return n;
	if (dp[n]!=-1)
		return dp[n];
	dp[n] = fib(n-1, dp) + fib(n-2, dp);
	return dp[n];
}

int main(){
	int n;
	scanf("%d", &n);
	int dp[n+1]	;
	for (int i = 0; i<=n; dp[i++]=-1); // dp = [-1] * (n+1)	
	printf("%d\n", fib(n, dp));
	printf("%d", cnt);
	return 0;
}