#include <iostream>
#include <cmath>
using namespace std;
int main(){
    float x1, y1, x2, y2, r;
    cin >> x1 >> y1 >> x2 >> y2 >> r;
    float x = x2 - x1;
    float y = y2 - y1;
    float a = pow(x, 2)+pow(y, 2);
    a = pow(a, 0,5);
    cout << a << endl;
    return 0;
}