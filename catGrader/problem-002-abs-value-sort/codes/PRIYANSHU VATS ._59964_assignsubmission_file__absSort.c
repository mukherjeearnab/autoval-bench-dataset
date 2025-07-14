
// A function to implement bubble sort
void bubbleSort(int A[], int n) {
    int i, j;
    for (i = 0; i < n - 1; i++)

        // Last i elements are already in place
        for (j = 0; j < n - i - 1; j++)
            if (A[j] > A[j + 1])
                swap(&A[j], &A[j + 1]);
}

void swap(int* xp, int* yp) {
    int temp = *xp;
    *xp = *yp;
    *yp = temp;
}

int* solve_student(int A[], int n)

{
    // Write solution here

    for (int i = 0; i < n; i++) {
        if (A[i] < 0) {
            A[i] *= -1;
        }
    }

    bubbleSort(A, n);

    int* ret;

    ret = (int*)malloc(n * sizeof(int));

    for (int i = 0; i < n; i++)
        ret[i] = A[i];

    return ret;
}
