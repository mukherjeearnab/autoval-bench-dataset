int* solve_student(int* arr, int n) { 
 int i = 0;
 int j = n - 1;
 while (i < j) {
  int tmp = arr[i];
  arr[i] = arr[j];
  arr[j] = tmp;
  i++;
  j--;
 }
 return arr;
}