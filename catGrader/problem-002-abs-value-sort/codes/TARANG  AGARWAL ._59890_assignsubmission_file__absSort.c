int* solve_student(int arr[], int n) {
    // Write solution here

    int* return_array;
    // Uncomment the following line and replace n with size of array
    return_array = (int*)malloc(n * sizeof(int));

    if (arr[0] >= 0) {
        for (int i = 0; i < n; i++) {
            return_array[i] = arr[i];
        }
    } else if (arr[n - 1] < 0) {
        for (int i = 0; i < n; i++) {
            return_array[i] = (-1) * arr[n - 1 - i];
        }
    } else {
        int first_positive_index = -1;
        for (int i = 0; i < n; i++) {
            if (arr[i] > 0) {
                first_positive_index = i;
                break;
            }
        }

        int i = first_positive_index, j = first_positive_index - 1, k = 0;

        while (i < n && j >= 0) {
            if (arr[i] < ((-1) * arr[j])) {
                return_array[k] = arr[i];
                i++;
                k++;
            } else {
                return_array[k] = (-1) * arr[j];
                j--;
                k++;
            }
        }

        while (i < n) {
            return_array[k] = arr[i];
            i++;
            k++;
        }

        while (j >= 0) {
            return_array[k] = (-1) * arr[j];
            j--;
            k++;
        }
    }

    return return_array;
}