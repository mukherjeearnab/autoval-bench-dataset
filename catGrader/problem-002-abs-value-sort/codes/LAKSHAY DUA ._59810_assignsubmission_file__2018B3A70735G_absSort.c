int* solve_student(int arr[], int n) {
    // Write solution here

    int* return_array;

    return_array = (int*)malloc(n * sizeof(int));

    for (int new1 = 0; new1 < n; new1++) return_array[new1] = abs(arr[new1]);

    for (int new1 = 0; new1 < n - 1; new1++) {
        for (int new2 = new1 + 1; new2 < n; new2++) {
            if (return_array[new1] > return_array[new1]) {
                int temp = return_array[new1];

                return_array[new1] = return_array[new2];

                return_array[new2] = temp;
            }
        }
    }

    return return_array;
}
