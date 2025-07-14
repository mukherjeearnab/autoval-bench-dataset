int* solve_student(int arr[], int n) {
    // Write solution here
    int arr1[n];
    int sizeNeg = 0, i = 0;
    for (i = 0; i < n; i++) {
        if (arr[i] < 0) {
            arr1[sizeNeg] = -1 * arr[i];
            sizeNeg = sizeNeg + 1;
        } else {
            break;
        }
    }
    // printf("sizeNeg is : %d \n",sizeNeg);
    int st1 = i;
    int st2 = 0;
    int* return_array;
    int k = 0;
    // Uncomment the following line and replace n with size of array
    return_array = (int*)malloc(n * sizeof(int));
    while (st1 < n && st2 < sizeNeg) {
        if (arr[st1] <= arr1[st2]) {
            return_array[k] = arr[st1];
        } else {
            return_array[k] = arr1[st2];
        }
        k++;
    }
    while (st1 < n) {
        return_array[k] = arr[st1];
        k++;
    }
    while (st2 < sizeNeg) {
        return_array[k] = arr1[st2];
        k++;
    }
    return return_array;
}