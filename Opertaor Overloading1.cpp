//EXPERIMENT 13
//Name:- Palak Soni
//PRN:-24070123069
//Class:- ENTC A
//Operator overloading

#include <iostream>
using namespace std;

class ComplexAddition {
public:
    int real;
    int imag;

    ComplexAddition(int re, int im) {
    real = re;
    imag = im;
    cout << real << " + " << imag << "i" << endl;
}


    void add(int A, int B) {
        cout << A << " + " << B << "i" << endl;
    }
};
    
int main() {
    ComplexAddition A1(12, 21);  
    ComplexAddition A2(9, 8);

    int fl = A1.real+ A2.real;   
    int fli = A1.imag + A2.imag;  
    
    A1.add(fl, fli);  
      return 0;
}

/*
Output:-

12 + 21i
9 + 8i
21 + 29i

*/
