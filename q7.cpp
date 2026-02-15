#include<iostream>
using namespace std;

int main(){
int a,b,c;
cout<<"enter score of a ";
cin>>a;
cout<<endl<<"enter score of b";
cin>>b;
cout<<endl<<"enter score of c"<<endl;
cin>>c;
if(a>b && a>c){
    cout<<endl<<"player a is winner"<<endl;
}
else if(b>a && b>c){
    cout<<"player b is winner"<<endl;
}
else
cout<<"player c is winner";
    return 0;
}