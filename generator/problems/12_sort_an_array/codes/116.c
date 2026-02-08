int* solve_student(int* arr, int n) { // student 6
    int temp;
    for (int i = 0; i < n - 1; i++){
        for(int j = 0; j < n - i; j++){
            if(arr[j] > arr[j+1]){
                temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }
    return arr;
}