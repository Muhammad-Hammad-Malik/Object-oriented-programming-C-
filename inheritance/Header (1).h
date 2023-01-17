#ifndef header_h
#define header_h
#include <iostream>
using namespace std;
class localphone
{
private:
	int larr[7];
public:
	localphone();
protected:
	void input1();
	void print1();
};
class nationalphone : protected localphone
{
private:
	int narr[3];
public:
	nationalphone();
protected:
	void input2();
	void print2();
};
class intphone : protected nationalphone
{
private:
	int iarr[3];
public:
	intphone();
	void input3();
	void print3();
};


#endif