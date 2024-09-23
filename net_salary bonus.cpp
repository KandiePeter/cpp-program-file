// net_salary bonus
#include <iostream>
using namespace std;

int main(){
    int salary;
    int period;
    double bonus,net_bonus;
    
    cout<<"please enter the salary and period of service"<<endl;
    cin>>salary>>period;
    
    if (period>10){;
        bonus=0.1*salary;
    }  
      else  if (period>=6&&period<=10){;
        bonus=0.08*salary;
    }
     else if (period<6){;
        bonus=0.05*salary;
}
net_bonus=salary+bonus;
cout<<"net_bonus amount is"<<net_bonus;

    return 0;
}