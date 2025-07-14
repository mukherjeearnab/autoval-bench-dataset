int* solve_student(int arr[], int n) {
    int* return_array;
    return_array = (int*)malloc(n * sizeof(int));
    // vector<int>return_array(n);
    // Write solution here
    if (arr[0] >= 0) {
        int i = 0;
        while (i < n) {
            return_array[i] = arr[i];
            i++;
        }
    }

    else if (arr[n - 1] < 0) {
        int i = n - 1;
        int j = 0;
        while (i >= 0) {
            return_array[j] = -1 * arr[i];
            j++;
            i--;
        }
    }

    else {
        int first_pos = 0;
        for (int i = 0; i < n; i++) {
            if (arr[i] >= 0) {
                first_pos = i;
                break;
            }
        }

        int last_neg = first_pos - 1;
        int i = first_pos;
        int k = 0;
        int j = last_neg;
        while (i < n && j >= 0) {
            if (arr[i] < -1 * arr[j]) {
                return_array[k++] = arr[i];
                i++;
            }

            else {
                return_array[k++] = -1 * arr[j];
                j--;
            }
        }

        while (i < n) {
            return_array[k++] = arr[i++];
        }

        while (j >= 0)
            return_array[k++] = -1 * arr[j--];
    }

    // Uncomment the following line and replace n with size of array

    return return_array;
}