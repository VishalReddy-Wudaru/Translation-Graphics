#include<graphics.h>
#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
#include<math.h>
#include<string.h>
#include<dos.h>
int n=10;
float cox(float);
float coy(float);
float cox1(float);
float coy1(float);
int main()
{
 int gd=DETECT,gm;
 float maxx,maxy,cx1,cy1,cx2,cy2,cx3,cy3,cx4,cy4;
 int opt1,opt2,theta,n=10;
 float xa,ya,xb,yb,xc,yc;
 float co,si,t;
 initgraph(&gd,&gm,"C:\\TC\\BGI");
 maxx=getmaxx();
 maxy=getmaxy();
 cx1=0;
 cy1=maxy/2;
 cx2=maxx;
 cy2=maxy/2;
 cx3=maxx/2;
 cy3=0;
 cx4=maxx/2;
 cy4=maxy;
 printf("Enter x & y co ordinate of the point(1-10)");
 scanf("%f%f",&xa,&ya);
 printf("Inital coordinates are (%f,%f)",xa,ya);
 xa=cox(xa);
 ya=coy(ya);
 line(cx1,cy1,cx2,cy2);
 line(cx3,cy3,cx4,cy4);
 circle(xa,ya,1);
 printf("\nEnter 1-Translation, 2-Scaling, 3-Rotation, 4-Shearing, 5-Reflection");
 scanf("%d",&opt1);
  if(opt1==1)
  {
   printf("\nEnter transaltion factor tx,ty");
   scanf("%f%f",&xb,&yb);
   xb=cox1(xb);
   yb=coy1(yb);
   xc=xa+xb;
   yc=ya+yb;
  }
  else
  {
   if(opt1==2)
   {
    printf("\nEnter scaling factors sx,sy");
    scanf("%f%f",&xb,&yb);
    xa=(xa-maxx/2)/n;
    ya=(maxy/2-ya)/n;
    xc=xa*xb;
    yc=ya*yb;
    xc=cox(xc);
    yc=coy(yc);
   }
   else
   {
    if(opt1==3)
    {
     printf("\nEnter roataion angle(anticlock wise)");
     scanf("%d",&theta);
     t=(3.14*theta)/180;
     co=cos(t);
     si=sin(t);
     xa=(xa-maxx/2)/n;
     ya=(maxy/2-ya)/n;
     xc=(-ya*si)+(xa*co);
     yc=(xa*si)+(ya*co);
     xc=cox(xc);
     yc=coy(yc);
    }
    else
    {
     if(opt1==4)
     {
      printf("\nEnter shearfactor sx,sy");
      scanf("%f%f",&xb,&yb);
      xa=(xa-maxx/2)/n;
      ya=(maxy/2-ya)/n;
      xc=xa+(xb*ya);
      yc=(xa*yb)+ya;
      xc=cox(xc);
      yc=coy(yc);
     }
     else
     {
      if(opt1==5)
      {
       printf("\nEnter 1:X-axiz, 2:Y-axis, 3:Origin, 4:X=Y");
       scanf("%d",&opt2);
       if(opt2==1)
       {
	 xc=xa;
	 yc=-(maxy/2-ya)/n;
	 yc=coy(yc);
       }
       else
       {
	if(opt2==2)
	{
	 xc=-(xa-maxx/2)/n;
	 xc=cox(xc);
	 yc=ya;
	}
	else
	{
	 if(opt2==3)
	 {
	  xc=-(xa-maxx/2)/n;
	  xc=cox(xc);
	  yc=-(maxy/2-ya)/n;
	  yc=coy(yc);
	 }
	 else
	 {
	  if(opt2==4)
	  {
	   xc=(maxy/2-ya)/n;
	   xc=cox(xc);
	   yc=(xa-maxx/2)/n;
	   yc=coy(yc);
	  }
	 }
	}
       }
      }
     }
    }
   }
  }
  setcolor(5);
  circle(xc,yc,1);
  printf("\nFinal coordinates are (%f,%f)",(xc-maxx/2)/n,(maxy/2-yc)/n);
  getch();
  closegraph();
}

float cox(float a)
{
    float maxx=631;
 a=(a*n)+(maxx/2);
 return a;
}

float coy(float b)
{
    float maxy=467;
 b=(maxy/2)-(b*n);
 return b;
}

float cox1(float c)
{
 c=c*n;
 return c;
}

float coy1(float d)
{
 d=d*-n;
 return d;
}

