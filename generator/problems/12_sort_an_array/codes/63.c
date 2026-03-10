int* solve_student(int* arr, int n) { 
    int temp;
    for (int i = 0; i < n / 2; i++) {
        int j = n - i - 1;
        temp = arr[i];
        arr[i] = arr[j];
        arr[j] = temp;
    }
    return arr;
}