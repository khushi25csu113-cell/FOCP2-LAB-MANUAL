#include<iostream>
using namespace std;
class bankaccount{
    string accountholdername;
    int accountnumber;
    double balance;

    public:
    bankaccount();//default constructor
    bankaccount(string name,int number,double b);//parameterized constr

    void displaydetails();
 void deposit(double amount);
 void withdraw(double amount);
 
};
bankaccount::bankaccount(string name,int number,double b)
{
    accountholdername=name;
    
}