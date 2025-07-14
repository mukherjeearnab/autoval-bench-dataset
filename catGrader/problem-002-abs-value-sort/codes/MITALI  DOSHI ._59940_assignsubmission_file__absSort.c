int* solve_student(int arr[], int n) {
    // Write solution here
    int* return_array;
    // Uncomment the following line and replace n with size of array
    return_array = (int*)malloc(n * sizeof(int));

    int i = 0;
    while (i < n) {
        if (arr[i] < 0)
            i++;
    }

    int x = i;

    if (i == n) {
        for (int j = 0; j < n; j++)
            return_array[j] = -1 * arr[j];
    } else if (i == 0) {
        for (int j = 0; j < n; j++)
            return_array[j] = arr[j];
    } else {
        int r = 0;
        int j = 0;
        while (r < n) {
            if ((-1 * arr[j]) < (arr[i])) {
                return_array[r] = arr[i];
                i++;
                r++;
            } else {
                return_array[r] = -1 * arr[j];
                j++;
                r++;
            }
        }

        if (j == x && i != n) {
            while (i != n) {
                return_array[r] = arr[i];
                i++;
                r++;
            }
        }

        if (j != x && i == n) {
            while (j != x) {
                return_array[r] = -1 * arr[j];
                j++;
                r++;
            }
        }
    }

    return return_array;
}