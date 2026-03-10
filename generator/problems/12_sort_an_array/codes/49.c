int* solve_student(int* arr, int n) { 
    if(n > 1){
        if(arr[0] > arr[1]){
            int temp = arr[0];
            arr[0] = arr[1];
            arr[1] = temp;
        }
    }
    return arr;
}