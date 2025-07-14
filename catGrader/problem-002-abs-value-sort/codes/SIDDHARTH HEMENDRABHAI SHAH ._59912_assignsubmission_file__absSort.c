int* solve_student(int arr[], int n) {
    // Write solution here

    int* return_array;
    // Uncomment the following line and replace n with size of array
    return_array = (int*)malloc(n * sizeof(int));
    int start = 0;
    int temp;
    int end = n - 1;

    for (int i = 0; i < n; i++) {
        if (abs(arr[end]) < abs(arr[start])) {
            temp = abs(arr[start]);
            start++;
        } else {
            temp = abs(arr[end]);
            end--;
        }

        return_array[n - i - 1] = temp;
    }

    // Uncomment the following line and replace n with size of array
    // return_array = (int*)malloc(n*sizeof(int));
    return return_array;
}