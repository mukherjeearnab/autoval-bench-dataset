int* solve_student(int* arr, int n) { // Student 4: Correct, verbose comments
  // Function to reverse an array in-place
  int left = 0;
  int right = n - 1;
  while (left < right) {
    // Swap elements at left and right indices
    int temp = arr[left];
    arr[left] = arr[right];
    arr[right] = temp;

    // Move indices towards the middle
    left++;
    right--;
  }
  return arr;
}