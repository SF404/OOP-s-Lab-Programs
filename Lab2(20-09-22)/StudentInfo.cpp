//---------Program to store Student Information----------
#include <bits/stdc++.h>
using namespace std;
class Student
{
    int marks;
    char grade;
    char name[23];

public:
    void setData()
    {
        cout << "Enter the Name of Student: ";
        cin >> name;
        cout << "Enter Grade: ";
        cin >> grade;
        cout << "Enter marks: ";
        cin >> marks;
    }
    void getResult()
    {
        string str;
        if (marks > 40)
            str = "cleared";
        else
            str = "failed";
        cout << name << " has " << str << " Exam with Grade " << grade << "\n";
    }
};
int main()
{
    class Student s1, s2, s3;
    s1.setData();
    s1.getResult();
    return 0;
}