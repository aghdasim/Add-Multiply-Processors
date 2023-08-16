
# Simple C++ Add or Multiply Processors

This is a simple C++ program that simulates three processors (X, Y, and Z), each with four operations, where 'A' represents addition and 'M' represents multiplication by a constant 'm' (0 < a, m < 100).

## Processor Operations

- Processor X: `AMMA`
- Processor Y: `MAAA`
- Processor Z: `AAMM`

## Input Format

The input format is: `a-(X, Y or Z)-m`

- `a`: The number for the operations
- `(X, Y or Z)`: The processor choice
- `m`: The multiplication factor

## Usage

1. The program will display the available processor operations.
2. Enter the operator in the format `a-(X, Y or Z)-m`.

## Examples

### Example 1

#### Input

```
X=AMMA
Y=MAAA
Z=AAMM

Please enter your operator in this format: a-(X, Y or Z)-m: 5-X-3
```

#### Output

```
RESULT ===> 62
```

Explanation: For Processor X, the operations are (add 5, multiply by 3, multiply by 3, add 5), resulting in 62.

### Example 2

#### Input

```
X=AMMA
Y=MAAA
Z=AAMM

Please enter your operator in this format: a-(X, Y or Z)-m: 2-Y-4
```

#### Output

```
RESULT ===> 8
```

Explanation: For Processor Y, the operations are (multiply by 4, add 2, add 2, add 2), resulting in 8.

## Code Explanation

- The program takes the input string, parses it, and validates the input format.
- Depending on the processor chosen, it performs the specified operations and displays the result.

## Note

- The provided code assumes proper input formatting and does not handle certain edge cases, such as spaces before or after the input.
- Error handling for invalid inputs might need to be improved.
- This is a simplified example and can be extended for more robust functionality and error handling.

Feel free to modify and enhance the code to suit your needs.
```

Remember to replace the "Examples" section with the actual output of your program for the provided input examples. This README provides more detailed information about how to run the program and includes two examples to showcase the different processors.