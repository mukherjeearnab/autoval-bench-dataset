int* solve_student(int arr[], int n) {
    // Write solution here
    int pos = 0;
    for (int i = 0; i < n; i++) {
        if (arr[i] < 0)
            pos++;
        else
            break;
    }
    // now we know that pos to n - 1 is positive
    // and 0 to pos - 1 is negative and sorted
    // we just need to merge them
    int k = 0;
    int neg = pos - 1;

    int* return_array;
    // Uncomment the following line and replace n with size of array
    return_array = (int*)malloc(n * sizeof(int));

    while (neg >= 0 && pos < n) {
        int first = -arr[neg];
        int second = arr[pos];
        if (first <= second) {
            return_array[k++] = first;
            neg--;
        } else {
            return_array[k++] = second;
            pos++;
        }
    }

    while (neg >= 0) {
        int first = -arr[neg];
        return_array[k++] = first;
        neg--;
    }

    while (pos < n) {
        int second = arr[pos];
        return_array[k++] = second;
        pos++;
    }

    return return_array;
}
