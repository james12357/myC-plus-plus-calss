
//
// Created by c2008 on 2021/5/10.
//
#include <iostream>
using namespace std;
float square(float r);
float rectangle(float a, float b);
float triangle(float a, float b);
double circle(double r, double pi);
class basic_inf{
public:
    constexpr static double pi = 3.14;
};

int main(){
    float a;
    float b;
    double e;
    int choice;
    bool exi = false;
    while (!exi) {
        cin >> choice;
        switch (choice) {
            case 1:
                cout << "请输入正方形边长>";
                cin >> a;
                cout << "面积为:" << square(a) << endl;
                break;
            case 2:
                cout << "请输入长方形长>";
                cin >> a;
                cout << "请输入长方形宽>";
                cin >> b;
                cout << "面积为:" << rectangle(a, b) << endl;
                break;
            case 3:
                cout << "请输入三角形底>";
                cin >> a;
                cout << "请输入三角形高>";
                cin >> b;
                cout << "面积为:" << triangle(a, b) << endl;
                break;
            case 4:
                cout << "请输入圆的半径>";
                cin >> e;
                cout << "面积为:" << circle(e, basic_inf::pi) << endl;
                break;
            default:
                exi = true;
                break;
        }
    }
    return 0;
}
float square(float r){
    return r * r;
}
float rectangle(float a, float b){
    return a * b;
}
float triangle(float a, float b){
    return (a * b) / 2;
}
double circle(double r, double pi){
    return (double)(pi) * r * r;
}
