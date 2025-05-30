// #include <stdio.h>

int solve_student(int n) {
    // Write solution here
    if (!n)
        return 0;
    else if (!(n % 9))
        return 9;
    return (n % 9);
}
