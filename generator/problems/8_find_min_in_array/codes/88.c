int solve_student(int* arr, int n) {
    int min_val = arr[0];
    for (int i = 0; i < n+1; i++){
        if(arr[i] < min_val) {
            min_val = arr[i];
        }
    }
    return min_val;
}