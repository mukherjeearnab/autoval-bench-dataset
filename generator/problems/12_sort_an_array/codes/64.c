int* solve_student(int* arr, int n) { // student 4
    if (n <= 1) return arr;
    for (int i = 0; i < n - 1; i++) {
        if (arr[i] > arr[i+1]){
            int temp = arr[i];
            arr[i] = arr[i+1];
            arr[i+1] = temp;
        }
    }
    return arr;
}