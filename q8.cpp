#include<iostream>
using namespace std;
int main(){
int n;
cout<<"enter N ";
cin>>n;
for(int i=0;i<n;i++){
    int id;
    cout<<endl<<"enter ID";
    cin>>id;
    if(id%3==0){
        cout<<id;cout<<"buzz"<<endl;
    }
    else if(id%5==0){
        cout<<id; cout<<" fuzz"<<endl;
    }
    else if(id%5==0 && id%3==0){
        cout<<id; cout<<" buzz fuzz"<<endl;
    }
    else
    cout<<"invalid";
}
    return 0;
}