int solve_student(int* arr, int n) {
 int min_num;
 if (n == 0) return 0;
 min_num = arr[0];
 for (int i = 0; i < n; i++){
 if(arr[i] < min_num)
 min_num = arr[i];
 }
 return min_num;
}