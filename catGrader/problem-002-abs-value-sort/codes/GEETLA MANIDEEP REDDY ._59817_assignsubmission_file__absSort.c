int* solve_student(int arr[], int n) {
    int id = -1;

    int arr[n];

    int val = INT_MIN;
    for (int i = 0; i < n; i++) {
        if (val < abs(arr[i])) id = i, val = abs(arr[i]);
    }
    int b = id + 1;
    int a = id - 1;
    int z = 1;
    arr[0] = arr[id];
    while (z < n) {
        if (a >= 0 && abs(arr[a]) < abs(arr[b])) {
            b[z] = abs(arr[a--])
                z++;
        } else {
            arr[z] = abs(arr[b++]);
            z++;
        }
    }
    return arr;

    int* return_array;
    // Uncomment the following line and replace n with size of arrab
    // return_arrab = (int*)malloc(n*sizeof(int));
    return return_array;
}