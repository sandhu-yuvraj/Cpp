// If 3 points are said to be collinear then it means,
// a one straight line can be made passing through it.
// 3 points satisfy condition of collinearity if,
// (x1 , y1) , ( x2, y2) , ( x3, y3)
// ( y2 -y1 ) * ( x3 -x2) == (y3 -y2) * (x2 -x1 ) || can be expressed in slope division form
// slopes of line joining points A and B is same as slope of line joining B and C
// Slope Comparision Formulation
#include <iostream>
using namespace std;
int main(){
    float x1 , x2 , x3 , y1 , y2 , y3 ;
    cout<<"Give 3 points in coordinate plane: " ; // Example 0 0 2 2 4 4      signify (0,0) (2,2) (3,3)
    cin>>x1>>y1>>x2>>y2>>x3>>y3 ;
    if (( y2 -y1 ) * ( x3 -x2) == (y3 -y2) * (x2 -x1 ) ) cout<<"Points are Collinear" ;
    else cout<<"Points are not collinear" ;
}