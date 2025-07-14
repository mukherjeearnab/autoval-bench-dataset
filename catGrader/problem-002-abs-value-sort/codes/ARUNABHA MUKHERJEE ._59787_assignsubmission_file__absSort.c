int* solve_student(int arr[], int n) {
    // Write solution here

    int* return_array;
    // Uncomment the following line and replace n with size of array
    return_array = (int*)malloc(n * sizeof(int));
    int l = 0;
    int r = n - 1;
    int emt = 0;

    for (int i = 0; i < n; i++) {
        if (abs(arr[r]) < abs(arr[l])) {
            emt = abs(arr[l]);
            l++;
        } else {
            emt = abs(arr[r]);
            r--;
        }

        return_array[n - 1 - i] = emt;
    }

    for (int i = 0; i < n; i++) {
        printf("%d  ", return_array[i]);
    }

    // Uncomment the following line and replace n with size of array
    // return_array = (int*)malloc(n*sizeof(int));
    return return_array;
}