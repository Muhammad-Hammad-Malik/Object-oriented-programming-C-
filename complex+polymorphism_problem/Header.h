#ifndef Header_h
#define Header_h
#include <iostream>
using namespace std;
class account
{
protected:
	int accountnumber;
	float balance;
public:
	account();
	void setter();
	int accgetter();
	float balgetter();
	virtual void print();
	virtual void debit(float);
	virtual void credit(float);
	
};
class currentaccount : public account
{
protected:
	float servicecharge;
	float minbalance;
public:
	currentaccount();
	virtual void print();
	virtual void debit(float);
	virtual void credit(float);
};
class savingaccount : public account
{
protected:
	float interest;
public:
	savingaccount();
	virtual void print();
	virtual void debit(float);
	virtual void credit(float);
};
#endif