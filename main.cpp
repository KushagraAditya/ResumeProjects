#include <iostream>
using namespace std;
#include <sum>
#include <diff>
int main() {
	int p = 10;
	int q = 20;
	sum d;
	d.a = p;
	d.b = q;
	cout << d.summation();
	diff e;
	e.a = p;
	e.b = q;
	cout << e.difference();
	return 0;
}