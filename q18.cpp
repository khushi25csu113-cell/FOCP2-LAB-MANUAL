#include<iostream>
using namespace std;
int main(){
    string id;
    cout<<"enter ID  ";
    cin>>id;
    int flag=1;
    for(int i=0, j=id.length()-1;i<j;i++,j--){
        if(id[i]!=id[j]){
            flag=0;
            break;
        }
    }
    if(flag==1){
        cout<<"pallindrome";
    }
    else
   cout<<"not pallindrome";
    
    return 0;
}