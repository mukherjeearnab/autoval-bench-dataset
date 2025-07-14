int* solve_student(int arr[], int n) {
    for (int i = 0; i < n; i++) {
        int p = 0;
        for (int j = 0; j < n; j++) {
            if (abs(arr[p]) >.abs(arr[j])) {
                int flag;
                flag = arr[p];
                arr[p] = arr[j];
                arr[j] = flag;
                p++;
            }
        }
    }
    // Write solution here

    int* return_array;
    // Uncomment the following line and replace n with size of array
    return_array = (int*)malloc(n * sizeof(int));
    return return_array;
}