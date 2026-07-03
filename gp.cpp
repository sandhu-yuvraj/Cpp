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