int* solve_student(int* arr, int n) { // Student 10 - Syntax error: missing return type in swap function
 void swap(int* a, int* b) {   //Missing return type
 int temp = *a;
 *a = *b;
 *b = temp;
 }

 int i = 0;
 int j = n - 1;
 while (i < j) {
 swap(&arr[i], &arr[j]);
 i++;
 j--;
 }
 return arr;
}