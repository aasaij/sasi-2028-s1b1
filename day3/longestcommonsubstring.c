//Program to find length longest common substring
#include <stdio.h>
#include <string.h>

int lcs(char s1[], char s2[]){
	int len1 = strlen(s1);
	int len2 = strlen(s2);
	int dp[len1+1][len2+1];
	for (int i = 0; i<=len1; i++)
		dp[i][0] = 0;
	for (int i = 0; i<=len2; i++)
		dp[0][i] = 0;
	for (int r = 1; r<=len1; r++){		
		for (int c = 1; c<=len2; c++){
			if (s1[r-1]==s2[c-1])
				dp[r][c] = 1+dp[r-1][c-1];
			else
				dp[r][c] = 0;
		}
	}
	int max = 0;
	for (int r = 1; r<=len1; r++)
		for (int c = 1; c<=len2;c++)
			if (max < dp[r][c]) max = dp[r][c];
	return max;		
}


int main(){
	char str1[100];
	char str2[100];	
	scanf("%s %s", str1, str2);
	printf("%d", lcs(str1, str2));
	
	return 0;
}