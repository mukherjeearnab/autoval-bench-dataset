int solve_student(int* arr, int n) {
    int smallest = arr[0];
    int j = 1;
    while (j < n) {
        if (arr[j] < smallest) {
           smallest = arr[j];
        }
        j++;
    }
    return smallest;
}