#include <errno.h>
#include <stdlib.h>

#include "panic.h"

int main (int argc, char *argv[]) {
	panic_errno("panic_errno prefix %d", 10);
}
