int* solve_student(int* arr, int n) { // Student 9: Correct, using a do-while loop
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