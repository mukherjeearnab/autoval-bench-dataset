int* solve_student(int arr[], int n) {
    // Write solution here
    int size = sizeof(arr) / sizeof(int);
    int count[100001];
    for (int i = 0; i < 100000; i++) {
        count[i] = 0;
    }
    for (int i = 0; i < size; i++) {
        if (arr[i] < 0)
            arr[i] = -arr[i];
        if (arr[i] == 0) {
            count[100001]++;
        } else {
            count[arr[i] - 1]++;
        }
    }

    int* return_array;
    // Uncomment the following line and replace n with size of array
    return_array = (int*)malloc(size * sizeof(int));
    int j = 0 for (int i = 0; i < count[100001]; i++) {
        return_array[j] = 0;
        j++;
    }
    for (int i = 0; i < 100000; i++) {
        if (count[i] > 0) {
            for (int k = 0; k < count[i]; k++) {
                return_array[j] = i;
                j++;
            }
        }
    }
    return return_array;
}
