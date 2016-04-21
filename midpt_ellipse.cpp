#include<bits/stdc++.h>
#include<graphics.h>
using namespace std;


int main()
{
    int a,b;
    int xc,yc;

    cout<<"\nEnter a and b: ";
    cin>>a>>b;

    cout<<"\nEnter co-ordinates of the centre: ";
    cin>>xc>>yc;

    int gd=DETECT,gm;
    initgraph(&gd,&gm,NULL);

    int p;
    int A2=a*a,B2=b*b,A22=2*A2,B22=2*B2;
    //cout<<A2<<" "<<B2<<" "<<A22<<" "<<B22<<"\n";
    p= b*b - a*a*b + ((a*a)/4);
    int x=0,y=b;
    putpixel(x+xc,y+yc,6);

    if(p>0)
        y--;
    x++;

    while((2*b*b*x) < (2*a*a*y))
    {
        //cout<<x<<" "<<y<<" ";
        putpixel(x+xc,y+yc,6); //1st
        putpixel(-x+xc,-y+yc,6); //3rd
        putpixel(-x+xc,y+yc,6); //4th
        putpixel(x+xc,-y+yc,6); //2nd
        delay(60);
        if(p>0)
        {
            p = p + B22*x + B2 - A22*y;
        }
        else
        {
            p = p + B22*x + B2;
        }
        //cout<<p<<"\n";
        if(p>0)
            y--;
        x++;
    }

    p = B2 * ((2*x+1)/2) * ((2*x+1)/2) + A2*(y-1)*(y-1) -A2*B2;

    if(p<0)
        x++;
    y--;


    while(y>=0)
    {
        //cout<<x<<" "<<y<<" ";
        putpixel(x+xc,y+yc,6); //1st
        putpixel(-x+xc,-y+yc,6); //3rd
        putpixel(-x+xc,y+yc,6); //4th
        putpixel(x+xc,-y+yc,6); //2nd
        delay(60);
        if(p>0)
        {
            p = p + A2 - A22*y;
        }
        else
        {
            p = p + B22*x + A2 - A22*y;
        }
        //cout<<p<<"\n";
        if(p<0)
            x++;
        y--;
    }

    delay(10000);
}
