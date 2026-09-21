#include <stdio.h>

// #include "foo/foo.h"
#include "goo.h"
#include "foo/goo_1/goo_1.h"
#include "foo/goo_1/goo_2/goo_2.h"
#include "foo/goo_1/goo_2/goo_3/goo_3.h"
#include "foo/goo_1/goo_2/goo_3/goo_4/goo_4.h"
#include "foo/goo_1/goo_2/goo_3/goo_4/goo_5/goo_5.h"

int main(void) {
	printf("foo:   %d %d\n", foo(), FOO);
	printf("goo:   %d %d\n", goo(), GOO);
	printf("goo_1: %d %d\n", goo_1(), GOO_1);
	printf("goo_2: %d %d\n", goo_2(), GOO_2);
	printf("goo_3: %d %d\n", goo_3(), GOO_3);
	printf("goo_4: %d %d\n", goo_4(), GOO_4);
	printf("goo_5: %d %d\n", goo_5(), GOO_5);

	return 0;
}
