#include <iostream>
using namespace std;
template <typename midValue>
midValue meanvalue(midValue a, midValue b, midValue c) {
    midValue result;
    if(a>b && b>c) {
        return b;
    }
    else if(a>c && c>b) {
        return c;
    }
    else return a;
    }
int main() {
    string a, b, c;
    cin>>a>>b>>c;
    cout<<meanvalue(a,b,c);
}