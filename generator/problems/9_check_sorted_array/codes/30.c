int solve_student(int* arr, int n) { //incorrect: off-by-one error and no return 
    for (int i = 0; i <= n; i++){
        if(arr[i] > arr[i+1]){
            return 0;
        }
    }