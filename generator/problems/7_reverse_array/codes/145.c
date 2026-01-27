int* solve_student(int* arr, int n) { // Student 5: Correct, using pointers
  int *start = arr;
  int *end = arr + n - 1;
  while(start < end){
    int temp = *start;
    *start = *end;
    *end = temp;
    start++;
    end--;
  }
  return arr;
}