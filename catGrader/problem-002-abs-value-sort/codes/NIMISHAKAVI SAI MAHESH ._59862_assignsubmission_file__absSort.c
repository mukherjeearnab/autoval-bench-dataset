int* solve_student(int arr[], int n) {
    // Write solution here

    // Uncomment the following line and replace n with size of array
    int return_array[n];
    int id = -1, key = INT_MIN;
    for (int i = 0; i < n; i++) {
        if (key < abs(arr[i])) {
            id = i, key = abs(arr[i]);
        }
    }
    int x = id - 1, y = id + 1, z = 1;
    return_array[0] = arr[id];
    while (z < n) {
        if (x >= 0 && abs(arr[x]) < abs(arr[y])) {
            return_array[z] = abs(arr[x--]), z++;
        } else {
            return_array[z] = abs(arr[y++]), z++;
        }
    }
    return return_array;
}