//Name:- Palak Soni
//PRN-24070123069
//Class-ENTC A

#include <iostream>
using namespace std;
#include <string>

class Name {
private:
    double sum;
public:
   
        Name(char A, char B) {
        cout<<A;
        cout<<B<<endl;
    }


       Name(string a, string b) {
        cout  << a+b << endl;
    }
};
    
int main() {
    Name A1('x','y');  
    Name A2("Palak","Soni");                 
    return 0;
}
/*Output:-
xy
PalakSoni
*/
