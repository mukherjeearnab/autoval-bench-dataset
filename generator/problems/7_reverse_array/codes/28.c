int* solve_student(int* arr, int n) { // Student 8 - Incorrect: doesn't handle n=0 or n=1
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