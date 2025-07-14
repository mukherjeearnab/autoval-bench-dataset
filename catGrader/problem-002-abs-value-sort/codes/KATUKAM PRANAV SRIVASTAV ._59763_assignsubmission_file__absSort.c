
void bubbleSort(int arr[], int n) {
    for (int i = 0; i < n - 1; i++)

        for (int j = 0; j < n - i - 1; j++)
            if (arr[j] >= arr[j + 1]) {
                int t = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = t;
            }
}

int* solve_student(int arr[], int n) {
    // Write solution here

    for (int i = 0; i < n; i++) {
        if (arr[i] < 0) {
            arr[i] *= -1;
        }
    }

    bubbleSort(arr, n);

    int* return_array;

    return_array = (int*)malloc(n * sizeof(int));

    for (int i = 0; i < n; i++) {
        return_array[i] = arr[i];
    }

    return return_array;
}