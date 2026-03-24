#include<iostream>
using namespace std;
class person{
string name;int age;
public:
person(){name="unknown  "; age=0;
cout<<"person default constructor"<<endl;}
person(string s,int n){name=s;age=n;
cout<<"person parametrized const"<<endl;}
void display(){
    cout<<"name "<< name<< "age is "<< age<< endl;}
};

class student:public person{
string rollno;
public:
student(){rollno="25csu000  ";cout<<"student default constr"<<endl;}
student(string s,int n,string rno):person(s,n){
    rollno=rno; 
cout<<"student parametrized constr"<<endl;}

void display_student(){
    display();
    cout<<"roll number "<<rollno;
}
};

int main(){
    student p1,p2("abc",17,"25csu104");
    p1.display();
    p1.display_student();
    p2.display_student();
    return 0;
}