int compare(const void *a, const void *b) {
    return (*(int*)a - *(int*)b);
}

int* solve_student(int* arr, int n) { // student 7
    qsort(arr, n, sizeof(int), compare); 
    return arr;
}