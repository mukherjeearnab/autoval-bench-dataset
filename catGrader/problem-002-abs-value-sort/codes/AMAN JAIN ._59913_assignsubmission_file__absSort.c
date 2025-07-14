int* solve_student(int arr[], int n) {
    // Write solution here
    int* return_array;
    return_array = (int*)malloc(n * sizeof(int));
    int i = n;
    int st = 0, en = n - 1;
    while (st <= en) {
        if (arr[st] < 0) {
            arr[st] = arr[st] * -1;
        }
        if (arr[en] < 0) {
            arr[en] = arr[en] * -1;
        }
        if (arr[st] < arr[en]) {
            return_array[i - 1] = arr[en];
            en--;
            i--;
        } else {
            return_array[i - 1] = arr[st];
            st++;
            i--;
        }
    }

    // int* return_array;
    // Uncomment the following line and replace n with size of array

    return return_array;
}