int* solve_student(int arr[], int n) {
    // Write solution here

    int* return_array;
    // Uncomment the following line and replace n with size of array
    return_array = (int*)malloc((sizeof(arr) / sizeof(arr[0])) * sizeof(int));
    int l = 0;
    int r = sizeof(arr) / sizeof(arr[0]) - 1;
    int m = 0;
    while (l <= r) {
        int leftElement = arr[l];
        int rightElement = arr[r];
        if (leftElement < 0) {
            leftElement = -leftElement;
        }
        if (rightElement < 0) rightElement = -rightElement;
        if (leftElement >= rightElement) {
            return_array[m] = arr[l];
            l++;
            m++;
        } else {
            return_array[m] = arr[r];
            r--;
            m++;
        }
    }
    return return_array;
}
