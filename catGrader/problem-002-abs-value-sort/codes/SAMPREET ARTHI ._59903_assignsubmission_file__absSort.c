int* solve_student(int arr[], int n) {
    int* return_array;
    return_array = (int*)malloc(n * sizeof(int));

    int pos = 0;
    int neg = 0;
    for (pos = 0; return_array[pos] < 0; pos++);

    int i = 0;
    while (i < n) {
        int negNum = -arr[neg];
        int posNum = arr[pos];

        if (posNum > negNum) {
            return_array[i++] = arr[pos++];
        }
        if (negNum >= posNum) {
            return_array[i++] = arr[neg++];
        }
    }

    return return_array;
}
