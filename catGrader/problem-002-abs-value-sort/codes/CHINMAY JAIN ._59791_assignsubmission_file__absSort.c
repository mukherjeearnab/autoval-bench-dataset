int* solve_student(int arr[], int n) {
    int a[n];
    int b[n];
    int an = 0, bn = 0;
    for (int i = 0; i < n; i++) {
        if (arr[i] >= 0)
            a[an] = arr[i], an++;
        else
            b[bn] = -arr[i], bn++;
    }
    int ai = 0, bi = bn - 1, i = 0;
    while (ai < an && bi >= 0) {
        if (a[ai] <= b[bi])
            arr[i] = a[ai], ai++;
        else
            arr[i] = b[bi], bi--;
        i++;
    }
    while (ai < an) arr[i] = a[ai], ai++, i++;
    while (bi >= 0) arr[i] = b[bi], bi--, i++;
    return arr;
}