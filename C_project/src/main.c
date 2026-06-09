#include <stdio.h>
#include "foo/foo.h"
#include "goo.h"


int main(void) {
	printf("foo: %d %d\n", foo(), FOO);
	printf("bar: %d %d\n", goo(), GOO);

	return 0;
}
