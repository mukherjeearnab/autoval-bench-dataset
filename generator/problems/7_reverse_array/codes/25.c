int* solve_student(int* arr, int n) { 
 int i;
 for(i=0; i<=n; i++){
 int temp = arr[i];
 arr[i] = arr[n-i];
 arr[n-i] = temp;
 }
 return arr;
}