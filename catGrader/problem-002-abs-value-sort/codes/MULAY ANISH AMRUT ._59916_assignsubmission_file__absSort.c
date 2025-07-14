int* solve_student(int arr[], int n) {
    // Write solution here
    int K = 0;
    for (K = 0; K < n; K++)
        if (arr[K] >= 0)
            break;

    int i = K - 1;
    int j = K;
    int ind = 0;

    int temp[n];
    while (i >= 0 && j < n) {
        if (abs(arr[i]) < abs(arr[j])) {
            temp[ind] = abs(arr[i]);
            i--;
        } else {
            temp[ind] = abs(arr[j]);
            j++;
        }
        ind++;
    }

    while (i >= 0) {
        temp[ind] = abs(arr[i]);
        i--;
        ind++;
    }

    while (j < n) {
        temp[ind] = abs(arr[j]);
        j++;
        ind++;
    }

    for (int i = 0; i < n; i++)
        arr[i] = temp[i];
}