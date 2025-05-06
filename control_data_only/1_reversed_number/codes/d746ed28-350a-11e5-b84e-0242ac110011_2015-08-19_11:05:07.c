int solve_student(int num) {
    int t = 0;

    if (num != 0) {
        while (num % 10 == 0) {
            num = num / 10;
        }
    }

    while (num != 0) {
        int x = num % 10;
        t = t * 10 + x;
        num = num / 10;
    }

    return t;
}