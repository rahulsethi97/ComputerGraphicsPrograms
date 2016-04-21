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

    float m=(y1-y2)/(x1-x2);
    m=abs(m);

    cout<<m<<"\n";
    int gd=DETECT,gm;

    initgraph(&gd,&gm,NULL);

    setcolor(4);
    setbkcolor(WHITE);

    if(m<1)
    {
        if(x1>x2)
        {
            int temp=x1;x1=x2;x2=temp;
            temp=y1;y1=y2;y2=temp;
        }

        while(x1<=x2)
        {
        delay(100);
        cout<<x1<<" "<<y1<<"\n";
        putpixel(x1,y1,6);
        x1++;
        y1=y1+m;
        }
        putpixel(x2,y2,6);
    }
    else
    {
        if(y1>y2)
        {
            int temp=y1;y1=y2;y2=temp;
            temp=x1,x1=x2,x2=temp;
        }

        while(y1<=y2)
        {
         cout<<x1<<" "<<y1<<"\n";
        delay(100);
        putpixel(x1,y1,6);
        y1++;
        x1=x1+(1/m);
        }
        putpixel(x2,y2,6);
    }
   delay(10000);
   closegraph();

}
