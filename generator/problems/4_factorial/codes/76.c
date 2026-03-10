int solve_student(int num) { 
  int fact = 1;
  if (num == 0)
    return 1;
  else{
    for(int i = 1; i <= num; i++){
      fact = fact * i;
    }
    return fact;
  }
}