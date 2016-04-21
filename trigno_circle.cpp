#include<bits/stdc++.h>
#include<graphics.h>
using namespace std;
int main()
{

    float r,xc,yc;
    cout<<"Enter the radius: ";
    cin>>r;

    cout<<"Enter the co-ordinates of end point: ";
    cin>>xc>>yc;


    int gd=DETECT,gm;

    initgraph(&gd,&gm,NULL);

    int x,y;
    for(int i=0;i<90;i++)
    {
        double angle = double(i*3.14)/double(180);
        cout<<angle<<" ";
        x=xc + r*cos(angle);
        y=yc + r*sin(angle);
        delay(100);
        cout<<x<<" "<<y<<"\n";
        putpixel(x,y,6);


        x=xc - (x-xc);
        cout<<x<<" "<<y<<"\n";
        putpixel(x,y,6);

        y=yc - (y-yc);
        cout<<x<<" "<<y<<"\n";
        putpixel(x,y,6);

        x=xc + (xc-x);
        cout<<x<<" "<<y<<"\n";
        putpixel(x,y,6);

    }

    setcolor(4);
    setbkcolor(WHITE);




    delay(10000);
    closegraph();

}
