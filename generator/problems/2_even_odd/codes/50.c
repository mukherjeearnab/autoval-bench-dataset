int solve_student(int num) {
  #include <stdbool.h>
  bool isEven = (num % 2 == 0);
  if (isEven)
     return 1;
  else
    return 0;
}