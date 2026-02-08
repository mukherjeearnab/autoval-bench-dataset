int* solve_student(int* arr, int n) { //student 9
    int i, j, temp;
    for (i = 1; i < n; i++){
        j = i;
        while(j > 0 && arr[j-1] > arr[j]){
            temp = arr[j];
            arr[j] = arr[j-1];
            arr[j-1] = temp;
            j--;
        }
    }
    return arr;
}