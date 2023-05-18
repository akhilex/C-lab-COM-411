#include<iostream>
using namespace std;
class student{
    private:
        string name;
        string add;
        int rollno;
        int zip;
    public:
        void input_details()
        {
            cout<<"\nEnter Student Name===";
            cin>>name;
            cout<<"\nEnter Student Address===";
            cin>>add;
            cout<<"\nEnter Student rollno==";
            cin>>rollno;
            cout<<"\nEnter zip code==";
            cin>>zip;
        }
        void output_details()
        {
            cout<<"\nStudent name: "<<name;
            cout<<"\nStudent address: "<<add;
            cout<<"\nStudent rollno: "<<rollno;
            cout<<"\nStudent zip code: "<<zip;

        }
        void update()
        {
            cout<<"\n\nEnter new Student name---- ";
            cin>>name;
            cout<<"\n\nEnter new Student address---";
            cin>>add;
            cout<<"\n\nEnter new Student rollno---";
            cin>>rollno;
            cout<<"\n\nEnter new Student zip code---";
            cin>>zip;
        }
};
int main()
{
    student s;
    while(1)
    {
        cout<<"\n\n\t**************Choose Operation You Want To Perform*********************";
        cout<<"\n\n 1.Insert record of student";
        cout<<"\n\n 2.Update record";
        cout<<"\n\n 3.If you want to display the records";
        cout<<"\n\n 4. Exit";
        cout<<"\n\n Enter your choice-----";

        int ch;
        cin>>ch;
        switch(ch)
        {
        case 1:
            s.input_details();
            break;
        case 2:
            s.update();
            break;
        case 3:
            s.output_details();
            break;
        case 4:
            goto out;
        default:
            cout<<"\n\n\t====>Invalid choice";
            break;
        }
    }
    out:
    return 0;
}
