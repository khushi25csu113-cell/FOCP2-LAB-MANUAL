#include<iostream>
#include<cmath>
using namespace std;
int main(){
    int n;
    cout<<"enter n ";
    cin>>n;
    int orgnum=n;
    int count=0;
    while(n>0){
        int rem=n%10;
        n/=10;
        count++;
    }

    int orgn=orgnum;
int sum=0;
    while(orgnum>0){
int rem=orgnum%10;
sum+=pow(rem,count);
orgnum/=10;
    }
    if(sum==orgn){
        cout<<" is an armstrong number ";
    }
else
cout<<"not a armstrong number";
    

    return 0;
}