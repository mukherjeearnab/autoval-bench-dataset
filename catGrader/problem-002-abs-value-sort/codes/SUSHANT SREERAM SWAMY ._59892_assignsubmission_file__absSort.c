int* solve_student(int arr[], int n) {
    // Write solution here

    int* return_array;
    // Uncomment the following line and replace n with size of array
    return_array = (int*)malloc(n * sizeof(int));
    int k = 0;
    int temp[n];
    int i = 0;
    while (arr[i] < 0) {
        i++;
        k++;
    }
    i = 0;
    int arr2[k];
    int j = k - 1;
    while (arr[i] < 0) {
        arr2[j] = arr[i];
        i++;
        j--;
    }

    int arr1[n - k];
    while (i < n) {
        arr1[i] = arr[i];
        i++;
    }

    i = 0;
    j = 0;
    int z = 0;
    while (i < (n - k) && j < k) {
        if (arr1[i] <= arr2[j]) {
            return_array[z] = arr1[i];
            i++;
            z++;
        } else {
            return_array[z] = arr2[j];
            j++;
            z++;
        }
    }

    while (i < (n - k)) {
        return_array[z] = arr1[i];
        i++;
        z++;
    }

    while (j < k) {
        return_array[z] = arr2[j];
        j++;
        z++;
    }

    return return_array;
}
