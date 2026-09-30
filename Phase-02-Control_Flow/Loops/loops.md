# Loops in C

Loops are one of the fundamental concepts in programming. They allow us to execute the same block of code multiple times without writing that code again and again.

In C, there are three main types of loops:

- `for` loop
- `while` loop
- `do...while` loop

---

## 1. What Are Loops?

A **loop** is a control-flow statement that repeatedly executes a block of code while a particular condition is satisfied.

For example, suppose we want to print numbers from `1` to `5`.

Without a loop:

```c
#include <stdio.h>

int main(void) {
    printf("1\n");
    printf("2\n");
    printf("3\n");
    printf("4\n");
    printf("5\n");

    return 0;
}
