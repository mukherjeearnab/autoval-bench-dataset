int* solve_student(int arr[], int n) {
    int* return_array;
    // Uncomment the following line and replace n with size of array
    return_array = (int*)malloc(n * sizeof(int));
    for (int i = 0; i < n - 1; i++) {
        return_array[i] = arr[i];
    }
    for (int i = 0; i < n - 1; i++) {
        int flag = 0;
        for (int j = 0; j < n - 1 - i; j++) {
            if (arr[j + 1] < arr[j] || (arr[j + 1] < 0 && arr[j] < 0 && arr[j] < arr[j + 1]) || (arr[j + 1] < 0 && arr[j] >= 0 && -arr[j + 1] < arr[j])) {
                int temp;
                temp = arr[j + 1];
                arr[j + 1] = arr[j];
                arr[j] = temp;
                flag = 1;
            }
        }
        if (flag == 0) {
            break;
        }
    }
    return return_array;
}