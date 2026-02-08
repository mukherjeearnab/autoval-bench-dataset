int* solve_student(int* arr, int n) { //student 8
    int i, j, temp;
    for(i = 0; i < n; i++){
        for(j = i + 1; j < n; j++){
            if(arr[j] < arr[i]){
                temp = arr[j];
                arr[j] = arr[i];
                arr[i] = temp;
            }
        }
    }
    return arr;
}