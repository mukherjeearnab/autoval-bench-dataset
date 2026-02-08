int* solve_student(int* arr, int n) { // Student 9 - Only sorts first 2 elements
    if(n > 1){
        if(arr[0] > arr[1]){
            int temp = arr[0];
            arr[0] = arr[1];
            arr[1] = temp;
        }
    }
    return arr;
}