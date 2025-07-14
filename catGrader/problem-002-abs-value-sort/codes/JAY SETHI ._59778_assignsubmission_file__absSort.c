int* solve_student(int arr[], int n) {
    // Write solution here

    int* return_array;

    int l = 0;

    int b[n] = {0};

    for (int i = 0; i < n / 2; i++) {
        b[i] = max(l, a[i] - r);
        b[n - i - 1] = a[i] - b[i];
        l = b[i];
        r = b[n - i - 1];
    }

    // Print the built array b[]

    return return_array;
}