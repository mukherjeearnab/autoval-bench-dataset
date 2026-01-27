int solve_student(int* arr, int n) {
 int i, count = 0;
 for (i = 1; i < n; i++){
  if (arr[i] > 0) {
   count++;
  }
 }
 return count;
}