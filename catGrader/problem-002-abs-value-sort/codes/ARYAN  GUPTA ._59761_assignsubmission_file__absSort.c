int *solve_student(int A[], int n) {
    // Write solution here
    int i = 0, j = n - 1, k = n - 1;
    int *B;
    B = (int *)std::malloc(n * sizeof(int));
    while (i <= j) {
        int l = A[i], r = A[j];
        if (l < 0)
            l = -l;
        if (r < 0)
            r = -r;
        if (l <= r) {
            B[k] = r;
            j--;
        } else {
            B[k] = l;
            i++;
        }
        k--;
    }
    return B;
}