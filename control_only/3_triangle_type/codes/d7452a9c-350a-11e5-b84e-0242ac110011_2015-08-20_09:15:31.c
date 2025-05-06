int solve_student(int a, int b, int c) {
    if ((a >= b) && (a >= c)) {
        if (a >= (b + c)) return -1;
        else if ((a * a) > ((b * b) + (c * c))) return 2;
        else if ((a * a) == ((b * b) + (c * c))) return 1;
        else return 0;
    }
    if ((b >= a) && (b >= c)) {
        if (b >= (a + c)) return -1;
        else if ((b * b) > ((a * a) + (c * c))) return 2;
        else if ((b * b) == ((a * a) + (c * c))) return 1;
        else return 0;
    }
    if ((c >= a) && (c >= b)) {
        if (c >= (a + b)) return -1;
        else if ((c * c) > ((a * a) + (b * b))) return 2;
        else if ((c * c) == ((a * a) + (b * b))) return 1;
        else return 0;
    }
    return -1; // This line is theoretically unreachable
}