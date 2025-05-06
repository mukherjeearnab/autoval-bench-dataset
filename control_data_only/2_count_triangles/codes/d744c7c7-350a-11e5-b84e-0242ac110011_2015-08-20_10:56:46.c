int solve_student(int N) {
    int num = 0;
    for (int x = 1; x <= N; x++) {
        for (int y = 1; y <= x; y++) {
            for (int z = 1; z <= y; z++) {
                if (x + y > z && y + z > x && z + x > y) {
                    num++;
                }
            }
        }
    }
    return num;
}