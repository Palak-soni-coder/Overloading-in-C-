//Name:- Palak Soni
//Class-ENTC A
//PRN-24070123069


#include <iostream>
using namespace std;
class Add{
public:
    Add(int a, int b){
        cout << "a + b = "<<a+b<<endl;
    }
    Add(float a, float b){
        cout << "float a + b = "<<a+b<<endl;
    }
    Add(int a, int b,int c){
        cout << "a + b + c = "<<a+b+c<<endl;
    }
};
int main() {
    Add a(12,23);
    Add b(13.46f,25.05f);
    Add c(20,21,22);
    return 0;
}

/*
Output:
a + b = 35
float a + b = 38.51
a + b + c = 63
*/
