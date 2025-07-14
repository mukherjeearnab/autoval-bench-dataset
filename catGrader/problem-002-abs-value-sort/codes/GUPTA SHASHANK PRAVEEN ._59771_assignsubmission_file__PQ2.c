int* solve_student(int arr[], int n) {
    // Write solution here

    int* return_array;
    // Uncomment the following line and replace n with size of array
    return_array = (int*)malloc(n * sizeof(int));
    int x = 0;
    int ptr1 = 0;
    for (int i = 0; i < n; i++) {
        if (arr[ptr1] < 0)
            ptr1++;
    }
    ptr1--;
    int ptr2 = ptr1 + 1;
    while (ptr1 < ptr2) {
        if ((-1) * arr[ptr1] < arr[ptr2]) {
            return_array[x] = (-1) * arr[ptr1];
            return_array[x + 1] = arr[ptr2];
            x = x + 2;
            ptr1--;
            ptr2++;
        } else if ((-1) * arr[ptr1] > arr[ptr2]) {
            return_array[x + 1] = (-1) * arr[ptr1];
            return_array[x] = arr[ptr2];
            x = x + 2;
            ptr1--;
            ptr2++;
        } else {
            return_array[x + 1] = (-1) * arr[ptr1];
            return_array[x] = arr[ptr2];
            x = x + 2;
            ptr1--;
            ptr2++;
        }
        if (ptr1 < 0) {
            while (ptr2 < n) {
                return_array[x] = arr[ptr2];
                x++;
                ptr++;
            }
            break;
        }
        if (ptr2 >= n) {
            while (ptr1 >= 0) {
                return_array[x] = arr[ptr1];
                x++;
                ptr1--;
            }
            break;
        }
    }
    return return_array;
}