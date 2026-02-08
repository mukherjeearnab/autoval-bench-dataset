int* solve_student(int* arr, int n) { // student 10 - incorrect
    int i, j;
    for (i = 0; i < n; i++) {
        for (j = 0; j < n - 1; j++){
            if(arr[j] < arr[j+1])
                arr[j] = arr[j+1];
        }
    }
    return arr;
}