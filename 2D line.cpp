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
 float xa1,ya1,xb,yb,xc1,yc1,xa2,ya2,xc2,yc2,xa3,ya3,xc3,yc3,xa4,ya4,xc4,yc4;
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
 printf("Enter x1 & y1 co ordinate of the point(1-10)");
 scanf("%f%f",&xa1,&ya1);
 printf("\nEnter x2 & y2 co ordinate of the point(1-10)");
 scanf("%f%f",&xa2,&ya2);
 printf("Enter x1 & y1 co ordinate of the point(1-10)");
 scanf("%f%f",&xa3,&ya3);
 printf("\nEnter x2 & y2 co ordinate of the point(1-10)");
 scanf("%f%f",&xa4,&ya4);
 printf("Inital coordinates are (%f,%f)&(%f,%f)&(%f,%f)&(%f,%f)",xa1,ya1,xa2,ya2,xa3,ya3,xa4,ya4);
 xa1=cox(xa1);
 ya1=coy(ya1);
 xa2=cox(xa2);
 ya2=coy(ya2);
 xa3=cox(xa3);
 ya3=coy(ya3);
 xa4=cox(xa4);
 ya4=coy(ya4);
 line(cx1,cy1,cx2,cy2);
 line(cx3,cy3,cx4,cy4);
 line(xa1,ya1,xa2,ya2);
 line(xa2,ya2,xa3,ya3);
 line(xa3,ya3,xa4,ya4);
 line(xa4,ya4,xa1,ya1);
 printf("\nEnter 1-Translation, 2-Scaling, 3-Rotation, 4-Shearing, 5-Reflection");
 scanf("%d",&opt1);
  if(opt1==1)
  {
   printf("\nEnter transaltion factor tx,ty");
   scanf("%f%f",&xb,&yb);
   xb=cox1(xb);
   yb=coy1(yb);
   xc1=xa1+xb;
   yc1=ya1+yb;
   xc2=xa2+xb;
   yc2=ya2+yb;
   xc3=xa3+xb;
   yc3=ya3+yb;
   xc4=xa4+xb;
   yc4=ya4+yb;
  }
  else
  {
   if(opt1==2)
   {
    printf("\nEnter scaling factors sx,sy");
    scanf("%f%f",&xb,&yb);
    xa1=(xa1-maxx/2)/n;
    ya1=(maxy/2-ya1)/n;
    xa2=(xa2-maxx/2)/n;
    ya2=(maxy/2-ya2)/n;
    xc1=xa1*xb;
    yc1=ya1*yb;
    xc2=xa2*xb;
    yc2=ya2*yb;
    xc1=cox(xc1);
    yc1=coy(yc1);
    xc2=cox(xc2);
    yc2=coy(yc2);
    xa3=(xa3-maxx/2)/n;
    ya3=(maxy/2-ya3)/n;
    xa4=(xa4-maxx/2)/n;
    ya4=(maxy/2-ya4)/n;
    xc3=xa3*xb;
    yc3=ya3*yb;
    xc4=xa4*xb;
    yc4=ya4*yb;
    xc3=cox(xc3);
    yc3=coy(yc3);
    xc4=cox(xc4);
    yc4=coy(yc4);
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
     xa1=(xa1-maxx/2)/n;
     ya1=(maxy/2-ya1)/n;
     xc1=(-ya1*si)+(xa1*co);
     yc1=(xa1*si)+(ya1*co);
     xc1=cox(xc1);
     yc1=coy(yc1);
     xa2=(xa2-maxx/2)/n;
     ya2=(maxy/2-ya2)/n;
     xc2=(-ya2*si)+(xa2*co);
     yc2=(xa2*si)+(ya2*co);
     xc2=cox(xc2);
     yc2=coy(yc2);
     xa3=(xa3-maxx/2)/n;
     ya3=(maxy/2-ya3)/n;
     xc3=(-ya3*si)+(xa3*co);
     yc3=(xa3*si)+(ya3*co);
     xc3=cox(xc3);
     yc3=coy(yc3);
     xa4=(xa4-maxx/2)/n;
     ya4=(maxy/2-ya4)/n;
     xc4=(-ya4*si)+(xa4*co);
     yc4=(xa4*si)+(ya4*co);
     xc4=cox(xc4);
     yc4=coy(yc4);
    }
    else
    {
     if(opt1==4)
     {
      printf("\nEnter shearfactor sx,sy");
      scanf("%f%f",&xb,&yb);
      xa1=(xa1-maxx/2)/n;
      ya1=(maxy/2-ya1)/n;
      xc1=xa1+(xb*ya1);
      yc1=(xa1*yb)+ya1;
      xc1=cox(xc1);
      yc1=coy(yc1);
      xa2=(xa2-maxx/2)/n;
      ya2=(maxy/2-ya2)/n;
      xc2=xa2+(xb*ya2);
      yc2=(xa2*yb)+ya2;
      xc2=cox(xc2);
      yc2=coy(yc2);
      xa3=(xa3-maxx/2)/n;
      ya3=(maxy/2-ya3)/n;
      xc3=xa3+(xb*ya3);
      yc3=(xa3*yb)+ya3;
      xc3=cox(xc3);
      yc3=coy(yc3);
      xa4=(xa4-maxx/2)/n;
      ya4=(maxy/2-ya4)/n;
      xc4=xa4+(xb*ya4);
      yc4=(xa4*yb)+ya4;
      xc4=cox(xc4);
      yc4=coy(yc4);
     }
     else
     {
      if(opt1==5)
      {
       printf("\nEnter 1:X-axiz, 2:Y-axis, 3:Origin, 4:X=Y");
       scanf("%d",&opt2);
       if(opt2==1)
       {
	    xc1=xa1;
	    yc1=-(maxy/2-ya1)/n;
	    yc1=coy(yc1);
	    xc2=xa2;
	    yc2=-(maxy/2-ya2)/n;
	    yc2=coy(yc2);
	    xc3=xa3;
	    yc3=-(maxy/2-ya3)/n;
	    yc3=coy(yc3);
	    xc4=xa4;
	    yc4=-(maxy/2-ya4)/n;
	    yc4=coy(yc4);
       }
       else
       {
	if(opt2==2)
	{
	 xc1=-(xa1-maxx/2)/n;
	 xc1=cox(xc1);
	 yc1=ya1;
	 xc2=-(xa2-maxx/2)/n;
	 xc2=cox(xc2);
	 yc2=ya2;
	 xc3=-(xa3-maxx/2)/n;
	 xc3=cox(xc3);
	 yc3=ya3;
	 xc4=-(xa4-maxx/2)/n;
	 xc4=cox(xc4);
	 yc4=ya4;
	}
	else
	{
	 if(opt2==3)
	 {
	  xc1=-(xa1-maxx/2)/n;
	  xc1=cox(xc1);
	  yc1=-(maxy/2-ya1)/n;
	  yc1=coy(yc1);
	  xc2=-(xa2-maxx/2)/n;
	  xc2=cox(xc2);
	  yc2=-(maxy/2-ya2)/n;
	  yc2=coy(yc2);
	  xc3=-(xa3-maxx/2)/n;
	  xc3=cox(xc3);
	  yc3=-(maxy/2-ya3)/n;
	  yc3=coy(yc3);
	  xc4=-(xa4-maxx/2)/n;
	  xc4=cox(xc4);
	  yc4=-(maxy/2-ya4)/n;
	  yc4=coy(yc4);
	 }
	 else
	 {
	  if(opt2==4)
	  {
	   xc1=(maxy/2-ya1)/n;
	   xc1=cox(xc1);
	   yc1=(xa1-maxx/2)/n;
	   yc1=coy(yc1);
	   xc2=(maxy/2-ya2)/n;
	   xc2=cox(xc2);
	   yc2=(xa2-maxx/2)/n;
	   yc2=coy(yc2);
	   xc3=(maxy/2-ya3)/n;
	   xc3=cox(xc3);
	   yc3=(xa3-maxx/2)/n;
	   yc3=coy(yc3);
	   xc4=(maxy/2-ya4)/n;
	   xc4=cox(xc4);
	   yc4=(xa4-maxx/2)/n;
	   yc4=coy(yc4);
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
  line(xc1,yc1,xc2,yc2);
  line(xc2,yc2,xc3,yc3);
  line(xc3,yc3,xc4,yc4);
  line(xc4,yc4,xc1,yc1);
  printf("\nFinal coordinates are (%f,%f)&(%f,%f)&(%f,%f)&(%f,%f)",(xc1-maxx/2)/n,(maxy/2-yc1)/n,(xc2-maxx/2)/n,(maxy/2-yc2)/n,(xc3-maxx/2)/n,(maxy/2-yc3)/n,(xc4-maxx/2)/n,(maxy/2-yc4)/n);
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

