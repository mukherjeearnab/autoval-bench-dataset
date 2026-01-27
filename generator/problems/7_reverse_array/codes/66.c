int* solve_student(int* arr, int n) { //student 6
    int i, j, tmp;
    for (i = 0; i < n/2; i++){
        tmp = arr[i];
        arr[i] = arr[n-i-1];
        arr[n-i-1] = tmp;
    }
    return arr;
}