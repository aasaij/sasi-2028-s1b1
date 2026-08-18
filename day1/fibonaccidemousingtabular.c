#include <stdio.h>
int fib(int x){
	int dp[x+1];
	dp[0] = 0;
	dp[1] = 1;
	for (int i = 2; i<=x; i++)
		dp[i] = dp[i-1]+ dp[i-2];
	return dp[x];	
}

int main(){
	int n;
	scanf("%d", &n);
	printf("%d", fib(n));
	
	return 0;
}