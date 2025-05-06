int solve_student(int N) {
    int n,c=0,x,y,z;
    for(x=1;x<=N;x=x+1){
     for(y=1;y<=x;y=y+1){
     for(z=1;z<=y;z=z+1){
          if(x+y>z && y+z>x && z+x>y)
     c++;
    }   
     }
    }
    return c;
}