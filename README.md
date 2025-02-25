# Simple Calculator in C

This is a simple calculator program written in **C** that performs basic arithmetic operations: addition, subtraction, multiplication, and division.

## Features

- Supports four basic operations: `+`, `-`, `*`, `/`
- Handles division by zero with an error message
- Takes user input for two numbers and an operator

## How to Compile and Run

### Windows (Using GCC - MinGW)

```sh
gcc calculator.c -o calculator.exe
calculator.exe
```

### Linux/macOS (Using GCC)

```sh
gcc calculator.c -o calculator
./calculator
```

## Usage

1. Run the program.
2. Enter the first number.
3. Enter an arithmetic operator (`+`, `-`, `*`, `/`).
4. Enter the second number.
5. Get the result!

## Example Run

```
Enter the first number: 5
Enter the operation you want to perform (+, -, *, /): +
Enter the second number: 3
Result: 8.00
```

## Possible Errors

- **Invalid Operator:** If the user enters an invalid operator, the program prints an error message.
- **Division by Zero:** If the user tries to divide by zero, an error message is displayed.

##

