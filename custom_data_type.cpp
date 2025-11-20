#include <iostream>
#include <string>
using namespace std;

struct Vecotor3D{
    float x;
    float y;
    float z;
};
enum season {SPRING, SUMMER,AUTUMN, WINTER};
void printSeason(season s){
    if(s == SPRING){
        cout << "it's spring"<<endl;
    }
    else if(s == SUMMER){
        cout << "it's summer"<< endl;
    }
    else if(s == AUTUMN){
        cout << "it's autumn"<<endl;
    }
    else{
        cout << "it's winter"<<endl;
    }
}
int main(){
    Vecotor3D v1;
    v1.x = 3.14;
    v1.y = 4.13;
    v1.z = 4.62;
    cout << v1.x << " "<< v1.y<< " "<< v1.z<< endl;
    season myFavSeason = AUTUMN;
    printSeason(myFavSeason);
}
