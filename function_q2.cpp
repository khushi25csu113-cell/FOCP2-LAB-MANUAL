#include<iostream>
using namespace std;
//instead of making 5 diff functions make one and set default not mandatory ones as zero
float result(float,float,float=0,float=0,float=0);

int main(){
cout<<result(47,69,84,56,75)<<endl;
cout<<result(54,64,32,67)<<endl;
cout<<result(45,63)<<endl;
cout<<result(34,63,78)<<endl;
return 0;
}
float result(float f1,float f2,float f3,float f4,float f5){
    cout<<"result of 5 subjects ";
    return f1+f2+f3+f4+f5;
}

