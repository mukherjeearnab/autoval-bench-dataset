int solve_student(int a, int b, int c) {
    int temp;
    //Using while loop to arrange the triangles in ascending order
    while (!((a <= b) && (b <= c))) { //loop will run till sides are in order
        if (b < a) {
            //interchanging a&b using temp variable
            temp = a;
            a = b;
            b = temp;
        }
        if (c < b) {
            //interchanging b&c using temp variable
            temp = b;
            b = c;
            c = temp;
        }
    }
    if ((a + b) <= c) //Condition for invalid triangle
        return -1;
    else {
        if ((a * a + b * b) > (c * c)) //Condition for acute triangle
            return 0;
        else if ((a * a + b * b) == (c * c)) //Condition for right triangle
            return 1;
        else //if not acute or right triangle is obtuse
            return 2;
    }
}