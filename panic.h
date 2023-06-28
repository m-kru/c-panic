// SPDX-License-Identifier: MIT
// https://github.com/m-kru/c-panic
// Copyright (c) 2023 Michał Kruszewski

#ifndef _PANIC_H_
#define _PANIC_H_

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define panic(fmt, ...) do {\
	fprintf(\
		stderr, "%s:%d: panic: " fmt "\n", __FILE__, __LINE__, ## __VA_ARGS__\
	);\
	exit(EXIT_FAILURE);\
} while(0)

#define panic_errno(fmt, ...) do {\
	const int err = errno;\
	fprintf(\
		stderr, "%s:%d: panic: " fmt ": %s\n", __FILE__, __LINE__, ## __VA_ARGS__, strerror(err)\
	);\
	exit(EXIT_FAILURE);\
} while (0)

#define todo(fmt, ...) do {\
	fprintf(\
		stderr, "%s:%d: todo: " fmt "\n", __FILE__, __LINE__, ## __VA_ARGS__\
	);\
	exit(EXIT_FAILURE);\
} while(0)

#define unimplemented(fmt, ...) do {\
	fprintf(\
		stderr, "%s:%d: unimplemented: " fmt "\n", __FILE__, __LINE__, ## __VA_ARGS__\
	);\
	exit(EXIT_FAILURE);\
} while(0)

#endif // _PANIC_H_
