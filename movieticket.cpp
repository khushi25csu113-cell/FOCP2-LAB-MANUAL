#include<iostream>
using namespace std;
class movieticket{
string moviename;
int seatnumber;
int ticketprice;
bool isbooked;
public:
movieticket();               //constructor
movieticket(string,int,int); // parametrized const
void bookticket();
void cancelticket();
void displaydetails();
void calctotalcost(int nooftickets);
~movieticket(); //destructor
};

movieticket::movieticket()
{   moviename="null"; seatnumber=0; isbooked=false;  ticketprice=200;}

movieticket::movieticket(string s,int a, int b)
{moviename=s;seatnumber=a,ticketprice=b;}

void movieticket::bookticket()
{if(isbooked=true)
    cout<<"booked";}

void movieticket::cancelticket()
{if(isbooked=false)
    cout<<"not booked";}

void movieticket::displaydetails()
{cout<<"movie name is "<<moviename<<endl;
cout<<"seatnumber is "<<seatnumber<<endl;
cout<<"ticket price is "<<ticketprice<<endl;
cout<<"status of booking is "<<isbooked<<endl;}

int main(){
    movieticket m1;
    m1.displaydetails();
    return 0;
}