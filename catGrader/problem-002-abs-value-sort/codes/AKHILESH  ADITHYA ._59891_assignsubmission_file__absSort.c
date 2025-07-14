// Given an integer array ‘A‘ of length ‘N’ which is sorted in non-decreasing order, return an array ‘B’ of length ‘N’’ with absolute value of elements in ’A’ sorted in non-decreasing order.
int* solve_student(int arr[], int n) {
    int* return_array;
    return_array = (int*)malloc(sizeof(int) * n);
    for (int i = 0; i < n; i++) {
        return_array[i] = abs(arr[i]);
    }
    // sort array
    int i = 0, j = 0, tmp;
    for (i = 0; i < n; i++) {                             // loop n times - 1 per element
        for (j = 0; j < n - i - 1; j++) {                 // last i elements are sorted already
            if (return_array[j] > return_array[j + 1]) {  // swop if order is broken
                tmp = return_array[j];
                return_array[j] = return_array[j + 1];
                return_array[j + 1] = tmp;
            }
        }
    }
    return return_array;
}