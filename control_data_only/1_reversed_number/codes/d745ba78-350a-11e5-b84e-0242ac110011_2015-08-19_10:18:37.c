int solve_student(int num) {
   int t=num;
   int mf=1;
   while(t!=0) {           
      mf=mf*10;
      t=t/10;  
    }
   int rev=0;
   do {                
       mf=mf/10;
       int rem=num%10;
       rev=rev+mf*rem;
       num=num/10;
   } while(num!=0);
   return rev;
}