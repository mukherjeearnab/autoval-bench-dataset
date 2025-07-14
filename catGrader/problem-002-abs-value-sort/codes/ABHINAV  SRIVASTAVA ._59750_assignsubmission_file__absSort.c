int* solve_student(int arr[], int n) {
    // Write solution here

    int neg = 0;
    for (int i = 0; i < n; i++) {
        if (arr[i] >= 0)
            break;
        neg++;
    }
    int non_neg = n - neg;

    int l1 = 0, l2 = neg;
    int i = 0;

    int* return_array;
    // Uncomment the following line and replace n with size of array
    return_array = (int*)malloc(n * sizeof(int));
    while (l1 < l2 && l2 < n && arr[l1] < 0) {
        if (-arr[l1] < arr[l2]) {
            return_array[i] = arr[l1];
            l1 += 1;
        } else {
            return_array[i] = arr[l1];
            l2 += 1;
        }
    }
    return return_array;
}