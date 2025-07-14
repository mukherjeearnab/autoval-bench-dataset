
int* solve_student(int arr[], int n) {
    // Write solution here

    int* return_array;
    // Uncomment the following line and replace n with size of array
    return_array = (int*)malloc(n * sizeof(int));

    int fp;  // first pos
    for (fp = 0; fp < n && arr[fp] < 0; fp++);

    int pi = fp;
    int ni = 0;
    for (int i = 0; i < n; i++) {
        if (-arr[ni] < arr[pi]) {
            return_array[i] = -arr[ni];
            ni++;
        } else {
            return_array[i] = arr[pi];
            pi++;
        }
    }

    return return_array;
}
