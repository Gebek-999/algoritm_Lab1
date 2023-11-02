setlocale(LC_ALL,"Russian");
#include <iostream>
#include <math.h>


using namespace std;

int main(){
    
    while(true){
    double x,y;
    cout<< "Введите Х в диапазоне -10 до 8";
    cin >> x;
    if  (x>=-10 && x<=-6){
        y=sqrt(4-pow((x+8),2))-2;
    }
    else if (x>-6 && x<=2){
        y=0.5*x+1;
    }
    else if (x>2 && x<=6){
        y = 0;
    }
    else if (x>6 && x<=8) {
        y = pow((x-6),2);
    }
    else {
        cout << "Число X не принадлежит данному диапазону";
    }
    cout<< "y=" << y;
    }
    return 0 ;
}