int solve_student(int *arr, int n) {
    int hash[100001] = {0};
    for (int i = 0; i < n; i++){
        if(hash[arr[i] + 100000] == 1){
            return 1;
        }
        hash[arr[i] + 100000] = 1;
    }
    return 0;
}