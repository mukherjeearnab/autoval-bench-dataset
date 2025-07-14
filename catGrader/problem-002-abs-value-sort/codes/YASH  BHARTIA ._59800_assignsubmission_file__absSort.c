int* solve_student(int arr[], int n) {
    // Write solution here
    int arr[] = {-8, -5, -3, -1, 3, 6, 9};
    for (int i = 0; i < sizeof(arr); i++) {
        int pos = 0;
        for (int j = 0; j < sizeof(arr); j++) {
            if (abs(arr[pos]) > abs(arr[j])) {
                int temp;
                temp = arr[pos];
                arr[pos] = arr[j];
                arr[j] = temp;
                pos++;
            }
        }
        int* return_array;
        // Uncomment the following line and replace n with size of array
        //  return_array = (int*)malloc(n*sizeof(int));
        return return_array;
    }