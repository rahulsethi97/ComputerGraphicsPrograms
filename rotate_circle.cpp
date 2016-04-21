#include<bits/stdc++.h>
#include<graphics.h>
using namespace std;
int main()
{

    float r,xc,yc;
    cout<<"Enter the radius: ";
    cin>>r;

    cout<<"Enter the co-ordinates of center: ";
    cin>>xc>>yc;

    float ang;
    cout<<"\nEnter angle: ";
    cin>>ang;
    float c,s;
    c=cos((ang*3.14)/180);
    s=sin((ang*3.14)/180);
    int gd=DETECT,gm;

    initgraph(&gd,&gm,NULL);

    int x,y;
    for(int i=0;i<90;i++)
    {
        double angle = double(i*3.14)/double(180);
        float rx,ry;


        x=xc + r*cos(angle);
        y=yc + r*sin(angle);
        delay(100);

        rx=x*c - y*s;
        ry=x*s + y*c;
        putpixel(rx,ry,6);
        putpixel(x,y,6);


        x=xc - (x-xc);
        rx=x*c - y*s;
        ry=x*s + y*c;
        putpixel(rx,ry,6);
        putpixel(x,y,6);

        y=yc - (y-yc);
        rx=x*c - y*s;
        ry=x*s + y*c;
        putpixel(rx,ry,6);
        putpixel(x,y,6);

        x=xc + (xc-x);
        rx=x*c - y*s;
        ry=x*s + y*c;
        putpixel(rx,ry,6);
        putpixel(x,y,6);

    }

    setcolor(4);
    setbkcolor(WHITE);




    delay(10000);
    closegraph();

}

