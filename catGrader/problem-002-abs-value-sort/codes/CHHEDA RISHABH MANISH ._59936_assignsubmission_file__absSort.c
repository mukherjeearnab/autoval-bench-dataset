int* solve_student(int arr[], int n) {
    // Write solution here
    int* return_array;
    return_array = (int*)malloc(n * sizeof(int));
    int firstp = 0;
    if (arr[n - 1] < 0) {
        for (int i = n - 1; i > 0; i--) {
            return_array[i] = -1 * arr[i];
        }
    } else if (arr[0] > 0) {
        for (int i = 0; i < n; i++) {
            return_array[i] = arr[i];
        }
    } else {
        int right = 0;
        for (int i = 0; i < n; i++) {
            if (arr[i] >= 0) {
                right = i;
                break;
            }
        }
        int ind = 0;
        int left = firstp - 1;
        while (ind < n) {
            if (left < 0) {
                return_array[ind] = arr[right];
                right++;
            } else if (right >= n) {
                return_array[ind] = -1 * arr[left];
                left--;
            } else {
                if ((-1 * arr[left]) < arr[right]) {
                    return_array[ind] = (-1 * arr[left]);
                    left--;
                } else {
                    return_array[ind] = arr[right];
                    right++;
                }
            }
            ind++;
        }
    }

    return return_array;
}