#include<iostream>
using namespace std;
int main(){
char c;
cout<<"enter   ";
cin>>c;
if(isdigit(c)){
    cout<<"number";
}
else if(isalpha(c)){
    if(c=='a'||c=='e'||c=='i'||c=='o'||c=='u'){
        cout<<"vowel";
    }
    else 
cout<<"consonnt ";
}


return 0;
}