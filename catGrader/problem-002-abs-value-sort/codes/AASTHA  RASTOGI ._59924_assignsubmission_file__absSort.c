void swap1(int &a, int &b) {
    a = a + b;
    b = a - b;
    a = a - b;
}
void OptimisedBubbleSort(int *a, int n) {
    bool swapped;
    for (int i = 0; i < n - 1; ++i) {
        swapped = false;
        for (int j = 0; j < n - i - 1; ++j) {
            if (a[j] > a[j + 1]) {
                swap1(a[j], a[j + 1]);
                swapped = true;
            }
        }
        if (swapped == false) {
            break;
        }
    }
}
int *solve_student(int arr[], int n) {
    // Write solution here

    int *return_array;
    // Uncomment the following line and replace n with size of array

    return_array = (int *)malloc(n * sizeof(int));
    for (int i = 0; i < n; ++i) {
        if (arr[i] < 0)
            return_array[i] = (arr[i] * -1);
        else
            return_array[i] = arr[i];
    }
    OptimisedBubbleSort(return_array, n);
    return return_array;
}