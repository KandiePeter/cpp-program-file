//do while loop
#include <iostream>
using namespace std;

int main() {
    int i=1, sum=0;
    do
    {
        cout<<i<<endl;
        i++;
        sum=sum+i;
    }while(i>0, i<=100);
    
    cout<<"the sum is "<<sum<<endl;

    return 0;
} 
