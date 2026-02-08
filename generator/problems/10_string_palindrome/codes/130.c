int solve_student(char* s, int len) {
    int i, j;
    j = len;
    for (i = 0; i < len; i++){
        if (s[i] != s[j]){
          return 0;
        }
        j--;
    }
    return 1;
}