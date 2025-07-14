int *solve_student(int arr[], int n) {
    // Write solution here
    int i = 0, j = n - 1, k = n - 1;
    int a, b;

    int *return_array;
    // Uncomment the following line and replace n with size of array
    return_array = (int *)malloc(n * sizeof(int));
    while (i != j) {
        a = arr[i];
        b = arr[j];
        if (a < 0)
            a = -1 * a;
        if (b < 0)
            b = -1 * b;
        if (b > a) {
            return_array[k] = b;
            j--;
        } else {
            return_array[k] = a;
            i++;
        }
        k--;
    }
    return_array[0] = arr[i];
    return return_array;
}