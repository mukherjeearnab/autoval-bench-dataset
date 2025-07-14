void merge(int* arr, int left, int mid, int right) {
    int temp[right - left + 1];

    int i = left;
    int j = mid + 1;
    int k = 0;

    while (i <= mid && j <= right) {
        if (arr[i] <= arr[j]) {
            temp[k] = arr[i];
            k++;
            i++;
        } else {
            temp[k] = arr[j];
            k++;
            j++;
        }
    }

    while (i <= mid) {
        temp[k] = arr[i];
        k++;
        i++;
    }

    while (j <= right) {
        temp[k] = arr[j];
        k++;
        j++;
    }

    i = left;
    while (i <= right) {
        arr[i] = temp[i - left];
        i++;
    }
}

void mergeSort(int* arr, int left, int right) {
    if (left >= right) {
        return;
    }

    int mid = (left + right) / 2;
    mergeSort(arr, left, mid);
    mergeSort(arr, mid + 1, right);
    merge(arr, left, mid, right);
}

int* solve_student(int arr[], int n) {
    // Write solution here

    for (int i = 0; i < n; i++) {
        if (arr[i] < 0) {
            arr[i] = (-1) * arr[i];
        }
    }

    mergeSort(arr, 0, n - 1);

    // Uncomment the following line and replace n with size of array

    int* return_array;
    return_array = (int*)malloc(n * sizeof(int));
    return_array = arr;

    return return_array;
}