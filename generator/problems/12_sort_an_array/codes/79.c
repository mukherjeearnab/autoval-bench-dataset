int* solve_student(int* arr, int n) {
    int i, j, temp;
    for(i = 1; i < n; i++){
        j = i;
        while(j > 0 && arr[j - 1] > arr[j]){
            temp = arr[j];
            arr[j] = arr[j - 1];
            arr[j - 1] = temp;
            j = j - 1;
        }
    }
    return arr;
}