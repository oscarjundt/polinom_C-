#include <iostream>

using namespace std;

double alpha(double x1,double y1, double z1){
    double cc1 = (-y1)/(2*x1);
    return cc1;
}
double beta(double x2, double y2, double z2, double xx){
    double cc2 = (x2*(xx*xx))+(y2*(xx))+z2;
    return cc2;
}
double discr(double x3, double y3, double z3){
    double cc3 = (y3*y3)-(4*(x3)*(z3));
    return cc3;
}

void affichage(double x, double y, double z){
    double cc = alpha(x,y,z);
    cout << "alpha= " << cc << endl;
    double ccc = beta(x,y,z,cc);
    cout << "beta= " << ccc << endl;
    double cccc = discr(x,y,z);
    cout << "discriminant= " << cccc << endl;
}

int main(){
    double a;
    double b;
    double c;
    cout << "donner a: ";
    cin >> a;
    cout << "donner b: ";
    cin >> b;
    cout << "donner c: ";
    cin >> c;
    affichage(a,b,c);
}