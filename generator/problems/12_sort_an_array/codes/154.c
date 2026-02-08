int* solve_student(int* arr, int n) { // Student 4: Quick Sort (Recursive)
  void quicksort(int* arr, int low, int high) {
    if (low < high) {
      int pivot = arr[high];
      int i = (low - 1);
      int j = low;
      while (j < high) {
        if (arr[j] < pivot) {
          i++;
          int temp = arr[i];
          arr[i] = arr[j];
          arr[j] = temp;
        }
        j++;
      }
      int temp = arr[i + 1];
      arr[i + 1] = arr[high];
      arr[high] = temp;
      int pi = i + 1;
      quicksort(arr, low, pi - 1);
      quicksort(arr, pi + 1, high);
    }
  }
  quicksort(arr, 0, n - 1);
  return arr;
}