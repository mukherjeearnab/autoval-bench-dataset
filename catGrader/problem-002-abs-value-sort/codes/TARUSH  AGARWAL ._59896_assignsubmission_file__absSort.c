int* solve_student(int arr[], int n) {
    // Write solution here

    int* return_array;
    // Uncomment the following line and replace n with size of array
    return_array = (int*)malloc(n * sizeof(int));

    int i;
    for (i = 0; i < n; i++) {
        if (arr[i] >= 0)
            break;
    }

    int r = i, l = i - 1;
    i = 0;
    while (l >= 0 || r < n) {
        if (l < 0) {
            return_array[i] = arr[r];
            r++;
            i++;
        } else if (r == n) {
            return_array[i] = arr[l] * -1;
            l--;
            i++;
        } else {
            if (arr[r] < -1 * arr[l]) {
                return_array[i] = arr[r];
                r++;
                i++;
            } else {
                return_array[i] = arr[l] * -1;
                l--;
                i++;
            }
        }
    }

    return return_array;
}