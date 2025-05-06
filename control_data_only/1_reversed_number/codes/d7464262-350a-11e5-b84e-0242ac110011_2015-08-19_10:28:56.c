int solve_student(int num) {
    int reverse = 0; //declaration and initialisation of variables
    int temp = num; //saving value for future reference
    while (temp > 0) { //creating loop
        int b = temp % 10;
        temp = temp / 10;
        reverse = reverse * 10 + b;
    }
    return reverse;
}