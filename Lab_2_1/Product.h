#pragma once
#pragma pack(1)
#include <iostream>
#include <sstream>
#include <string>

using namespace std;

class Product
{
private:
	int first;
	double second;

public:
	Product();
	Product(int, double);
	Product(const Product&);
	~Product();

	int GetFirst() const { return first; }
	double GetSecond() const { return second; }
	void SetFirst(int value);
	void SetSecond(double value);

	double Power();

	Product& operator =(const Product&);
	operator string() const;

	Product& operator --();
	Product& operator ++();
	Product operator --(int);
	Product operator ++(int);

	friend ostream& operator <<(ostream& out, const Product& a);
	friend istream& operator >>(istream& in, Product& a);

};

