#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter n ";
    cin>>n;
    int num[n];
    cout<<"enter numberss  ";
    for(int i=0;i<n;i++){
        cin>>num[i];
    }
    int max=num[0];
   for(int i=0;i<n;i++){
        if(num[i]>max){
            max=num[i];
        }
    }
    cout<<"largest number is "<<max;
    return 0;
}