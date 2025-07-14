int* solve_student(int arr[], int n) {
    // Write solution here

    int temp_arr[n];

    for (int i = 0; i < n; i++) {
        if (arr[i] < 0) {
            temp_arr[i] = -arr[i];
        } else {
            temp_arr[i] = arr[i];
        }
    }

    int a;
    a = temp_arr[0];

    for (int i = 0; i < n; i++) {
        for (int j = i; j < n; j++) {
            if (temp_arr[j] < a) {
                a = temp_arr[j];
            }
        }

        temp_arr[i] = a;
    }

    int* return_array;
    return_array = temp_arr;
    // Uncomment the following line and replace n with size of array
    return_array = (int*)malloc(n * sizeof(int));
    return return_array;
}