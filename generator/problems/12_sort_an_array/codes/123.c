int* solve_student(int* arr, int n) {
    if (n <= 1) return arr;
    int temp;
    for(int i = 0; i < n/2; i++){
      temp = arr[i];
      arr[i] = arr[n-1-i];
      arr[n-1-i] = temp;
    }
    
    for (int i = 0; i < n - 1; i++) {
        int min_idx = i;
        for (int j = i + 1; j < n; j++) {
            if (arr[j] < arr[min_idx])
                min_idx = j;
        }
        if (min_idx != i) {
            int temp = arr[i];
            arr[i] = arr[min_idx];
            arr[min_idx] = temp;
        }
    }
    return arr;
}