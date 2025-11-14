#include <iostream>
#include <string>
using namespace std;

class Student{
    private:
        string name;
        int rollNumber;
    public:
        void setDetails(string studentName, int studentRollNo){
            name = studentName;
            rollNumber = studentRollNo;
        }
        void printDetails();

};
void Student::printDetails(){
    cout << "student name is : "<< name<<endl;
    cout << "student roll Number is : "<< rollNumber<<endl;
}

class Book{
    private:
        string title;
        string author;
        int pages;
    public:
        void setData(string bookTitle, string bookAuthor, int bookPages){
            title = bookTitle;
            author = bookAuthor;
            pages = bookPages;
        }
        void getData(){
            cout << "The book title is : "<< title<< endl;
            cout << "The book author is : "<< author<< endl;
            cout << "The book pages is : "<< pages<< endl;
        }

};


int main(){
    Student s1;
    s1.setDetails("Aman", 123546);
    s1.printDetails();
    Student s2;
    s2.setDetails("Shyam", 12345);
    s2.printDetails();
    Book b1;
    b1.setData("Atomic Habits", "James Clark", 300);
    b1.getData();

}

