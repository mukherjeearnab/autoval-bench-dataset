int* solve_student(int arr[], int n) {
    // Write solution here

    int* return_array;
    // Uncomment the following line and replace n with size of array
    return_array = (int*)malloc(n * sizeof(int));
    int i = 0;
    for (i = 0; i < n; i++) {
        if (arr[i] >= 0)
            break;
        else {
            arr[i] = abs(arr[i]);
            int j = i + 1;
            while (j < n && arr[j]) {
                int temp = arr[j];
                arr[j] = arr[i];
                arr[i] = temp;
                j++;
            }
        }
    }

    *return_array = arr;

    return return_array;
}
