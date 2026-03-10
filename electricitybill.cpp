#include<iostream>
using namespace std;
class electricitybill{
string consumername;
int unit;
float billamount;
public:
 electricitybill(); // consumerName as "Not Assigned", units as 0, and billAmount as 0.
 electricitybill(string,int);
 void calculatebill();
 void displaybill();
};

electricitybill::electricitybill()
{ consumername ="not assigned"; unit= 0; billamount =0;}

electricitybill::electricitybill(string s,int u)
{consumername=s;unit=u;}

void electricitybill::calculatebill(string,int){
if (unit>0 && unit<101){
    billamount=5*unit;
}
else if(unit>100 && unit<201){
billamount=7*unit;
}
else
{ billamount=10*unit;}
}

void electricitybill::displaybill()
{cout<<"consumer name is "<<consumername<<endl;
    cout<<"units consumed are "<<unit<<endl;
    cout<<" total billamount is "<<billamount<<endl;
}
 
int main(){
    electricitybill p1,p2,p3;
    p1.displaybill();
p2.calculatebill("rumanika",68,)
}