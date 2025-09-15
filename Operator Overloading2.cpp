#include <iostream>
#include <string>
using namespace std;

class Name {
public:
    string name1, name2;

    Name(string n1, string n2) {
        name1 = n1;
        name2 = n2;
    }

 
    string operator+ (const Name &obj) {
        return name1 + " " + obj.name2;  
    }
};

int main() {
    Name N1("Udayati", "Sharma");
    Name N2("Palak", "Soni");

    cout << (N1 + N2) << endl; 
}

/*Output:-
Udayati Soni
*/
