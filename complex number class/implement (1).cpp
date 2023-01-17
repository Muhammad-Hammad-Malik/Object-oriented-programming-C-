
#include <iostream>
#include "Header.h"

using namespace std;
 ComplexNumber :: ComplexNumber()
 {
	
int real=0;
int imag=0;
 }
 void ComplexNumber :: Input()
 {
cout<<"enter the real part ";
cin>>real;
cout<<"enter imaginary part";
cin>>imag;
 }
 void ComplexNumber :: Output()
 {
if(imag<0)
{
cout<<real<<imag<<"i"<<endl;
}
else
{
cout<<real<<"+"<<imag<<"i"<<endl;
}
 }
 bool ComplexNumber :: IsEqual(ComplexNumber n1)
 {
if((real == n1.real)&&(imag==n1.imag))
return true;
else
return false;
 }
 ComplexNumber ComplexNumber :: Conjugate()
 {
ComplexNumber s1;
s1.imag=imag*-1;
s1.real=real;
return s1;
 }
 ComplexNumber ComplexNumber :: operator+(const ComplexNumber &num)
 {
ComplexNumber s2;
s2.real=real+num.real;
s2.imag=imag+num.imag;
return s2;
 }
 ComplexNumber ComplexNumber :: operator-(const ComplexNumber &num)
 {
ComplexNumber s2;
s2.real=real-num.real;
s2.imag=imag-num.imag;
return s2;
 }
 ComplexNumber ComplexNumber :: operator*(const ComplexNumber &num)
 {
ComplexNumber s3;
s3.real=real*num.real - imag*num.imag;
s3.imag=real*num.imag+imag*num.real;
return s3;
 }
 ComplexNumber ComplexNumber :: operator ++()
 {
ComplexNumber s4;
s4.imag=imag;
s4.real=++real;
return s4;
 }
 ComplexNumber ComplexNumber :: operator --()
 {
ComplexNumber s5;
s5.imag=imag;
s5.real=--real;
return s5;
 }
 ComplexNumber ComplexNumber :: operator ++(int)
 {
ComplexNumber s4;
s4.imag=imag;
s4.real=++real;
return s4;
 }
 ComplexNumber ComplexNumber :: operator --(int)
 {
ComplexNumber s5;
s5.imag=imag;
s5.real=--real;
return s5;
 }
 bool ComplexNumber :: operator >=(const ComplexNumber &num)
 {
if((real >= num.real)&&(imag>=num.imag))
return true;
else
return false;
 }
 bool ComplexNumber :: operator <=(const ComplexNumber &num)
 {
if((real <= num.real)&&(imag<=num.imag))
return true;
else
return false;
 }
 bool ComplexNumber :: operator !=(const ComplexNumber &num)
 {
if((real != num.real)&&(imag!=num.imag))
return true;
else
return false;
 }
 