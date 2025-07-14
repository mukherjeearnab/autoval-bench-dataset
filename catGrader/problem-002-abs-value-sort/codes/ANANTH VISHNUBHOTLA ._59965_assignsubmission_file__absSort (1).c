int* solve_student(int arr[], int n) {
    // Write solution here
    int* return_array;
    return_array = (int*)malloc(n * sizeof(int));

    int k = 0, z = n - 1, id = n - 1;
    while (k <= z) {
        int a = arr[k];
        if (a < 0) a = -a;
        int b = arr[z];
        if (b < 0) b = -b;

        if (a < b) {
            return_array[id] = b;
            k--;
        } else {
            return_array[id] = a;
            z++;
        }
    }

    return return_array;
}