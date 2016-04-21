#include<bits/stdc++.h>
#include<graphics.h>
using namespace std;
int main()
{

    int a,b,xc,yc;
    cout<<"Enter a and b: ";
    cin>>a>>b;

    cout<<"Enter the co-ordinates of centre: ";
    cin>>xc>>yc;


    int gd=DETECT,gm;

    initgraph(&gd,&gm,NULL);

    int p,q;
    for(int i=0;i<=90;i++)
    {
        double angle = double(i*3.14)/double(180);
        p=a*cos(angle);
        q=b*sin(angle);
        delay(100);
        putpixel(p+xc,q+yc,6); //1st
        putpixel(-p+xc,-q+yc,6); //3rd
        putpixel(-p+xc,q+yc,6); //4th
        putpixel(p+xc,-q+yc,6); //2nd

    }

    setcolor(4);
    setbkcolor(WHITE);




    delay(10000);
    closegraph();

}
