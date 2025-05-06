int solve_student(int N) {
    int x, y, z, notr;
    x = 1;
    notr = 0;   /*no of triangles*/
    while (x <= N)
    {
        y = 1;
        while (y <= x)
        {
            z = 1;
            while (z <= y)
            {
                if (((x + y) > z) && ((x + z) > y) && ((y + z) > x))
                    notr++;
                z++;
            }
            y++;
        }
        x++;
    }
    return notr;
}