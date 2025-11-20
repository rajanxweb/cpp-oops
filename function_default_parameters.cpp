#include <iostream>
#include <iomanip>
using namespace std;

float calculateSimpleInterest(float principal, float time, float rate = 2.5){
    return (time*(principal*rate)/100);
}
inline int cube(int n){
    return n*n*n;
}
void area(float side){
    cout <<"area is : "<< side*side<<endl;
}
void area(float length, float width){
    cout << "area of rectange is : "<< length*width<<endl;
}
void area(float radius, bool isCircle){
    cout << "area of circle is : "<< 3.14*radius*radius<<endl;
}
int main(){
   float interest = calculateSimpleInterest(1000, 2, 5);
   cout << interest<<endl;
   float i = calculateSimpleInterest(1000, 2);
   cout << i<<endl;
   int n;
   cin>>n;
   for(int i=1; i<=n; i++){
    int result = cube(i);
    cout << result << endl;
   }

   // students marks table using manipulators

   cout << "Name ";
   cout << setw(5) << "Subjects ";
   cout << setw(5) << "Marks" << endl;
   cout << "Rajan ";
   cout << setw(5) << "DSA ";
   cout << setw(5) << 25 << endl;

   area(20.1);
   area(20.9, true);
   //area(34.34, 324.4);




   
}