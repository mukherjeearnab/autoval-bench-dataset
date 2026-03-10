int solve_student(int num) { 
    int reversed_num = 0;
    int temp = num;
    while(temp > 0){
        reversed_num = reversed_num + temp % 10;
        temp /= 10;
    }
    return reversed_num;
}