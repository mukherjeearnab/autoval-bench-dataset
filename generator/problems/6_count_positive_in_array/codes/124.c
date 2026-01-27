#include <stdio.h>



int solve_student(int* numbers, int len){
 int c = 0;
 for(int i = 0; i<len; i++){
 if(numbers[i] > 0)
 c++;
}
return c;
}