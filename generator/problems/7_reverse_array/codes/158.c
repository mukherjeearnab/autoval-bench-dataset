int* solve_student(int* arr, int n) { // Student 8: Incorrect - missing include and returns wrong type
  for (int i = 0; i < n; i++) {
    arr[i] = arr[i]; //Does nothing
  }
  return 0; // Wrong return type
}