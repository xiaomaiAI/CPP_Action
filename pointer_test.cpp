#include <iostream>
#include <stdlib.h>

using namespace std;

int main()
{
	int arr[] = {1,2,3,4,5,6};
	int *ptr;
	ptr = arr;
	cout << *(ptr+2) <<endl;
	return 0;
}