#include <iostream>

using namespace std;

class rational
{
private:
	int a, b;
	int NOD(int a1, int b1)
	{
		if (a1 == b1) return a1;
		else
		{
			if (a1 > b1) return NOD(a1-b1,b1);
			else return NOD(a1, b1-a1);
		}
	}
public:
	rational()
	{
		a = 0; b = 0;
	}
	rational(int a1, int b1)
	{
		if (b1 == 0) { a = 0; b = 0; }
		else if (a1 % b1 == 0) { a = a1 / b1; b = 1; }
		else
		{
			a1 = a1 % b1;
			double d = NOD(a1, b1);
			a = a1 / d;
			b = b1 / d;
		}
	}
	void set(int a1, int b1);
	void show();
};

