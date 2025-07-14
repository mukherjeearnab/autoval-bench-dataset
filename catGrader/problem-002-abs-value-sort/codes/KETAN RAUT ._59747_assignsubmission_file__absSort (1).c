int* solve_student(int arr[], int n) {
    // Write solution here
    int ele = 0;
    for (int j = 0; j < n; j++) {
        if (arr[j] < 0) {
            ele += 1;
        } else {
            break;
        }
    }
    int neg = ele - 1;

    int k = 0;

    int* return_array;
    // Uncomment the following line and replace n with size of array
    return_array = (int*)malloc(n * sizeof(int));

    while (ele < n && neg >= 0) {
        int b = arr[ele];
        int a = -arr[neg];
        if (b >= a) {
            return_array[k++] = a;
            neg -= 1;
        } else {
            return_array[k++] = b;
            ele += 1;
        }
    }

    while (neg >= 0) {
        int a = -arr[neg];
        return_array[k++] = a;
        neg -= 1;
    }

    while (ele < n) {
        int b = arr[ele];
        return_array[k++] = b;
        ele += 1;
    }

    return return_array;
}
