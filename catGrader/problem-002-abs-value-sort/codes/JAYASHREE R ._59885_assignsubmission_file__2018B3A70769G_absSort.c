int* solve_student(int arr[], int n) {
    // Write solution here

    int* return_array;
    n = sizeof(arr) / sizeof(arr[0]);
    return_array = (int*)malloc(n * sizeof(int));

    for (int i = 1; i < n; i++) {
        if (arr[i - 1] < arr[i]) {
        }
    }

    return return_array;
}
