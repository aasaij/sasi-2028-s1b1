//Program to implement minimum edit distance problem
#include <stdio.h>
#include <string.h>
int min(int x, int y){
	return x < y ? x:y;
}
int min3(int x, int y, int z){
	return min(min(x,y),z);
}
int main(){
	char str1[100];
	char str2[100];
	scanf("%s %s", str1, str2);
	int len1 = strlen(str1);
	int len2 = strlen(str2);
	int dp[len1+1][len2+1];
	for (int r = 0; r<=len1; r++){
		for (int c = 0; c<=len2; c++){
			if (r == 0 || c == 0)
				dp[r][c] = 0;
			else{
				if (str1[r-1] == str2[c-1])
					dp[r][c] = dp[r-1][c-1];
				else
					dp[r][c] = min3(dp[r-1][c], dp[r-1][c-1], dp[r][c-1])+1;
			}
		}
	}
	printf("%d",dp[len1][len2]);
}