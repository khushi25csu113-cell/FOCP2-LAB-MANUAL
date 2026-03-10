#include<iostream>
using namespace std;
class smartlight{
string brand;
int brightness;
bool ison;
public:
smartlight();//default
smartlight(string,int,bool);//parametrized
void turnon();
void turnoff();
void incbrightness();
void decbrightness();
void displayresult();
~smartlight();  //destructor
}; 

smartlight::smartlight(){
    brand="unknown";brightness=50;ison=false;
}

smartlight::smartlight(string b,int n,bool status){
    brand=b;
    brightness=n;
ison=status;
}

void smartlight::turnon(){
    ison=true;
}
void smartlight::turnoff(){
    ison=false;
}
void smartlight::incbrightness(){
     if (brightness<=100){
        brightness+=10;
        if(brightness>100){
            brightness=100;
           }   }
}

void smartlight::decbrightness(){
     if(brightness>0){
            brightness-=10;
            if(brightness<0){
                brightness=0;
            }
        }
}

void smartlight::displayresult(){
     cout<<"brand is "<<brand<<endl;
        cout<<" brightness is "<<brightness<<endl;
        cout<<"status is "<<(ison?true:false)<<endl;
}

int main(){
    smartlight l1;
    l1.displayresult();
    return 0;
}