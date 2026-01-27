int* solve_student(int* arr, int n) { // Student 5: Using recursion
    void reverse_recursive(int* arr, int start, int end) {
        if (start >= end) return;
        int temp = arr[start];
        arr[start] = arr[end];
        arr[end] = temp;
        reverse_recursive(arr, start + 1, end - 1);
    }
    reverse_recursive(arr, 0, n - 1);
    return arr;
}