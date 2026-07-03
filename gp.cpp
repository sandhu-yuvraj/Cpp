/*A Geometric Progression (GP) is a mathematical sequence 
  where each term after the first is found by multiplying the preceding term by a non-zero constant 
  called the common ratio (r), which can be implemented in C++ using specific formulas. 
  To calculate the (n^{th}) term, you use the formula T_n = a * pow(r, n - 1), where a is the first term. 
  The sum of the first (n) terms is computed using S_n = a * (1 - pow(r, n)) / (1 - r) when r != 1.
  For an infinite decreasing GP where (r) < 1, the sum to infinity simplifies to S_inf = a / (1 - r).*/
#include <cmath>
#include <iostream>
using namespace std;
int main (){
    int firstTerm , ratio , terms;
    cout<<"Enter first term: ";
    cin>>firstTerm;
    cout<<"Enter common ratio: ";
    cin>>ratio;
    cout<<"Enter number of terms: ";
    cin>>terms;
    int nth = firstTerm * pow(ratio, terms-1) ;
    int sum =0;
    for (int i =firstTerm ; i<=nth; i *= ratio)
    { cout<<i<<" ";
        sum += i ; }
        cout<<"\n";
        cout<<"nth term: "<<nth<<endl;
        cout<<"Sum of terms of GP: "<<sum<<endl;
}