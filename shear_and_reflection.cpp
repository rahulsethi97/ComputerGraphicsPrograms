
#include<bits/stdc++.h>
#include<graphics.h>
using namespace std;
int main()
{

    cout<<"\t\tShearing of ellipse.\n\n\n";
    double a,b,xc,yc;
    cout<<"Enter a and b: ";
    cin>>a>>b;

    cout<<"\nEnter the co-ordinates of the centre: ";
    cin>>xc>>yc;

    int shx,shy;
    cout<<"\nShear along x: ";
    cin>>shx;
    cout<<"\nShear along y: ";
    cin>>shy;

    int flag_x=1,flag_y=1;
    char ch;
    cout<<"\nDo you want reflection along x-axis(y/n): ";
    cin>>ch;
    if(ch=='y')
        flag_x=-1;
    cout<<"\nDo you want reflection along y-axis(y/n): ";
    cin>>ch;
    if(ch=='y')
        flag_y=-1;

    int gd=DETECT,gm;

    initgraph(&gd,&gm,NULL);

    double p,q;
    double angle;
    for(int i=0;i<=90;i++)
    {
        angle = double(i*3.14)/double(180);
        p=a*cos(angle);
        q=b*sin(angle);
        delay(100);

        putpixel(p+xc,q+yc,6); //1st
        putpixel(-p+xc,-q+yc,6); //3rd
        putpixel(-p+xc,q+yc,6); //4th
        putpixel(p+xc,-q+yc,6); //2nd

        int p_,q_;

        //1st
        p_=p+q*shx;
        q_=q+p*shy;
        putpixel(p_+xc,q_+yc,6);
        p_*=flag_x;
        q_*=flag_y;
        putpixel(p_+xc,q_+yc,6);

        //3rd
        p_=-p-q*shx;
        q_=-q-p*shy;
        putpixel(p_+xc,q_+yc,6);
        p_*=flag_x;
        q_*=flag_y;
        putpixel(p_+xc,q_+yc,6);

        //4th
        p_=-p+q*shx;
        q_=q-p*shy;
        putpixel(p_+xc,q_+yc,6);
        p_*=flag_x;
        q_*=flag_y;
        putpixel(p_+xc,q_+yc,6);

        //2nd
        p_=p-q*shx;
        q_=-q+p*shy;
        putpixel(p_+xc,q_+yc,6);
        p_*=flag_x;
        q_*=flag_y;
        putpixel(p_+xc,q_+yc,6);
    }

    setcolor(4);
    setbkcolor(WHITE);

    delay(1000000000000000000000000);
    closegraph();

}
