#include <iostream>
#include "foo/foo.h"
#include "goo.h"

using namespace std;


int main(void) {
	cout << "foo:" << foo() << FOO << endl;
	cout << "goo:" << goo() << GOO << endl;

	return 0;
}
