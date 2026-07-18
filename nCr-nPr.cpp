/* nCr and nPr are mathematical functions used in combinatorics to calculate combinations and permutations, respectively.
   These functions are useful in various fields such as probability, statistics, and computer science.
   These functions can be implemented in C++ using recursive or iterative methods to calculate factorials and then use those factorials to compute nCr and nPr values.
   Using functions, we can calculate nCr and nPr,
   where nCr = n! / (r! * (n - r)!), and nPr = n! / (n - r )! */

#include <bits/stdc++.h>  // Non standard library which includes most of the standard C++ libraries
using namespace std;
int fact(int x){
    int fact = 1;
    for (int i = 1; i <= x; i++){
        fact *= i;
    }
    return fact;
}
int main (){
    int n, r;
    cout<<"Enter n: ";
    cin>>n;
    cout<<"Enter r: ";
    cin>>r;
    int c = fact(n)/(fact(r) * fact(n-r)) ;
    int p = fact(n)/fact(n-r);    // OR p = c * fact(r);
    cout<<"nCr: "<<c<<endl;
    cout<<"nPr: "<<p;
    return 0;
}