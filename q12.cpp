#include<iostream>
using namespace std;
int main(){
    int a,b,c;
    cout<<"enter a b c";
    cin>>a;
    cin>>b;
    cin>>c;
if (a==b && b==c){
    cout<<"equilateral";
}
else if(a==b|| b==c||c==a)
{
    cout<<"isosclese";
}
else
cout<<"scalene";
return 0;
}