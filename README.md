# CodeAlpha_Calculator

A simple command-line calculator written in C, built as **Task 1** of the CodeAlpha C Programming Internship.

## Features

- Addition, subtraction, multiplication and division
- Operation selection using a `switch` statement
- Works with decimal numbers (`double`)
- Handles division by zero with a clear error message
- Validates numeric input and rejects invalid operators
- Repeats calculations until the user chooses to quit

## Getting Started

### Prerequisites

A C compiler such as GCC.

### Compile

```bash
gcc calculator.c -o calculator
```

### Run

```bash
./calculator
```

On Windows, run `calculator.exe` instead.

## Sample Run

```
=== Simple C Calculator ===

Enter first number: 12.5
Enter operator (+, -, *, /): *
Enter second number: 4
Result: 12.50 * 4.00 = 50.00

Do another calculation? (y/n): y

Enter first number: 10
Enter operator (+, -, *, /): /
Enter second number: 0
Error: Division by zero is not allowed.

Do another calculation? (y/n): n
Goodbye!
```

## Concepts Used

- `switch-case` control flow
- `do-while` loops
- Input handling with `scanf` and input validation
- Basic arithmetic with floating-point numbers

## Project Structure

```
CodeAlpha_Calculator/
├── calculator.c
└── README.md
```
