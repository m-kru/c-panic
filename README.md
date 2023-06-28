# c-panic

Lightweight C module implementing `panic`, `panic_errno`, `todo` and `unimplemented` macros.
The module uses `fprintf` and `exit` functions as well as `stderr` stream and `EXIT_FAILURE` macro.
It also uses `strerror` from `string.h` to convert `errno` to string in case of `panic_errno` macro.

The difference between `todo` and `unimplemented` is that while `todo` conveys an intent of implementing the functionality later, `unimplemented` makes no such claims.

## Usage
Simply copy the `panic.h` file into your project.

## Examples
### panic
```c
panic("unexpected error %d", 10);

```
```
test_panic.c:5: panic: unexpected error 10
```
### panic_errno
```c
panic_errno("panic_errno prefix %d", 10);
```
```
panic_errno.c:7: panic: panic_errno prefix 10: Success
```
### todo
```c
todo("%s", "it will be implemented later");
```
```
test_todo.c:5: todo: it will be implemented later
```
### unimplemented
```c
unimplemented("wll %s be %s", "never", "implemented");
```
```
test_unimplemented.c:5: unimplemented: wll never be implemented
```
