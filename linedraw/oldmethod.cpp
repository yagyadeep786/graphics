#include<stdio.h>
#include<conio.h>
#include<graphics.h>


void oldLineMethod(float x1,float y1,float x2,float y2){

   float m,dx,dy;

   dx= abs(x2-x1);
   dy= abs(y2-y1);

   m= dy/dx;

   while(x1<= x2){
     putpixel(x1,m*x1,GREEN);
     x1++;
   }
}

// write a new method for line drawing.

void ddaMethod(float x1,float y1,float x2,float y2){
    
}

// write circle method

void circleMethod(float r,float xc,float yc){
    // here write code.
}

int main()
{
    int gd= DETECT,gm;

    initgraph(&gd,&gm,"C:\\TURBOC3\\BGI");

    line(50,50,100,100);

    getch();

    closegraph();   
}