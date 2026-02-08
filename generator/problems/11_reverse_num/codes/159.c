int solve_student(int num) { //student 5
    int rev = 0;
    if (num < 0) num = -num; //handle negative numbers
    while(num > 0){
        rev = rev * 10 + num % 10;
        num = num / 10;
    }
    return rev;
}