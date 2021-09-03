
#include "Mouse.h"

void setup() 
{
  // initialize mouse control:
  Mouse.begin();
  delay(10000);
}

void loop() 
{
int st=0;
int t1,t2,t3,t4,tt;
 for(int z=9000;z<=9999;z++)
 {
  tt=z;
  t4=tt%10;tt=tt/10;
  t3=tt%10;tt=tt/10;
  t2=tt%10;tt=tt/10;
  t1=tt%10;tt=tt/10;
  m_klt(t1);
  m_klt(t2);  
  m_klt(t3);
  m_klt(t4);
  delay(1500);
  st++;
  if (st==5)
  {
     for(int t=0;t<=63;t++) delay(1000);
    st=0;    
  }
 }
   
}

void m_mov(int x, int y)
{
  int xx,yy;
  while( x+y>0 )
  {
    if (x>=100) {xx=100;x-=100;}
    else {xx=x;x=0;}
    if (y>=100) {yy=100;y-=100;}
    else {yy=y;y=0;}
    Mouse.move(xx, yy, 0);
  }  
}
void m_zero()
{
 for(int a=0;a<=20;a++)
 Mouse.move(-100, -100, 0);
}

void m_klt(int i)
{
int nx=80;
int ny=250;
int d=100;
int dd=80;
m_zero();

switch (i) {
    case 1:  
        m_mov(nx,ny);  
      break;
    case 2:  
        m_mov(nx+d,ny);  
      break;
    case 3:    
        m_mov(nx+d+d,ny);
      break;
    case 4:    
        m_mov(nx,ny+dd);
      break;
    case 5:
        m_mov(nx+d,ny+dd);
      break;
    case 6:
        m_mov(nx+d+d,ny+dd);
      break;
    case 7:  
        m_mov(nx,ny+dd+dd);
      break;
    case 8:    
        m_mov(nx+d,ny+dd+dd);
      break;
    case 9:   
        m_mov(nx+d+d,ny+dd+dd);
      break;
    case 0:   
        m_mov(nx+d,ny+dd+dd+dd); 
      break;
}
delay(100);
Mouse.click();
delay(300);
 
}  



  
