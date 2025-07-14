int* solve_student(int arr[], int n) {
    // Write solution here
    int* ret_array;
    ret_array = (int*)malloc(n * sizeof(int));

    for (int i = 0; i < n; i++) {
        ret_array[i] = arr[i];
        if (arr[i] < 0) {
            ret_array[i] *= -1;
        }
    }

    for (int i = 0; i < n - 1; i++) {
        for (int j = i; j < n; j++) {
            if (ret_array[i] > ret_array[j]) {
                int temp = ret_array[j];
                ret_array[j] = ret_array[i];
                ret_array[i] = temp;
            }
        }
    }

    return ret_array;
}
