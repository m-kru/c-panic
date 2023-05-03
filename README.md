# c-panic

Lightweight C module implementing `panic`, `todo` and `unimplemented` macros.
The module uses `fprintf` and `exit` functions as well as `stderr` stream and `EXIT_FAILURE` macro.

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
