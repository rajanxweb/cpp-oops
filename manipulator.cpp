#include <iostream>
#include <iomanip>
using namespace std;

int main(){
    
    double d1 = 34.56;
    double d2 = 2.45;
    double d3 = 345.75;
    cout << d1 << " "<< d2<< " "<< d3<<endl;

    cout << "using manipulators "<<endl;

    cout << fixed << setprecision(3)<<endl;
    cout << setw(15)<< d1<<endl;
    cout << setw(15)<< d2<<endl;
    cout << setw(15)<< d3<<endl;

    cout << "second problem solution"<<endl;

    int num;
    cin>> hex >>num;
    cout<< dec << num<<endl;
    cout << oct << num << endl;


}