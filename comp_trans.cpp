#include<bits/stdc++.h>
#include<graphics.h>
using namespace std;
int main()
{

    cout<<"\t\tComposite transformation of ellipse.\n\n\n";
    double a,b,xc,yc;
    cout<<"Enter a and b: ";
    cin>>a>>b;

    int flag_sca=0,flag_rot=0,flag_trans=0;


    cout<<"Enter the co-ordinates of centre: ";
    cin>>xc>>yc;

    char ch;
    cout<<"\nEnter 'y' if answer is yes";

    double tx,ty,sx,sy;
    double ang;

    cout<<"\nDo you want Scaling: ";
    cin>>ch;
    if(ch=='y' || ch=='Y')
      {
         flag_sca=1;
         cout<<"\nEnter sx and sy: ";
         cin>>sx>>sy;
      }

    cout<<"\nDo you want Translation: ";
    cin>>ch;
    if(ch=='y' || ch=='Y')
       {
           flag_trans=1;
           cout<<"\nEnter tx and ty: ";
           cin>>tx>>ty;
       }

    cout<<"\nDo you want Rotation: ";
    cin>>ch;

    float c,s;
    if(ch=='y' || ch=='Y')
       {
           flag_rot=1;
           cout<<"\nEnter angle: ";
           cin>>ang;
           c=cos((ang*3.14)/180);
           s=sin((ang*3.14)/180);
       }


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
        putpixel(-p+xc,-q+yszac,6); //3rd
        putpixel(-p+xc,q+yc,6); //4th
        putpixel(p+xc,-q+yc,6); //2nd


        if(flag_sca)
        {
        p=p*sx;
        q=q*sy;
        }
        if(flag_trans)
        {
        p=p+tx;
        q=q+ty;
        }

        if(flag_rot)
        {

        //--For Rotation start--//
        int P,Q,x,y;
        P=p+xc;
        Q=q+yc;
        x=P*c - Q*s;
        y=P*s + Q*c;
        putpixel(x,y,6); //1st

        P=-p+xc;
        Q=-q+yc;
        x=P*c - Q*s;
        y=P*s + Q*c;
        putpixel(x,y,6); //2nd

        P=-p+xc;
        Q=q+yc;
        x=P*c - Q*s;
        y=P*s + Q*c;
        putpixel(x,y,6); //4th

        P=p+xc;
        Q=-q+yc;
        x=P*c - Q*s;
        y=P*s + Q*c;
        putpixel(x,y,6); //3rd

        //--For Rotation End--//
        }
        else
        {
        putpixel(p+xc,q+yc,6); //1st
        putpixel(-p+xc,-q+yc,6); //3rd
        putpixel(-p+xc,q+yc,6); //4th
        putpixel(p+xc,-q+yc,6); //2nd
        }
    }

    setcolor(4);
    setbkcolor(WHITE);




    delay(10000);
    closegraph();

}
