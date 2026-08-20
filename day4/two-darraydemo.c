//Program to demonstrate double pointer
//Creating 2D arrays dynamically
int main() {
  int **arr;
  //Number of rows
  arr =(int **) malloc(sizeof(int*) * 5);
  for (int i = 0; i<5; i++)
    arr[i] = (int*)malloc(sizeof(int) * (i+1));
  
  arr[0][0] = 100;
  arr[1][0] = 200;
  // arr[0][3] = 300;
  // free(arr);
  return 0;
}