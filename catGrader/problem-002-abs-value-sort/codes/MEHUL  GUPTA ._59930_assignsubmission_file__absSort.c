int* solve_student(int arr[], int n) {
    // Write solution here

    int* return_array;
    // Uncomment the following line and replace n with size of array

    int i = 0;
    for (i = 0; i < n; i++)
        if (arr[i] > 0)
            break;

    return_array = (int*)malloc(n * sizeof(int));

    int j = i - 1;
    int k = 0;
    while ((j >= 0) && (i < n)) {
        if (-arr[j] > arr[i])
            return_array[k++] = arr[i++];
        else
            return_array[k++] = -arr[j--];
    }

    while (j >= 0)
        return_array[k++] = -arr[j--];

    while (i < n)
        return_array[k++] = arr[i++];

    return return_array;
}
