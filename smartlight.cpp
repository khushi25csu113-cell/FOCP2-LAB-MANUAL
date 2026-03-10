#include<iostream>
using namespace std;
class smartlight{
    string brand;
    int brightness;
    bool ison;

    public:
    smartlight(){            //default
        brand="unknown";
        brightness=50;
        ison=false; 
    }
    smartlight(string bn,int n,bool status){    //parametrized const
     brand=bn;
     brightness=n;
     ison=status;
    }

    void turnon(){
        ison=true;
        cout<<"light is on"<<endl;
    }
   void turnoff(){
    ison=false;
    cout<<"light is off"<<endl;
   }
   void incbrightness(){
    if (brightness<=100){
        brightness+=10;
        if(brightness>100){
            brightness=100;
        }
    }
    cout<<"brightness is increased to "<<brightness<<endl;
       }

       void decbrightness(){
        if(brightness>0){
            brightness-=10;
            if(brightness<0){
                brightness=0;
            }
        }
       cout<<"brightness is decreased to "<<brightness<<endl;
       }

      void displayresults(){
        cout<<"brand is "<<brand<<endl;
        cout<<" brightness is "<<brightness<<endl;
        cout<<"status is "<<(ison?true:false)<<endl;
      }

};

int main(){
    smartlight light1;
    light1.displayresults();
    smartlight light2("philips",46,true);
    light2.incbrightness();
    light2.displayresults();
    return 0;
}