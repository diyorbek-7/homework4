#include <iostream>
using namespace std;
int floorFunction(double n) {
    double c = n;
    while(c>=1) {
        c=c-1;
    }
    if(c==0) {
        return n;
    } else {return n-c;}
}
int ceilingFunction(double n) {
    double b = n;
    while(b>=1) {
        b=b-1;
    }
    if(b==0) {
        return n;
    } else {return (n-b)+1;}
}
int main() {
    double n;
    cin>>n;
    cout<<"Floor: ";
    cout<<floorFunction(n);
    cout<<endl;
    cout<<"Ceiling: ";
    cout<<ceilingFunction(n);
    return 0;
}