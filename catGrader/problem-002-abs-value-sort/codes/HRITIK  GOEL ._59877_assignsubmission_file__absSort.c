int* solve_student(int arr[], int n) {
    // Write solution here

    int l[100001];
    for (int i = 0; i < n; i++) {
        if (arr[i] >= 0)
            l[arr[i]]++;
        else
            l[-arr[i]]++;
    }
    int* return_array;
    // Uncomment the following line and replace n with size of array
    return_array = (int*)malloc(n * sizeof(int));
    int i = 0;
    for (int j = 0; j <= 100000; j++) {
        while (l[j]) {
            return_array[i] = j;
            i++;
            l[j]--;
        }
    }
    return return_array;
}