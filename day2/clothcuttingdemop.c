//Program to implement cloth cutting problem
#include <stdio.h>
//Macro
#define max(x,y) (x>y?x:y) 
int main(){
	int n;
	scanf("%d", &n);
	int profit[n];
	for (int i = 0; i<n; i++)
		scanf("%d", profit+i); // scanf("%d", &profit[i]);
	int dp[n+1];
	dp[0] = 0;
	for (int i = 1; i<=n; dp[i++]=-1);
	for (int i = 1; i<=n; i++){
		for (int j = 1; j<=i; j++){
			dp[i] = max(dp[i], profit[j-1]+dp[i-j]);
		}
	}
	printf("%d", dp[n]);
	return 0;
}