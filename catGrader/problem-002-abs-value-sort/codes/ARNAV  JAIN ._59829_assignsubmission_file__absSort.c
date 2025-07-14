int* solve_student(int arr[], int n) {
    // Write solution here

    int* return_array;
    // Uncomment the following line and replace n with size of array
    return_array = (int*)malloc(n * sizeof(int));

    int i = 0, j = 0, k = 0, x = 0;
    while (j < n) {
        if (arr[j] >= 0) break;
        j++;
    }

    k = j;
    while (i < k && j < n) {
        if (abs(arr[i]) < abs(arr[j]))
            return_array[x++] = arr[i++];
        else
            return_array[x++] = arr[j++];
    }

    while (i < k) {
        return_array[x++] = arr[i++];
    }
    while (j < n) {
        return_array[x++] = arr[j++];
    }

    return return_array;
}