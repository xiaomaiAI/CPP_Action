#include <iostream>

using namespace std;

class Test
{
	int a;
public:
	Test():a(0){cout << "void";}
	explicit Test(int i):a(i){cout << "int";}
	Test(short s):a(s){cout << "short";}
	Test& operator = (int n){a=n;cout << "operator=";}
};
int main()
{
int n;
Test a =n;
return 0;
}