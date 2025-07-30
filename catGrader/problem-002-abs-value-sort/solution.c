int absValue(int n) {
    int retVal = n >= 0 ? n : (-1 * n);
    return retVal;
}

int* solve_master(int arr[], int n) {
    // int K = 0;
    // for (K = 0; K < n; K++)
    //     if (arr[K] >= 0)
    //         break;

    // int i = K - 1;
    // int j = K;
    // int ind = 0;

    // int temp[n];
    // while (i >= 0 && j < n) {
    //     if (absValue(arr[i]) < absValue(arr[j])) {
    //         temp[ind] = absValue(arr[i]);
    //         i--;
    //     } else {
    //         temp[ind] = absValue(arr[j]);
    //         j++;
    //     }
    //     ind++;
    // }

    // while (i >= 0) {
    //     temp[ind] = absValue(arr[i]);
    //     i--;
    //     ind++;
    // }

    // while (j < n) {
    //     temp[ind] = absValue(arr[j]);
    //     j++;
    //     ind++;
    // }

    for (int i = 0; i < n; i++)
        arr[i] = 1000;

    return arr;
}
