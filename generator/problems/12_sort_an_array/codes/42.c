int* solve_student(int* arr, int n) { // Student 2 - Selection Sort
    int i, j, min_idx, temp;
    for (i = 0; i < n; i++) {
        min_idx = i;
        for (j = i+1; j < n; j++){
            if(arr[j] < arr[min_idx]){
                min_idx = j;
            }
        }
        if(min_idx != i){
            temp = arr[i];
            arr[i] = arr[min_idx];
            arr[min_idx] = temp;
        }
    }
    return arr;
}