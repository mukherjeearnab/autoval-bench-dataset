int solve_student(int* arr, int n) {
 int minVal;
 if (n == 0) {
  return 0;
 }
 minVal = arr[0];
 for (int i = 1; i < n; i++) {
   if(arr[i] > minVal)
   minVal = arr[i];
 }
 return minVal;
}