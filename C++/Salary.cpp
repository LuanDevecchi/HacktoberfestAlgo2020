#include<iostream>
using namespace std;
int main(){
    cout<<"Welcome"<<endl;
cout<<"How can I help you"<<endl;
cout<<"Please Entre Your Salary and let me check your Designation"<<endl;

int pay;
cin>>pay;
cout<<"Pay: "<<pay<<endl;
if (pay>=10000&&pay<=20000){
cout<<"Manager Operations"<<endl;}

if (pay>=20000&&pay<=30000){
cout<<"Manager"<<endl;}

if (pay>=30000&&pay<=40000){
cout<<"Area Manager"<<endl;}

if (pay>=40000&&pay<=50000){
cout<<"Regional Manager"<<endl;}

else {
    cout<<"Invalid!"<<endl;
}
}
}