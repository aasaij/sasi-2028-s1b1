#include <stdio.h>
//program to implement trip optimization problem
typedef struct Trip{
	char cityName[30];
	int duration;
	int gifts;
}trip;
int max(int x, int y){
	return x > y ? x : y;
}
int tripOptimization(trip t[], int nc, int n){
	int dp[nc+1][n+1];
	//filling first coloumn as 0
	for (int i = 0; i<=nc;i++)
		dp[i][0] = 0;
	//filling first row as 0
	for (int i = 0; i<=n; i++)		
		dp[0][i] = 0;
	for (int r = 1;r<=nc; r++ ){
		for (int c = 1; c<=n; c++){
			if (c>=t[r-1].duration)
				dp[r][c] = max(dp[r-1][c], t[r-1].gifts+dp[r-1][c-t[r-1].duration]);
			else
				dp[r][c] = dp[r-1][c];
		}
	}
	return dp[nc][n];
}
int main(){
	int n, nCities;
	//Getting number of holidays
	scanf("%d", &n);
	//Getting number of cities
	scanf("%d", &nCities);
	//Array of structures
	trip trips[nCities];
	//Getting city details
	for (int i = 0; i<nCities; i++)
		scanf("%s %d %d", 
			trips[i].cityName,&trips[i].duration, &trips[i].gifts);
	printf("%d", tripOptimization(trips, nCities, n));
		
	return 0;
}