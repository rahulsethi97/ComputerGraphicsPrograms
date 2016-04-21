#include<bits/stdc++.h>
#include<graphics.h>
using namespace std;
int main()
{

    int x,y;
    cout<<"Enter the co-ordinates of point: ";
    cin>>x>>y;
    int tx,ty;
    cout<<"\nEnter Tx and Ty: ";
    cin>>tx>>ty;
    int gd=DETECT,gm;
    initgraph(&gd,&gm,NULL);
    putpixel(x,y,6);
    putpixel(x+tx,y+ty,6);
    delay(10000);
    closegraph();

}
