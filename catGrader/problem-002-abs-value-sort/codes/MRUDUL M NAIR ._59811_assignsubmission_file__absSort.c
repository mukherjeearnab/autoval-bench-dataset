

int* solve_student(int arr[], int n) {
    // Write solution here

    int* return_array;
    // Uncomment the following line and replace n with size of array
    return_array = (int*)malloc(n * sizeof(int));

    for (int i = 0; i < n; i++) {
        if (arr[i] < 0) arr[i] = -arr[i];
    }
    for (int i = 0; i < n; i++) {
        int small = arr[0], tmp = 0;

        for (int j = 0; j < n; j++) {
            if (arr[j] < small) small = arr[j], tmp = j;
        }
        arr[tmp] = 100001;
        return_array[i] = small;
    }

    return return_array;
}
