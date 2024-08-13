#include<stdio.h>
#include<conio.h>
#include<graphics.h>

int main()
{
    int gd= DETECT,gm;

    initgraph(&gd,&gm,"C:\\TURBOC3\\BGI");

    line(50,50,100,100);

    getch();

    closegraph();   
}