#include<bits/stdc++.h>
#include<graphics.h>
using namespace std;
int main()
{

    float x1,x2,y1,y2;
    cout<<"Enter the co-ordinates of start point: ";
    cin>>x1>>y1;

    cout<<"Enter the co-ordinates of end point: ";
    cin>>x2>>y2;

    int tx,ty;
    cout<<"\nEnter Tx and Ty: ";
    cin>>tx>>ty;

    int gd=DETECT,gm;

    initgraph(&gd,&gm,NULL);

    setcolor(4);
    setbkcolor(WHITE);

    if(x2<x1)
    {
        int temp=x1;
        x1=x2;
        x2=temp;

        temp=y1;
        y1=y2;
        y2=temp;
    }

    int p0,dx=x2-x1,dy=y2-y1;
    int p=2*dy - dx;

    while(x1<=x2)
    {
        //cout<<p<<" ";
        if(p>0)
        {
            y1++;
            dy--;

            x1++;
            dx--;

            p = p + 2*dy - 2*dx;
        }
        else if(p==0)
        {
            x1++;
            dx--;

            p = p + 2*dy;
        }
        else
        {
            y1--;
            dy++;

            x1++;
            dx--;

            p = p + 2*dy + 2*dx;
        }
        if(x1<=x2)
        {
        //cout<<x1<<" "<<y1<<"\n";
        delay(100);
        putpixel(x1,y1,6);
        putpixel(x1+tx,y1+ty,6);
        }
    }


    delay(10000);
    closegraph();
}
