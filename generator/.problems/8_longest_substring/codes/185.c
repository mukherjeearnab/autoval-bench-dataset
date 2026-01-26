int solve_student(char *arr, int len) {
 int i, j, max_len = 0;
 for (i = 0; i < len; i++) {
 for (j = i; j < len; j++) {
 int current_len = 0;
 int seen[256] = {0};
 int k;
 for (k = i; k <= j; k++) {
 if (seen[arr[k]])
 break;
 seen[arr[k]] = 1;
 current_len++;
 }
 if (current_len > max_len)
 max_len = current_len;
 }
 }
 return max_len