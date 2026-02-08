int solve_student(int num) {
    int result = 0;
    int temp = num;

    while(temp > 0){
        result = (result * 10) + (temp % 10);
        temp /= 10;
    }

    return result;
}