#include <iostream>
#include <math.h>

using namespace std;

int gk(){
    double x,y;
    for (x=-10; x<=8; x++)
    {
        if  (x>=-10 && x<=-6) y=sqrt(4-pow((x+8),2))-2;
            else if (x>-6 && x<=2) y=0.5*x+1;
            else if (x>2 && x<=6) y = 0;
        else y = pow((x-6),2);
        
        cout<< "x=" << x;
        cout<< "\ty=" << y <<endl;
    }
}

int main(){
    gk();
    return 0 ;
}