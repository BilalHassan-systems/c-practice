# Control Flow in C

## What is Control Flow?

**Control flow** is the order in which statements and instructions are executed in a C program.

Normally, C executes statements from top to bottom.

Example:

    #include <stdio.h>

    int main() {
        printf("One\n");
        printf("Two\n");
        printf("Three\n");

        return 0;
    }

Output:

    One
    Two
    Three

But real programs need to:

- Execute statements in a particular order
- Make decisions
- Repeat statements
- Skip statements
- Exit loops
- Exit functions

These behaviors are controlled using **control flow statements**.

---

# Types of Control Flow in C

    Control Flow in C
    │
    ├── 1. Sequential Control Flow
    │      └── Statements execute one after another
    │
    ├── 2. Decision Making / Selection
    │      ├── if
    │      ├── if-else
    │      ├── else-if
    │      ├── nested if
    │      └── switch
    │
    ├── 3. Iteration / Loops
    │      ├── for
    │      ├── while
    │      └── do-while
    │
    └── 4. Jump Statements
           ├── break
           ├── continue
           ├── goto
           └── return

---

# 1. Sequential Control Flow

Sequential control flow is the simplest type of control flow.

Statements execute **one after another from top to bottom**.

Example:

    #include <stdio.h>

    int main() {

        printf("Step 1\n");
        printf("Step 2\n");
        printf("Step 3\n");

        return 0;
    }

Output:

    Step 1
    Step 2
    Step 3

The execution order is:

    Step 1
       ↓
    Step 2
       ↓
    Step 3
       ↓
    End

This is called **sequential execution**.

## Example with Variables

    #include <stdio.h>

    int main() {

        int a = 10;
        int b = 20;

        int sum = a + b;

        printf("Sum = %d\n", sum);

        return 0;
    }

Execution:

    Create a
       ↓
    Create b
       ↓
    Calculate sum
       ↓
    Print sum
       ↓
    End

## Why Sequential Control Flow?

Almost every C program contains sequential execution.

It is useful when instructions need to happen in a specific order.

Example:

    Take input
       ↓
    Process input
       ↓
    Print result

---

# 2. Decision Making / Selection

Decision making allows a program to choose different paths depending on a condition.

For example:

    Is age >= 18?
          |
       ┌──┴──┐
      YES    NO
       |      |
    Adult   Minor

The main selection statements in C are:

- `if`
- `if-else`
- `else-if`
- Nested `if`
- `switch`

---

# Conditions

A condition is an expression that evaluates to either true or false.

Example:

    age >= 18

If:

    age = 20

Then:

    20 >= 18 → true

If:

    age = 15

Then:

    15 >= 18 → false

In C:

    0        → false
    non-zero → true

---

# Relational Operators

Relational operators are commonly used in conditions.

| Operator | Meaning | Example |
|---|---|---|
| `>` | Greater than | `a > b` |
| `<` | Less than | `a < b` |
| `>=` | Greater than or equal | `a >= b` |
| `<=` | Less than or equal | `a <= b` |
| `==` | Equal to | `a == b` |
| `!=` | Not equal to | `a != b` |

---

# `=` vs `==`

This is extremely important.

## `=`

`=` is the **assignment operator**.

Example:

    int x = 10;

It means:

> Store 10 in `x`.

## `==`

`==` is the **equality comparison operator**.

Example:

    if (x == 10)

It means:

> Is `x` equal to 10?

Remember:

    =   → assignment
    ==  → comparison

---

# 2.1 if Statement

The `if` statement executes code only when a condition is true.

## Syntax

    if (condition) {
        // statements
    }

Example:

    #include <stdio.h>

    int main() {

        int age = 20;

        if (age >= 18) {
            printf("You are an adult.\n");
        }

        return 0;
    }

Output:

    You are an adult.

## if Flow

           Condition
              |
          ┌───┴───┐
        true     false
          |         |
       Execute     Skip
          |         |
          └────┬────┘
               ↓
            Continue

If the condition is false, the body of `if` is skipped.

## Example: Positive Number

    int number = 10;

    if (number > 0) {
        printf("Positive");
    }

## Example: Even Number

    int number = 10;

    if (number % 2 == 0) {
        printf("Even");
    }

The `%` operator gives the remainder.

    10 % 2 = 0

Therefore, the number is even.

---

# 2.2 if-else

`if-else` provides two possible paths.

## Syntax

    if (condition) {
        // if true
    }
    else {
        // if false
    }

Example:

    int age = 16;

    if (age >= 18) {
        printf("Adult");
    }
    else {
        printf("Minor");
    }

Output:

    Minor

## if-else Flow

              Condition
              /       \
           true       false
            |           |
         if block    else block
            |           |
            └─────┬─────┘
                  ↓
               Continue

Exactly one of the two blocks executes.

## Example: Even or Odd

    int number = 7;

    if (number % 2 == 0) {
        printf("Even");
    }
    else {
        printf("Odd");
    }

Output:

    Odd

---

# 2.3 else-if

Use `else-if` when there are multiple conditions.

Example:

    90 or above → A
    80–89       → B
    70–79       → C
    60–69       → D
    Below 60    → F

Code:

    int marks = 85;

    if (marks >= 90) {
        printf("A");
    }
    else if (marks >= 80) {
        printf("B");
    }
    else if (marks >= 70) {
        printf("C");
    }
    else if (marks >= 60) {
        printf("D");
    }
    else {
        printf("F");
    }

Output:

    B

## How else-if Works

Conditions are checked from top to bottom.

    Condition 1?
       |
       ├── Yes → Execute → Stop
       |
       No
       ↓
    Condition 2?
       |
       ├── Yes → Execute → Stop
       |
       No
       ↓
    Condition 3?
       |
       ├── Yes → Execute → Stop
       |
       No
       ↓
    else

Once a condition is true, the remaining conditions are skipped.

---

# 2.4 Nested if

A nested `if` means an `if` statement inside another `if`.

Example:

    int age = 20;
    int hasID = 1;

    if (age >= 18) {

        if (hasID == 1) {
            printf("Access allowed");
        }

    }

The inner condition is checked only if the outer condition is true.

## Nested if Flow

    Age >= 18?
        |
       YES
        ↓
    Has ID?
        |
       YES
        ↓
    Access allowed

## Nested if vs Logical AND

This:

    if (age >= 18) {

        if (hasID == 1) {
            printf("Allowed");
        }

    }

Can often be written as:

    if (age >= 18 && hasID == 1) {
        printf("Allowed");
    }

Both require both conditions to be true.

---

# Logical Operators

C has three main logical operators.

| Operator | Name | Meaning |
|---|---|---|
| `&&` | AND | Both conditions must be true |
| `||` | OR | At least one condition must be true |
| `!` | NOT | Reverses the condition |

## AND `&&`

Example:

    if (age >= 18 && hasID == 1) {
        printf("Allowed");
    }

Both conditions must be true.

Truth table:

| A | B | A && B |
|---|---|---|
| False | False | False |
| False | True | False |
| True | False | False |
| True | True | True |

## OR `||`

Example:

    if (day == 6 || day == 7) {
        printf("Weekend");
    }

At least one condition must be true.

Truth table:

| A | B | A \|\| B |
|---|---|---|
| False | False | False |
| False | True | True |
| True | False | True |
| True | True | True |

## NOT `!`

NOT reverses a condition.

    int loggedIn = 0;

    if (!loggedIn) {
        printf("Please login");
    }

Because:

    loggedIn = 0 → false
    !false       → true

---

# 2.5 switch

`switch` is used when you want to compare one expression against several possible constant values.

Example:

    int day = 2;

    switch (day) {

        case 1:
            printf("Monday");
            break;

        case 2:
            printf("Tuesday");
            break;

        case 3:
            printf("Wednesday");
            break;

        default:
            printf("Invalid day");
    }

Output:

    Tuesday

## switch Syntax

    switch (expression) {

        case value1:
            // code
            break;

        case value2:
            // code
            break;

        default:
            // code
    }

## `case`

A `case` represents a possible value.

    case 1:

It means:

> If the switch expression equals `1`, execute this block.

## `break`

`break` exits the `switch`.

Example:

    case 1:
        printf("One");
        break;

Without `break`, execution may continue into the next case.

This behavior is called **fall-through**.

## `default`

`default` executes when no case matches.

    switch (choice) {

        case 1:
            printf("Start");
            break;

        case 2:
            printf("Exit");
            break;

        default:
            printf("Invalid choice");
    }

---

# if-else vs switch

Use `if-else` when:

- You need ranges.
- You need complex conditions.
- You need multiple variables.
- You use relational operators.

Example:

    if (marks >= 90) {
        printf("A");
    }

Use `switch` when:

- One expression is being compared against several discrete values.

Example:

    switch (choice) {

        case 1:
            printf("Start");
            break;

        case 2:
            printf("Exit");
            break;
    }

---

# 3. Iteration / Loops

**Iteration** means repeating a block of code.

A loop allows a program to execute the same code multiple times.

Without loops:

    printf("Hello\n");
    printf("Hello\n");
    printf("Hello\n");
    printf("Hello\n");
    printf("Hello\n");

With a loop:

    for (int i = 0; i < 5; i++) {
        printf("Hello\n");
    }

Loops make repeated operations easier and reduce duplicate code.

---

# Why Do We Need Loops?

Loops are useful when we need to repeat something.

Examples:

- Print numbers from 1 to 100
- Read multiple inputs
- Process an array
- Repeat a menu
- Search through data
- Calculate values repeatedly

---

# Types of Loops in C

    Loops
    │
    ├── for
    ├── while
    └── do-while

---

# 3.1 for Loop

A `for` loop is commonly used when the number of iterations is known or controlled by a counter.

## Syntax

    for (initialization; condition; update) {
        // code
    }

Example:

    for (int i = 1; i <= 5; i++) {
        printf("%d\n", i);
    }

Output:

    1
    2
    3
    4
    5

## Parts of a for Loop

    for (int i = 1; i <= 5; i++)

There are three main parts:

    initialization
          ↓
      condition
          ↓
        update

Specifically:

    int i = 1    → initialization
    i <= 5       → condition
    i++          → update

## How for Loop Works

    Initialization
          ↓
    Check condition
          ↓
       true?
       /   \
     yes    no
      |      |
     Body    Exit
      |
    Update
      |
      └────→ Check condition

Example:

    for (int i = 1; i <= 3; i++) {
        printf("%d\n", i);
    }

Execution:

    i = 1
     ↓
    1 <= 3 → true → print 1
     ↓
    i++
     ↓
    i = 2
     ↓
    2 <= 3 → true → print 2
     ↓
    i++
     ↓
    i = 3
     ↓
    3 <= 3 → true → print 3
     ↓
    i++
     ↓
    i = 4
     ↓
    4 <= 3 → false
     ↓
    Exit

---

# 3.2 while Loop

A `while` loop repeats code while a condition is true.

## Syntax

    while (condition) {
        // code
    }

Example:

    int i = 1;

    while (i <= 5) {
        printf("%d\n", i);
        i++;
    }

Output:

    1
    2
    3
    4
    5

## while Loop Flow

           Condition
              |
           true?
           /   \
         yes    no
          |      |
         Body    Exit
          |
        Update
          |
          └──────→ Condition

## Important while Loop Rule

Make sure something eventually makes the condition false.

Example:

    int i = 1;

    while (i <= 5) {
        printf("%d\n", i);
        i++;
    }

Here `i++` eventually makes:

    i <= 5

false.

Without `i++`:

    int i = 1;

    while (i <= 5) {
        printf("%d\n", i);
    }

The condition remains true forever.

This creates an **infinite loop**.

---

# 3.3 do-while Loop

A `do-while` loop executes its body **at least once**.

## Syntax

    do {
        // code
    } while (condition);

Example:

    int i = 1;

    do {
        printf("%d\n", i);
        i++;
    } while (i <= 5);

Output:

    1
    2
    3
    4
    5

---

# Difference Between while and do-while

## while

Condition is checked **before** execution.

    Check
      ↓
    Execute

Therefore, it can execute **zero times**.

## do-while

Execution happens **before** the condition is checked.

    Execute
      ↓
    Check

Therefore, it executes **at least once**.

## Example

    int i = 10;

    while (i < 5) {
        printf("Hello");
    }

Output:

    Nothing

But:

    int i = 10;

    do {
        printf("Hello");
    } while (i < 5);

Output:

    Hello

---

# for vs while vs do-while

| Loop | Condition Checked | Minimum Executions | Common Use |
|---|---|---:|---|
| `for` | Before | 0 | Counter-controlled loops |
| `while` | Before | 0 | Condition-controlled loops |
| `do-while` | After | 1 | Menus/input requiring one attempt |

---

# Nested Loops

A loop inside another loop is called a **nested loop**.

Example:

    for (int i = 1; i <= 3; i++) {

        for (int j = 1; j <= 3; j++) {
            printf("%d %d\n", i, j);
        }

    }

The inner loop runs completely for every iteration of the outer loop.

Conceptually:

    Outer loop
        |
        ├── Inner loop
        ├── Inner loop
        └── Inner loop

Nested loops are commonly used for:

- Tables
- Patterns
- Matrices
- Grids
- 2D arrays

---

# 4. Jump Statements

Jump statements change the normal flow of execution.

C has:

    Jump Statements
    │
    ├── break
    ├── continue
    ├── goto
    └── return

---

# 4.1 break

`break` immediately exits the nearest loop or `switch`.

Example:

    for (int i = 1; i <= 10; i++) {

        if (i == 5) {
            break;
        }

        printf("%d\n", i);
    }

Output:

    1
    2
    3
    4

When `i` becomes `5`:

    i == 5
      ↓
    break
      ↓
    Exit loop

---

# 4.2 continue

`continue` skips the rest of the current loop iteration and moves to the next iteration.

Example:

    for (int i = 1; i <= 5; i++) {

        if (i == 3) {
            continue;
        }

        printf("%d\n", i);
    }

Output:

    1
    2
    4
    5

When `i == 3`:

    continue
       ↓
    Skip remaining code
       ↓
    Next iteration

---

# break vs continue

## break

> Stop the entire loop.

    break
      ↓
    EXIT LOOP

## continue

> Skip the current iteration.

    continue
       ↓
    NEXT ITERATION

Example:

    break:
    1 2 3 STOP

    continue:
    1 2 SKIP-3 4 5

---

# 4.3 goto

`goto` transfers execution to a labeled statement.

## Syntax

    goto label;

    label:
        // code

Example:

    #include <stdio.h>

    int main() {

        goto message;

        printf("This will be skipped.\n");

    message:
        printf("Hello\n");

        return 0;
    }

Output:

    Hello

The program jumps directly to:

    message:

## Should You Use goto?

`goto` is generally avoided in beginner-level structured programming because excessive use can make code difficult to understand.

Prefer:

- `if`
- loops
- functions
- `break`
- `continue`
- `return`

when they express the required control flow clearly.

---

# 4.4 return

`return` exits a function.

Example:

    #include <stdio.h>

    int main() {

        printf("Hello\n");

        return 0;

        printf("World\n");

    }

Output:

    Hello

`printf("World")` is never reached because `return` exits `main`.

## return in Functions

`return` can also send a value back from a function.

    int add(int a, int b) {
        return a + b;
    }

Then:

    int result = add(10, 20);

The function returns:

    30

---

# What Does return 0 Mean?

In:

    int main() {
        return 0;
    }

`0` is returned from `main` to the operating system.

Conventionally:

    0        → successful termination
    non-zero → some kind of failure/error status

---

# Complete Control Flow Example

Here is a program using several control-flow concepts:

    #include <stdio.h>

    int main() {

        for (int i = 1; i <= 10; i++) {

            if (i == 5) {
                continue;
            }

            if (i == 9) {
                break;
            }

            printf("%d\n", i);
        }

        return 0;
    }

Output:

    1
    2
    3
    4
    6
    7
    8

What happens?

    i = 1 → print
    i = 2 → print
    i = 3 → print
    i = 4 → print
    i = 5 → continue → skip
    i = 6 → print
    i = 7 → print
    i = 8 → print
    i = 9 → break → exit loop

---

# Control Flow Summary

    Control Flow
    │
    ├── Sequential
    │   └── Execute statements in order
    │
    ├── Selection
    │   ├── if
    │   ├── if-else
    │   ├── else-if
    │   ├── nested if
    │   └── switch
    │
    ├── Iteration
    │   ├── for
    │   ├── while
    │   └── do-while
    │
    └── Jump
        ├── break
        ├── continue
        ├── goto
        └── return

---

# Quick Reference

| Statement | Purpose |
|---|---|
| `if` | Execute code if condition is true |
| `if-else` | Choose between two paths |
| `else-if` | Check multiple conditions |
| Nested `if` | Put a decision inside another decision |
| `switch` | Choose based on matching values |
| `for` | Repeat using initialization, condition, and update |
| `while` | Repeat while condition is true |
| `do-while` | Execute once, then check condition |
| `break` | Exit the nearest loop or switch |
| `continue` | Skip current loop iteration |
| `goto` | Jump to a labeled statement |
| `return` | Exit a function and optionally return a value |

---

# Important Operators Used in Control Flow

## Relational Operators

    >     Greater than
    <     Less than
    >=    Greater than or equal
    <=    Less than or equal
    ==    Equal
    !=    Not equal

## Logical Operators

    &&    AND
    ||    OR
    !     NOT

## Other Useful Operators

    %     Remainder
    ++    Increment
    --    Decrement

---

# Common Beginner Mistakes

## 1. `=` Instead of `==`

Wrong for comparison:

    if (x = 5)

Usually intended:

    if (x == 5)

---

## 2. Semicolon After if

Avoid:

    if (x > 5);
    {
        printf("Hello");
    }

Correct:

    if (x > 5) {
        printf("Hello");
    }

---

## 3. Infinite Loops

Be careful:

    int i = 1;

    while (i <= 5) {
        printf("%d\n", i);
    }

`i` never changes, so the condition remains true.

Correct:

    int i = 1;

    while (i <= 5) {
        printf("%d\n", i);
        i++;
    }

---

## 4. Forgetting `break` in switch

Without `break`, execution may fall through to subsequent cases.

---

## 5. Confusing break and continue

    break
    → exit loop

    continue
    → skip current iteration

---

# Final Mental Model

Remember control flow using four questions:

    1. SEQUENCE
       What happens next?

    2. DECISION
       Which path should I take?

    3. LOOP
       Should I repeat this?

    4. JUMP
       Should I change the normal flow?

So:

    Sequential
        ↓
    Do things in order

    Decision
        ↓
    Choose a path

    Loop
        ↓
    Repeat a path

    Jump
        ↓
    Change the normal flow

---

# Final Takeaway

**Control flow determines how a C program moves from one statement to another.**

The four major categories are:

    Sequential
        ↓
    Normal execution

    Decision Making
        ↓
    if, if-else, else-if, nested if, switch

    Iteration
        ↓
    for, while, do-while

    Jump Statements
        ↓
    break, continue, goto, return

Once you understand these four categories, you have the foundation needed to control the execution of most basic C programs.
