#include <iostream>
#include "foo/foo.h"
#include "goo.h"
#include "foo/goo_1/goo_1.h"
#include "foo/goo_1/goo_2/goo_2.h"
#include "foo/goo_1/goo_2/goo_3/goo_3.h"
#include "foo/goo_1/goo_2/goo_3/goo_4/goo_4.h"
#include "foo/goo_1/goo_2/goo_3/goo_4/goo_5/goo_5.h"


int main(void) {
	std::cout << "foo:   " << foo() << FOO << std::endl;
	std::cout << "goo:   " << goo() << GOO << std::endl;
	std::cout << "goo_1: " << goo_1() << GOO_1 << std::endl;
	std::cout << "goo_2: " << goo_2() << GOO_2 << std::endl;
	std::cout << "goo_3: " << goo_3() << GOO_3 << std::endl;
	std::cout << "goo_4: " << goo_4() << GOO_4 << std::endl;
	std::cout << "goo_5: " << goo_5() << GOO_5 << std::endl;

	return 0;
}
