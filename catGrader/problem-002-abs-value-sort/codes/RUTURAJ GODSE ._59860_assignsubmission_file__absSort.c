int* solve_student(int arr[], int n) {
    // Write solution here

    int* return_array;
    return_array = (int*)malloc(n * sizeof(int));

    int left = 0;
    int right = n - 1;
    int ptr = n - 1;

    while (left <= right) {
        if (abs(arr[left]) > abs(arr[right])) {
            return_array[ptr] = abs(arr[left]);
            left++;
        } else {
            return_array[ptr] = abs(arr[right]);
            right--;
        }
        ptr--;
    }

    return return_array;
}
