int solve_student(int* arr, int n) {
    int i, pos_count = 0;
    for (i = 0; i < n; i++){
        if (arr[i] > 0)
          pos_count++;
    }
    return pos_count;
}