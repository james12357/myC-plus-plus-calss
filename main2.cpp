
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
                cout << "�����������α߳�>";
                cin >> a;
                cout << "���Ϊ:" << square(a) << endl;
                break;
            case 2:
                cout << "�����볤���γ�>";
                cin >> a;
                cout << "�����볤���ο�>";
                cin >> b;
                cout << "���Ϊ:" << rectangle(a, b) << endl;
                break;
            case 3:
                cout << "�����������ε�>";
                cin >> a;
                cout << "�����������θ�>";
                cin >> b;
                cout << "���Ϊ:" << triangle(a, b) << endl;
                break;
            case 4:
                cout << "������Բ�İ뾶>";
                cin >> e;
                cout << "���Ϊ:" << circle(e, basic_inf::pi) << endl;
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
