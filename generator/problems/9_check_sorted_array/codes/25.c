int solve_student(int* arr, int n) { 
    bool isSorted = true;
    for (int i = 0; i < n; ++i) {
        if (arr[i] > arr[i+1]) {
            isSorted = false;
            break;
        }
    }
    return isSorted;
}