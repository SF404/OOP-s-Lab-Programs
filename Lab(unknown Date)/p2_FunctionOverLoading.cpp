//-------------------Program to perform function overloading------------
#include <bits/stdc++.h>
using namespace std;
class overloading
{
private:
    string name;
    int roll;
    char grade;
    double cgpa;

public:
    void setData(int roll) { this->roll = roll; }
    void setData(string name) { this->name = name; }
    void setData(char grade) { this->grade = grade; }
    void setData(double cgpa) { this->cgpa = cgpa; }
    void PrintData();
};
void overloading::PrintData(){
    cout<<"Name: "<<name<<"\nRoll No: "<<roll<<"\nGrade: "<<grade<<"\nCGPA: "<<cgpa<<endl;
}
int main()
{
    overloading student;
    student.setData("Suhiab");
    student.setData(60);
    student.setData('A');
    student.setData(8.1);
    student.PrintData();

    return 0;
}