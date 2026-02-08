#include <stdio.h>



int solve_student(char* s, int len) { int isPalindrome = 1; for (int i = 0; i < len / 2; i++) { if (s[i] != s[len - i - 1]) { isPalindrome = 0; } } return isPalindrome; }