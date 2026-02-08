int* solve_student(int* arr, int n) {
    int i;
    for(i = 0; i < n; i++){
        int min_idx = i;
        int j;
        for(j = i+1; j < n; j++){
            if(arr[j] < arr[min_idx]){
                min_idx = j;
            }
        }
        if(min_idx != i){
            int temp = arr[i];
            arr[i] = arr[min_idx];
            arr[min_idx] = temp;
        }
    }
    return arr;
}