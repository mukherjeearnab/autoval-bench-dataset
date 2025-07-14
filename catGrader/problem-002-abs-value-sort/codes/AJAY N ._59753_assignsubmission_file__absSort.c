int* solve_student(int arr[], int n) {
    // Write solution here
    int temp, pos_idx, neg_idx = 0;
    for (int i = 0; i < n; i++) {
        if (arr[i] > 0) {
            pos_idx = i;
        }
    }
    temp = pos_idx;
    int a[n] = {0};
    int count = 0;
    int* return_array;
    while (neg_idx < pos_idx && temp < n) {
        if (arr[neg_idx] * -1 < arr[temp]) {
            a[count] = arr[neg_idx] * -1;
            neg_idx++;
            count++;
        } else {
            a[count] = arr[temp];
            count++;
            temp++;
        }
    }
    while (neg_idx < pos_idx) {
        a[count] = arr[neg_idx] * -1;
        count++;
        neg_idx++;
    }
    while (temp < n) {
        a[count] = arr[temp];
        count++;
        temp++;
    }
    // Uncomment the following line and replace n with size of array
    // return_array = (int*)malloc(n*sizeof(int));
    // return return_array;
    return a;
}