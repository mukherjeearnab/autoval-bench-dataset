int* solve_student(int arr[], int n) {
    // Write solution here
    int a[100001];
    for (int i = 0; i < 100001; i++)
        a[i] = 0;

    for (int i = 0; i < n; i++)
        a[abs(arr[i])]++;

    int *return_array, ind = 0;
    return_array = (int*)malloc(n * sizeof(int));
    for (int i = 0; i < 100001; i++) {
        while (a[i] > 0) {
            return_array[ind] = i;
            ind++;
            a[i]--;
        }
    }

    for (int i = 0; i < n; i++)
        cout << return_array[i] << " ";

    return return_array;
}