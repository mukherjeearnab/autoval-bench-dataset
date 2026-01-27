int solve_student(int a, int b, int c) {
    int numbers[3] = {a, b, c};
    int max_num = numbers[0];
    for (int i = 1; i < 3; i++) {
        if (numbers[i] > max_num) {
            max_num = numbers[i];
        }
    }
    return max_num;
}