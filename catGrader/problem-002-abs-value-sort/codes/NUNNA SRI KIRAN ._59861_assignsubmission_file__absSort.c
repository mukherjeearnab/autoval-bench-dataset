int* solve_student(int arr[], int n) {
    // Write solution here

    int* return_array;

    int arr[] = {-8, -5, -1, 0, 4, 9};
    for (int i = 0; i < size(arr); i++) {
        arr[i] = abs(arr[i]);
    }

    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            if (arr[j] < arr[i]) {
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
    // return_array = (int*)malloc(n*sizeof(int));
    return arr;
}