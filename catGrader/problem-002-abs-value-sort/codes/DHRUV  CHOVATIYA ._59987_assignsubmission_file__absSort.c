
void swap(int* xp, int* yp) {
    int temp = *xp;
    *xp = *yp;
    *yp = temp;
}

// A function to implement bubble sort
void bubbleSort(int arr[], int n) {
    int i, j;
    for (i = 0; i < n - 1; i++)

        // Last i elements are already in place
        for (j = 0; j < n - i - 1; j++)
            if (arr[j] > arr[j + 1])
                swap(&arr[j], &arr[j + 1]);
}

int* solve_student(int arr[], int n)

{
    // Write solution here

    for (int i = 0; i < n; i++) {
        if (arr[i] < 0) {
            arr[i] *= -1;
        }
    }

    bubbleSort(arr, n);

    int* return_array;

    // Uncomment the following line and replace n with size of array

    return_array = (int*)malloc(n * sizeof(int));

    for (int i = 0; i < n; i++) {
        return_array[i] = arr[i];
    }

    return return_array;
}