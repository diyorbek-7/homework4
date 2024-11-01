#include <iostream>
using namespace std;
void sawp_values(double a, double b) {
    a = a + b;
    b = a - b;
    a = a - b;
    cout <<"a="<< a << endl;
    cout << "b="<<b << endl;
}
int main() {
    double a, b;
    cout<<"a="<<endl<<"b=";
    cin >> a >> b;
    sawp_values(a, b);
    return 0;
}