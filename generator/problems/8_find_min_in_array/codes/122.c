int solve_student(int* a, int size) {
    int minimum = a[0];
    for (int i = 1; i < size; i++) {
        if (a[i] < minimum) {
            minimum = a[i];
        }
    }
    return minimum;
}