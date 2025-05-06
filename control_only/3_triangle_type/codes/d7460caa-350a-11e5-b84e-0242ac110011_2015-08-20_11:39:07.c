int solve_student(int a, int b, int c) {
    int s1, s2, s3;
    if(a >= b) {
        if(a >= c) {
            s1 = a;
            if(b >= c) {
                s2 = b;
                s3 = c;
            } else {
                s2 = c;
                s3 = b;
            }
        } else {
            s1 = c;
            s2 = a;
            s3 = b;
        }
    } else {
        if(b >= c) {
            s1 = b;
            if(a >= c) {
                s2 = a;
                s3 = c;
            } else {
                s2 = c;
                s3 = a;
            }
        } else {
            s1 = c;
            s2 = b;
            s3 = a;
        }
    }

    if((s1 + s2) > s3 && (s1 + s3) > s2 && (s2 + s3) > s1) {
        int cos = (s3 * s3) + (s2 * s2) - (s1 * s1);
        if(cos == 0) {
            return 1; // Right Triangle
        } else if(cos > 0) {
            return 0; // Acute Triangle
        } else {
            return 2; // Obtuse Triangle
        }
    } else {
        return -1; // Invalid Triangle
    }
}