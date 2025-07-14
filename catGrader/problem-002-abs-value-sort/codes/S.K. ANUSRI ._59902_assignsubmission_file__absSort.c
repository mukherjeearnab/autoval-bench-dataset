int* solve_student(int arr[], int n) {
    for (int i = 0; i < n; i++) {
        int pos = 0;
        for (int j = 0; j < n; j++) {
            if (abs(arr[pos]) > abs(arr[j])) {
                int temp;
                temp = arr[pos];
                arr[pos] = arr[j];
                arr[j] = temp;
                pos++;
            }
        }

        int* return_array;
        // Uncomment the following line and replace n with size of array
        return_array = (int*)malloc(n * sizeof(int));
        return return_array;
    }