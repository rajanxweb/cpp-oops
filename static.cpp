#include <iostream>
#include <string>
using namespace std;

class Employee{
    private:
        static string companyName;
    public:
        static void setCompanyName(string name);
        static string getCompanyName();
    
};
class Player{
    private:
        static int playerCount;
    public:
        string playerName;
        Player(string name){
            playerName = name;
            playerCount++;
        }
        static int getPlayerCount();

    
};
int Player::playerCount = 0;
int Player::getPlayerCount(){
    return playerCount;
}

string Employee::companyName = "MyCompany";
void Employee::setCompanyName(string name){
    companyName = name;
}
string Employee::getCompanyName(){
    return companyName;
}

int main(){
   string s1 =  Employee::getCompanyName();
   cout << s1 << endl;
    Employee::setCompanyName("Rajan");
    string s2 = Employee::getCompanyName();

    cout << s2 << endl;
    Player p1("Atulya");
    Player p2("Amisha");
    Player p3("Ajay");
    int x =Player::getPlayerCount();

    cout << x<<endl;

}

