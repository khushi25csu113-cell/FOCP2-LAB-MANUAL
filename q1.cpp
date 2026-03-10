#include<iostream>
using namespace std;
class student{
    int rollno;
    string name; 
int mark1;
int mark2;
int mark3;
public:
void inputdetails(){
    cout<<"\n enter roll no,name ,marks1,mark2,mark3";
    cin>>rollno >>name >>mark1 >>mark2 >>mark3;
}

int calculatetotal(){
    return (mark1+mark2+mark3);
}

void displaydetails(){
    cout<<"\n name "<<name<<"\n marks1 "<<mark1<<"\nmarks2 "<<mark2<<"\nmark3 "<<mark3;
    cout<<"\ntotal "<<calculatetotal();
}
};
 int main(){
    student s1;
    s1.inputdetails();
    s1.displaydetails();
    return 0;
 }
