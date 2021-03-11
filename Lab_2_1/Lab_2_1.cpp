#include "Product.h"

Product makeProduct(int first, double second)
{
	Product P(first, second);
	return P;
}

int main()
{
	Product a(13, 3.4);
	cout << "Power = " << a.Power() << endl << endl;
	cout << "Size of class = " << sizeof(a) << endl << endl;

	cout << "++a: " << ++a << endl;
	cout << "--a: " << --a << endl;
	cout << "a++: " << a++ << endl;
	cout << "a--: " << a-- << endl << endl;
	
	Product b(4, 5.5);
	cout << string(b) << endl;

	Product c = b;
	cout << "first = " << c.GetFirst() << endl;
	cout << "second = " << c.GetSecond() << endl << endl;

	Product d = makeProduct(2, 2.3);
	cout << "first = " << d.GetFirst() << endl;
	cout << "second = " << d.GetSecond() << endl << endl;

	Product e;
	cin >> e;
	cout << e << endl;
}