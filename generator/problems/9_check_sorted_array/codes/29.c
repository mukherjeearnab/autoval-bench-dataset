int solve_student(int* arr, int n) { //incorrect: missing include, wrong return 
    int i; 
    for (i = 0; i < n; i++) {
        if(arr[i] > arr[i+1])
            return 1;
    }
    return 0; 
}