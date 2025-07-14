int* solve_student(int arr[], int n) {
    int* return_array;
    // Uncomment the following line and replace n with size of array
    return_array = (int*)malloc(n * sizeof(int));

    int l = 0, r = n - 1, id = n - 1;
    while (id >= 0) {
        int a = arr[l];
        if (a < 0) a = -a;
        int b = arr[r];
        if (b < 0) b = -b;

        if (a < b) {
            return_array[id] = b;
            r--;
        } else {
            return_array[id] = a;
            l++;
        }
        id--;
    }
    return return_array;
}