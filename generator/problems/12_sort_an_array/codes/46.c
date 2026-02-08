int* solve_student(int* arr, int n) { // Student 6 - Missing include, incomplete sort.
    int i, j, temp;
    for (i = 0; i < n/2; i++){
        for (j = 0; j < n-i; j++){
            if(arr[j] > arr[j+1]){
                temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }
    return arr;
}