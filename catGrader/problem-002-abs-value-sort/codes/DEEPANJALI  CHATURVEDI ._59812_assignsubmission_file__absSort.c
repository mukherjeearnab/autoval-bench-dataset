int *solve_student(int arr[], int n) {
    // Write solution here

    int *return_array;

    return_array = (int *)malloc(n * sizeof(int));

    for (int i = 0; i < x; i++) {
        if (arr[i] < 0)

            return_array[i] = -1 * arr[i];

        else
            return_array[i] = arr[i];
    }

    int var;
    for (int i = 0; i < x; i++) {
        for (int j = i + 1; j < x; j++) {
            if (return_array[i] > return_array[j]) {
                var = return_array[i];
                return_array[i] = return_array[j];
                return_array[j] = var;
            }
        }
    }

    return return_array;
}