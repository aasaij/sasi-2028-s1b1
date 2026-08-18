//Program to implement coin change - DP
#include <stdio.h>
int min(int x, int y){
	return x < y ? x : y;
}
int main(){
	int amt, nDenoms;
	//Getting amount
	scanf("%d", &amt);
	//Getting number of denominations
	scanf("%d", &nDenoms);
	int coins[nDenoms];
	int dp[amt+1];
	//Getting denomination details - coin details
	for (int i = 0; i<nDenoms; i++)
		scanf("%d", coins+i);
	dp[0] = 0;
	//initialize dp array with amt+1 as a initial value
	for (int i = 1; i<=amt;dp[i++]=amt+1);
	//implementing tabular method in DP
	for (int i = 0; i<nDenoms; i++){
		for (int j = coins[i]; j<=amt; j++){
			if (dp[j-coins[i]]!=amt+1)
				dp[j] = min(dp[j], 1+dp[j-coins[i]]);
		}
	}
	printf("%d", dp[amt]);
	return 0;		
}