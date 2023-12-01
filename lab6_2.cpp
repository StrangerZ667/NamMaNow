#include<iostream>
#include<cmath>
using namespace std;

double deg2rad(double degree){
    return (degree*(M_PI/180.0));
}

double rad2deg(double radian){
    return (radian*(180.0/M_PI));
}

double findXComponent(double range1, double range2, double radian1, double radian2){
    return (range1*cos(radian1) + range2*cos(radian2));
}

double findYComponent(double range1, double range2, double radian1, double radian2){
    return (range1*sin(radian1) + range2*sin(radian2));
}

double pythagoras(double rangex, double rangey){
    return (sqrt(pow(rangex,2) + pow(rangey,2)));
}

void showResult(double result_vec_length, double result_vec_direction){
    cout << "%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%\n";
    cout << "Length of the resultant vector = " << result_vec_length << endl;
    cout << "Direction of the resultant vector (deg) = " << result_vec_direction << endl;
    cout << "%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%";
}

int main(){
    double l1,l2,a1,a2,xcomp,ycomp,result_vec_length,result_vec_direction;
    cout << "Enter length of the first vector: ";
    cin >> l1;
    cout << "Enter direction of the first vector (deg): ";
    cin >> a1;
    cout << "Enter length of the second vector: ";
    cin >> l2;
    cout << "Enter direction of the second vector (deg): ";
    cin >> a2;
    a1 = deg2rad(a1);
    a2 = deg2rad(a2);
    xcomp = findXComponent(l1,l2,a1,a2);
    ycomp = findYComponent(l1,l2,a1,a2);
    result_vec_length = pythagoras(xcomp,ycomp);
    result_vec_direction = rad2deg(atan2(ycomp,xcomp));
    showResult(result_vec_length,result_vec_direction);
}
