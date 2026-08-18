//Program to implement longest increasing subsequence
#include <stdio.h>
int max(int x, int y){
	return x > y ?  x : y;
}
int lis(int a[], int n){
	int dp[n];
	for (int i = 0; i<n; i++)
		dp[i] = 1;
	for (int i = 1; i<n; i++){
		for (int j = 0; j<i; j++)
			if (a[i]>a[j])
				dp[i] = max(dp[i], 1+dp[j]);
	}
	int maximum = dp[0];
	for (int i = 1; i<n; i++)
		if (maximum < dp[i])
			maximum = dp[i];
	return maximum;	
}
int main(){
	int n;
	scanf("%d",&n);
	int arr[n];
	for (int i = 0; i<n; i++)
		scanf("%d", &arr[i]);
	printf("%d", lis(arr, n));
	return 0;
}