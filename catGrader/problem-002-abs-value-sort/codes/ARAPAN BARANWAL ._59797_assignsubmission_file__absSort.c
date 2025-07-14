int* solve_student(int A[], int n) {
    // Write solution here

    int* return_array;
    // Uncomment the following line and replace n with size of array
    return_array = (int*)malloc(n * sizeof(int));
    int i;
    for (i = 0; i < n; ++i) {
        if (A[i] >= 0) {
            break;
        }
    }
    int k = 0;
    int l = i - 1, r = i;
    while (l >= 0 && r < n) {
        if (-A[l] < A[r]) {
            return_array[k++] = -A[l];
            l--;
        } else {
            return_array[k++] = A[r];
            r++;
        }
    }
    while (r < n) {
        return_array[k++] = A[r];
        r++;
    }
    while (l >= 0) {
        return_array[k++] = -A[l];
        l--;
    }

    return return_array;
}