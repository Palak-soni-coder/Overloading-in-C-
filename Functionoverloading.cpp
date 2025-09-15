// EXPERIMENT-13
// Palak Soni
// 24070123069
// ENTC A3
//Calculator

#include <iostream>
using namespace std;
#include <string>

void calc(int a,int b){
    int sum=a+b;
    cout<< sum<<endl;
}

void calc(int a,int b,int c)
{
    int diffrence=a-b-c;
    cout<< diffrence;
}

int main()
{
    
     calc(12,24);
     calc(2,10,8);
    
}


/*Output:-
36
-16
*/
