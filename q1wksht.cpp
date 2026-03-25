#include<iostream>
using namespace std;
class student{
   string name;
   int marks;
   public:
student();   //default
student(string,int);  //parametrized
void displayresult();
};
student::student(){ name="unknown";marks=0;}
student::student(string s,int n){name=s;marks=n;}

void student::displayresult()
{ cout<<"name is"<<name <<" and marks are "<<marks<<endl;}

int main(){
    student s1,s2("sumit",45);
    s1.displayresult();
    s2.displayresult();
    return 0;
}

