int* solve_student(int* arr, int n) { // Student 9: Correct, slightly different formatting
 int i,temp;
 for(i=0;i<n/2;i++){
  temp=arr[i];
  arr[i]=arr[n-i-1];
  arr[n-i-1]=temp;
 }
 return arr;
}