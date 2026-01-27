int* solve_student(int* arr, int n) { // Student 9: Another correct solution
    int start = 0;
    int end = n - 1;
    while (start < end) {
        int tmp = arr[start];
        arr[start] = arr[end];
        arr[end] = tmp;
        start++;
        end--;
    }
    return arr;
}