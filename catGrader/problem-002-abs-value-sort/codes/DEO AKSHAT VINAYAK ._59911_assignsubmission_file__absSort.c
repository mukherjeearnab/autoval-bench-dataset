int* solve_student(int arr[], int n) {
    // Write solution here

    int temp = 0;

    while (arr[temp] < 0) {
        arr[temp] *= -1;
        temp += 1;
    }

    for (int i = 0; i < n - 1; i++) {
        for (int j = i + 1; j < n; j++) {
            if (arr[i] > arr[j]) {
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
        // Uncomment the following line and replace n with size of array
        int* return_array = (int*)malloc(n * sizeof(int));
        return_array = arr;
        return return_array;
    }
}