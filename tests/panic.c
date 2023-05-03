#include "panic.h"
#include <stdlib.h>

int main (int argc, char *argv[]) {
	panic("unexpected error %d", 10);
}
