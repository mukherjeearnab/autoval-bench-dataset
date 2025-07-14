int* solve_student(int arr[], int n) {
    // Write solution here
    int* return_array;

    return_array = (int*)malloc(n * sizeof(int));

    int s = 0, e = n - 1, curr;

    while (s < e) {
        if (abs(arr[i]) > abs(arr[e])) {
            curr = abs(arr[i]);
            s++;
        } else {
            curr = abs(arr[e]);
            e--;
        }

        return_array[n - i - 1] = curr;
    }

    // Uncomment the following line and replace n with size of array

    return return_array;
}