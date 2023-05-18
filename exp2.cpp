#include <iostream>
#include <string>
using namespace std;

class Student {
    public:
        string name;
        int rollno;
        string add;
        int zip;

        Student(string n, int r, string a, int z) {
            name = n;
            rollno = r;
            add = a;
            zip = z;
        }

        void display_student_details() {
            cout << "Name: " << name << endl;
            cout << "Rollno :" << rollno << endl;
            cout << "Address: " << add << endl;
            cout << "Zip: " << zip << endl;
        }
};

int main() {
   string name;
        int rollno;
        string add;
        int zip;


    cout<<"enter name:"<<endl;
    cin>>name;
    cout<<"enter rollno:"<<endl;
    cin>>rollno;
    cout<<"enter address:"<<endl;
    cin>>add;
    cout<<"enter zip:"<<endl;
    cin>>zip;
    Student student1(name,rollno,add,zip);
    cout<<endl;
    cout<<endl;

    // Displaying student details
    student1.display_student_details();

    return 0;
}
