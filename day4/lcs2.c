//program to find length longest common sub sequence
#include <stdio.h>
#include <string.h>
int max (int x, int y){
	return x > y ? x : y;
}
int main(){
	char str1[100];
	char str2[100];
	scanf("%s %s", str1, str2);
	int len1 = strlen(str1);
	int len2 = strlen(str2);
	int vedha[len1+1][len2+1];
	for (int i = 0; i<=len1; i++)
		vedha[i][0] = 0;
	for (int i = 0; i<=len2; i++)
		vedha[0][i] = 0;
	for (int r = 1; r<=len1; r++){
		for (int c = 1; c<=len2; c++){
			if (str1[r-1]==str2[c-1])
				vedha[r][c] = vedha[r-1][c-1]+1;
			else
				vedha[r][c] = max(vedha[r-1][c], vedha[r][c-1]);
		}
	}
	printf("%d", vedha[len1][len2]);
	return 0;
}