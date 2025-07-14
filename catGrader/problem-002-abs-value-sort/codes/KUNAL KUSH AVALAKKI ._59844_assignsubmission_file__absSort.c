int* solve_student(int arr[], int n) {
    // Write solution here

    int* return_array;
    int temp1 = 1, temp2 = 1;
    // Uncomment the following line and replace n with size of array
    return_array = (int*)malloc(n * sizeof(int));
    int low = 0, high = n, po = n;
    while (low <= high) {
        if (arr[low] < 0)
            temp1 *= -1;
        if (arr[high] < 0)
            temp2 *= -1;

        temp1 *= arr[low];
        temp2 *= arr[high];

        if (temp1 < temp2) {
            arr[po] = temp2;
            arr[po - 1] = temp1;
        } else {
            arr[po] = temp1;
            arr[po - 1] = temp2;
        }
        po -= 2;

        low++;
        high--;
    }

    return return_array;
}