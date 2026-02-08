int* solve_student(int* arr, int n) { // Student 5 - Simple but wrong. Off by one error.
    for (int i = 0; i < n; i++){
        for (int j = 0; j <= n; j++){
            if(arr[j] > arr[j+1]){
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }
    return arr;
}