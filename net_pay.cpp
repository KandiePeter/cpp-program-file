// salary scheme
#include <iostream>
using namespace std;

int main() {
    int hours;
    int hourly_wage;
    int gross_pay;
    int tax;
    int overtime;
    int net_pay;

cout<<"Enter hours worked in a week"<<endl;
cin>>hours;

cout<<"Enter hourly wage"<<endl;
cin>>hourly_wage;

if(hours>40){
    overtime=hours+(hours*0.5);
}
else{
    overtime=hours;
}

gross_pay=hourly_wage*overtime;
cout<<"the gross_pay "<< gross_pay<<endl;

tax=(0.15*600)+((gross_pay-600)*0.2);
cout<<"Tax:"<<tax<<endl;

net_pay=gross_pay-tax;
cout<<"Net pay:"<<net_pay<<endl;

    return 0;
}
