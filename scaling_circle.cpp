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

    int scale_x,scale_y;
    cout<<"\nEnter scaling factor of x and y: ";
    cin>>scale_x>>scale_y;
    int gd=DETECT,gm;

    initgraph(&gd,&gm,NULL);

    int x,y;
    for(int i=0;i<90;i++)
    {
        double angle = double(i*3.14)/double(180);
        //cout<<angle<<" ";

        delay(100);

        x=r*cos(angle);
        y=r*sin(angle);
        //cout<<x<<" "<<y<<"\n";
        putpixel(xc+x,yc+ y,6);
        putpixel(xc+scale_x * x , yc+ scale_y * y , 6);

        x=-x;
        //cout<<x<<" "<<y<<"\n";
        putpixel(xc+x,yc+ y,6);
        putpixel(xc+scale_x * x , yc+ scale_y * y , 6);

        y=-y;
        //cout<<x<<" "<<y<<"\n";
        putpixel(xc+x,yc+ y,6);
        putpixel(xc+scale_x * x , yc+ scale_y * y , 6);

        x=-x;
        //cout<<x<<" "<<y<<"\n";
        putpixel(xc+x,yc+ y,6);
        putpixel(xc+scale_x * x ,yc+  scale_y * y , 6);

    }

    setcolor(4);
    setbkcolor(WHITE);




    delay(10000);
    closegraph();

}

