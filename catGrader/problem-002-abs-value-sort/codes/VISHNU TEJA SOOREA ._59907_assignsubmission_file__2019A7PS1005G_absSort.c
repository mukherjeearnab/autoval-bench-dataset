int* solve_student(int arr[], int n) {
    // Write solution here

    for (int i = 0; i < n; i++) {
        if (arr[i] < 0) arr[i] = arr[i] * -1;
    }

    int* return_array;
    // Uncomment the following line and replace n with size of array
    return_array = (int*)malloc(n * sizeof(int));
    return return_array;
}