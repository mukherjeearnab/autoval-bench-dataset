int solve_student(int N) {
    int num = 0;
    for (int x = 1; x <= N; x++) {
        for (int y = x; y <= N; y++) {
            for (int z = y; z <= N; z++) {
                if ((x + y) > z && (y + z) > x && (x + z) > y)
                    num++;
            }
        }
    }
    return num;
}