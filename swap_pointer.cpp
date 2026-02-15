#include<iostream>
using namespace std;
void swap(int &r1,int &r2);

int main(){
int a,b;
a=30,b=98;
cout<<a<<" " <<b <<endl;
swap(a,b);
cout<<a<<" " <<b;
int r1=a,r2=b;
}

/*void swap(int &a,int &b){
int temp=a;
a=b;
b=temp;
}*/

 void swap(int &r1,int &r2){
int temp=r1;
r1=r2;
r2=temp;
 }