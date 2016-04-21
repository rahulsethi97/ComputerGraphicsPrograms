#include<bits/stdc++.h>
#include<graphics.h>
using namespace std;
int main()
{

    int r,xc,yc;
    cout<<"Enter the radius: ";
    cin>>r;

    cout<<"Enter the co-ordinates of centre: ";
    cin>>xc>>yc;


    int gd=DETECT,gm;

    initgraph(&gd,&gm,NULL);

    int x=0,y=r;
    double p0= 1-r;
    putpixel(x,y,6);
    while(x<=y)
    {
        cout<<p0;
        if(p0<0)
        {
         x++;
         p0 = p0 + 2*x +1;

        }
        else
        {
         x++;
         y--;
         p0 = p0 + 2*x +1 -2*y;

        }

        if(x<=y)
        {
        int p=x,q=y;
        cout<<" "<<x<<" "<<y<<"\n";
        delay(100);
        putpixel(p+xc,q+yc,6); //1st
        putpixel(-p+xc,-q+yc,6); //5th
        putpixel(q+xc,p+yc,6); //2nd
        putpixel(-q+xc,-p+yc,6); //6th
        putpixel(-p+xc,q+yc,6); //8th
        putpixel(p+xc,-q+yc,6); //4th
        putpixel(q+xc,-p+yc,6); //7th
        putpixel(-q+xc,p+yc,6); //3rd
        }

    }

    setcolor(4);
    setbkcolor(WHITE);




    delay(10000);
    closegraph();

}
