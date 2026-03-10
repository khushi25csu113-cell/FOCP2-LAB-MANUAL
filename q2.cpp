#include<iostream>
using namespace std;
class rectangle{
    float length;
    float width;
    public:

    void inputdimensions(){
        cout<<"\n enter length and width";
        cin>>length>>width;
    }
     
    float calculatearea(){
        return (length*width);
    }

    float calculateperimeter(){
        return (2*(length+width));
    }

    float displayresult(){
        cout<<"\n length is "<<length<<"\n width is "<<width<<"\n area is"<<calculatearea()<<"\n perimeter is"<<calculateperimeter();
    }
};

int main(){
    rectangle r1;
    r1.inputdimensions();
    r1.displayresult();
    return 0;
}