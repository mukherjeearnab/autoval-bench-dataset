int* solve_student(int arr[], int n) {
    // Write solution here

    int a;
    int* return_array;
    int s = sizeof(arr) / sizeof(arr[0]);
    return_array = (int*)malloc(s * sizeof(int));
    for (int i = 0; i < s; i++) {
        if (arr[i] < 0) arr[i] = 0 - arr[i];
    }
    for (int i = 0; i < s; ++i) {
        for (int j = i + 1; j < s; ++j) {
            if (arr[i] > arr[j]) {
                a = arr[i];
                arr[i] = arr[j];
                arr[j] = a;
            }
        }
    }
    for (int i = 0; i < s; i++) {
        printf(arr[i]);
    }
    return return_array;
}