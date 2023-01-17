#ifndef Header1_h
#define Header1_h
#include <string>
#include <cstring>
#include <iostream>
using namespace std;
class employee
{
protected:
	string name;
	unsigned long number;
public:
	void getdata();
	void putdata();

};
class employee1 : protected employee
{
protected:
	string time;
	int salary;
public:
	void getdata1();
	void putdata1();

};
class manager : protected employee1
{
public:
	void input1();
	void output1();

};
class scientist : protected employee1
{
public:
	void input2();
	void output2();

};
class labour : protected employee1
{
public:
	void input3();
	void output3();

};
#endif