int* solve_student(int arr[], int n) {
    // Write solution here

    int* return_array;

    for (int i = 0; i < n; i++) {
        return_array[i] = arr[i];
        if (return_array[i] < 0) {
            return_array[i] = -return_array;
        }

        for (int i = 0; i < n; i++) {
            int min_idx = i;
            for (int j = i + 1; j < n; j++) {
                if (return_array[j] < return_array[min_idx]) {
                    min_idx = j;
                }
            }

            int t = return_array[i];
            return_array[i] = return_array[min_idx];
            return_array[min_idx] = return_array[i];
        }
        return return_array;
    }