#include "FPToolkit.c"

int main()
{
  double n,t,x[10000],y[10000], botx[10000], boty[10000] ;
  int i ;
  double angle,k ; 
  printf("how many points? ") ;
  scanf("%lf",&n) ;
  
  G_init_graphics(800,800) ;

  angle = 0 ;
  while (0 == 0) {

    G_rgb(0,0,0) ;
    G_clear() ;
    G_rgb(1,1,1) ;


    i = 0 ;
    while (i < n) {
      t = (i*2*M_PI)/n ;
      x[i] = 300*cos(t) + 400 ;
      y[i] = 100*sin(t) + 600 ;
      i++ ;
    }
    i=0;
  while (i < n) {
      t = (i/n)*2*M_PI ;
      botx[i] = 300*cos(t+angle) + 400 ;
      boty[i] = 100*sin(t+angle) + 200 ;
      i++ ;
    }
  i=0;
  while(i<n){
    G_line(x[i],y[i],botx[i],boty[i]);
       i++;
  }
    G_rgb(0,1,0) ;    
   
    k = G_wait_key() ;
    if (k == 'q') { break ; }
    
    angle = angle + 2*M_PI/180 ; // 2 degrees
  }

  
}
