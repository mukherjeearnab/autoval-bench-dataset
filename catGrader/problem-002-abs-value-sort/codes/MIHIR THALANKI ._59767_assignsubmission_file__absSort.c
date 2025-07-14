int* solve_student(int arr[], int n) {
    // Write solution here

    int* return_array;

    // Uncomment the following line and replace n with size of array
    return_array = (int*)malloc(n * sizeof(int));
    int tail = 0;
    int head = n - 1;
    int pos = n - 1;
    while (tail < head) {
        if (arr[tail] < 0) {
            arr[tail] = -arr[tail];
        }
        if (arr[head] < 0) {
            arr[head] = -arr[head];
        }
        if (arr[tail] < arr[head]) {
            return_array[pos] = arr[head];
            head--;
        } else {
            return_array[pos] = arr[tail];
            tail++;
        }
    }
    return return_array;
}