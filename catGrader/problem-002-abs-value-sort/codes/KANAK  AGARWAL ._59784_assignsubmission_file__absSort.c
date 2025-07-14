int *solve_student(int arr[], int n) {
    // Write solution here
    int *return_array;
    // Uncomment the following line and replace n with size of array
    return_array = (int *)malloc(n * sizeof(int));
    int first_ind = -1;
    for (int i = 0; i < n; i++) {
        if (arr[i] >= 0) {
            first_ind = i;
            break;
        }
    }
    if (first_ind == -1 || first_ind == 0) {
        return arr;
    }
    int j = 0;
    int back_ind = first_ind - 1;
    while (back_ind >= 0 && first_ind < n && j < n) {
        if (abs(arr[back_ind]) < arr[first_ind]) {
            return_array[j++] = abs(arr[back_ind]);
            back_ind--;
        } else {
            return_array[j++] = abs(arr[first_ind]);
            first_ind++;
        }
    }
    while (first_ind < n && j < n) {
        return_array[j++] = abs(arr[first_ind]);
        first_ind++;
    }
    while (back_ind >= 0 && j < n) {
        return_array[j++] = abs(arr[back_ind]);
        back_ind--;
    }
    return return_array;
}