//Name: Varnika Maurya
//PRN: 24070123160
//Exp No.: 12
//Program No.: 1
#include<iostream>
using namespace std;
class student
{
    int rno;
    char name[50];
    double fee;
    public:
    student();
    void display();      };
student::student()
    {
        cout<<"Enter the RollNo:";
        cin>>rno;
        cout<<"Enter the Name:";
        cin>>name;
        cout<<"Enter the Fee:";   
        cin>>fee;
    }   
 
   void student::display()
    {
        cout<<endl<<rno<<"\t"<<name<<"\t"<<fee;
    }
int main()
{
    student s;
    s.display();
    return 0;
}

/*
Output:
Enter the RollNo:24
Enter the Name:Aashi
Enter the Fee:50000

24	Aashi	50000
  */
