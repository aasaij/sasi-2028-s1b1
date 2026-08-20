int main() {
  int *arr;
  arr =(int *) malloc(sizeof(int) * 5);
  int *brr;
  brr = (int*) calloc(5, sizeof(int));
  // arr = (int*)realloc(arr, sizeof(int) * 10);
  // int arr[5];
  arr[0] = 100;
  arr[1] = 200;
  arr[3] = 300;
  // free(arr);
  return 0;
}