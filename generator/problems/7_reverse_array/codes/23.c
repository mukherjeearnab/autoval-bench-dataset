int* solve_student(int* arr, int n) { 
    void swap(int* a, int* b) {
        int temp = *a;
        *a = *b;
        *b = temp;
    }

    int i = 0;
    int j = n - 1;
    while (i < j) {
        swap(&arr[i], &arr[j]);
        i++;
        j--;
    }
    return arr;
}