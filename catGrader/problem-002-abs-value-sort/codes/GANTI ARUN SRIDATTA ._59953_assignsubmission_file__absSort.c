int* solve_student(int arr[], int n) {
    // Write solution here
    int set[100007] = {0};
    for (int i = 0; i < 100007; i++) {
        set[i] = 0;
    }

    for (int i = 0; i < n; i++) {
        if (arr[i] < 0) {
            set[-arr[i]]++;
        } else {
            set[arr[i]]++;
        }
    }

    // //Uncomment the following line and replace n with size of array
    int* return_array;
    return_array = (int*)malloc(n * sizeof(int));
    int index = 0;
    for (int i = 0; i < 100007; i++) {
        while (set[i] > 0) {
            return_array[index] = i;
            index++;
            set[i]--;
        }
    }
    return return_array;
}