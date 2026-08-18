//Program to find minimum coins
#include <stdio.h>
#include <stdlib.h>
int compare(const void *x, const void *y){	
//	return *x - *y // Ascending order
	return *(int*)y - *(int*)x; // Descending order
}
int main(){
	int amt;
	int nDenoms, coinCnt=0;
	scanf("%d", &amt);
	scanf("%d", &nDenoms);
	int coins[nDenoms];
//	for (int i = 0; i<nCoins; i++)
//		scanf("%d", &coins[i]);
	for (int i = 0; i<nDenoms; scanf("%d", &coins[i++]));
	//implement greedy algorithm
	qsort(coins,nDenoms,sizeof(int), compare);
	for (int i = 0; amt && i<nDenoms; i++){
		coinCnt += amt / coins[i];
		amt %= coins[i];
	}
	if (amt == 0)
		printf("%d", coinCnt);
	else
		printf("No solution found!");	
	
	return 0;
}