#ifndef Header_h
#define Header_h
class ComplexNumber
{
private:
int real;
int imag;
public:
ComplexNumber();


void Input();
void Output();
bool IsEqual(ComplexNumber);
ComplexNumber Conjugate();
ComplexNumber operator+(const ComplexNumber & num);
ComplexNumber operator-(const ComplexNumber & num);
ComplexNumber operator*(const ComplexNumber & num);
ComplexNumber operator++();
ComplexNumber operator--();
ComplexNumber operator++(int);
ComplexNumber operator--(int);
bool operator>=(const ComplexNumber  &num);
bool operator<=(const  ComplexNumber &num);
bool operator!=(const  ComplexNumber &num);
};
#endif
