#include<iostream>
using namespace std;

struct Rect{
	double x,y,w,h;
};

double overlap(Rect *R1, Rect *R2){
double L1,L2,min1,min2,max1,max2;
    double x1 = R1->x;
    double y1 = R1->y;
    double w1 = R1->w;
    double h1 = R1->h;
    double x2 = R2->x;
    double y2 = R2->y;
    double w2 = R2->w;
    double h2 = R2->h;
    
    if((x1+w1)<(x2+w2))
    {
        min1 = x1+w1;
    }
    else
    {
        min1 = x2+w2;
    }
    
    if(x1>x2)
    {
        max1 = x1;
    }
    else
    {
        max1 = x2;
    }
    
    if(y1>y2)
    {
        min2 = y2;
    }
   else
    {
        min2 = y1;
    }
    
    if((y1-h1)>(y2-h2))
    {
        max2 = y1-h1;
    }
   else
    {
        max2 = y2-h2;
    }
    
    L1 = min1-max1;
    L2 = min2-max2;
    double ans;
    ans = L1*L2;
    if(L1<0||L2<0)
    {
        return 0;
    }
    
    return ans;
}
