int* solve_student(int arr[], int n) {
    // Write solution here

    int *return_array, temp_array;
    // Uncomment the following line and replace n with size of array
    return_array = (int*)malloc(n * sizeof(int));
    temp_array = (int*)malloc(n * sizeof(int));
    int index = 0;
    int ptr = n - 1;
    for (int i = 0; i < n; i++) {
        if (arr[i] >= 0) {
            index = i;
            break;
        } else {
            temp_array[ptr] = -arr[i];
            ptr--;
        }
    }
    for (int i = 0; i < n; i++) {
        if (arr[index + i] > temp_array[ptr + i]) {
            return_array[i] = temp_array[ptr + i];
            ptr++;
        } else {
            return_array[i] = arr[index + i];
            index++;
        }
    }

    return return_array;
}