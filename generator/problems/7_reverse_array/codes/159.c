int* solve_student(int* arr, int n) { 
 int start = 0;
 int end = n - 1;
 do {
   int temp = arr[start];
   arr[start] = arr[end];
   arr[end] = temp;
   start++;
   end--;
 } while (start < end);
 return arr;
}