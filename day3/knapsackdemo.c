//Program to implement dynamic knapsack problem
#include <stdio.h>
//Structure padding
typedef struct Product{
	char name[30]; // 30
	int weight; // 4
	int profit; // 8
}product;
int max(int x, int y){
	return x > y ? x : y;
}
int knapSack(product p[], int size, int bagSize){
	int dp[size+1][bagSize+1];
	for (int i = 0; i<=size;i++)
		dp[i][0] = 0;
	for (int i = 0; i<=bagSize;i++)		
		dp[0][i] = 0;
	for (int r = 1; r<=size; r++){
		for (int c = 1; c<=bagSize; c++){
			if (c>=p[r-1].weight)
				dp[r][c] = max(dp[r-1][c], p[r-1].profit + dp[r-1][c-p[r-1].weight]);
			else
				dp[r][c] = dp[r-1][c];
		}
	}
	return dp[size][bagSize];
}
int main(){
	int n, nProducts;
	//Getting knapsack size --> bag size
	scanf("%d", &n);
	//Getting Number of products
	scanf("%d", &nProducts);
	product products[nProducts];
	//Getting product details like name, weight, profit
	for (int i = 0; i<nProducts; i++)
		scanf("%s %d %d", 
			products[i].name, &products[i].weight, &products[i].profit);
	printf("%d", knapSack(products, nProducts, n));
	return 0;
}