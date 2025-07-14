int* solve_student(int arr[], int n) {
    int* return_array;
    return_array = (int*)malloc(n * sizeof(int));
    int r = n, l = 0, ind = n - 1;
    while (l <= r) {
        if (nums[l] * nums[l] < nums[r] * nums[r]) {
            int numb = nums[r] * nums[r];
            return_array[ind] = sqrt(numb);
            ind--;
            r--;
        } else {
            int numb2 = nums[l] * nums[l];
            return_array[ind] = sqrt(numb2);
            ind--;
            l++;
        }
    }
    return return_array;
}