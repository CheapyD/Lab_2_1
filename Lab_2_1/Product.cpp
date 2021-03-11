#include "Product.h"

Product::Product()
{
	first = 0;
	second = 0;
}

Product::Product(int x = 0, double y = 0)
{
	first = x;
	second = y;
}

Product::Product(const Product& v)
{
	first = v.first;
	second = v.second;
}

Product::~Product()
{}

void Product::SetFirst(int value)
{
	if (value > 0)
		first = value;
	else
		first = 0;
}

void Product::SetSecond(double value)
{
	if (value > 0)
		second = value;
	else
		second = 0;
}

double Product::Power()
{
	return first * second * 10;
}

Product& Product::operator = (const Product& r)
{
	first = r.first;
	second = r.second;
	return *this;
}

Product::operator string () const
{
	stringstream ss;
	ss << "first = " << first << endl;
	ss << "second = " << second << endl;
	return ss.str();
}

Product& Product::operator --() 
{
	--first; 
	return *this; 
}

Product& Product::operator ++() 
{
	++first; 
	return *this; 
}

Product Product::operator --(int) 
{
	Product a(*this);
	second--; 
	return a; 
}

Product Product::operator ++(int) 
{
	Product a(*this); 
	second++; 
	return a; 
}

ostream& operator <<(ostream& out, const Product& a)
{
	return out << a.first << ", " << a.second;
}

istream& operator >>(istream& in, Product& a)
{
	cout << "first = "; in >> a.first;
	cout << "second = "; in >> a.second;
	return in;
}
