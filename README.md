# Random Prime Number Generator

This project implements a mathematical search algorithm in C designed to find **Random Prime Numbers**.

## ⚙️ Algorithm Logic

The program operates by generating a stream of pseudo-random integers and applying a **Primality Test** filter.

1.  **Input:** User defines the target count ($N$).
2.  **Generation:** Random numbers are produced using `rand()`.
3.  **Filtration:**
    * Numbers $< 2$ are discarded.
    * Numbers divisible by any integer from $2$ to $n/2$ are discarded.
4.  **Output:** Only numbers passing the filter are printed until $N$ primes are found.

## 🚀 Usage

1.  Compile the code:
    ```bash
    gcc main.c -o prime_gen
    ```
2.  Run the executable:
    ```bash
    ./prime_gen
    ```
3.  Enter the number of primes you want to find (e.g., `5`).

---
*This repository demonstrates loops, conditional logic, and random number generation in C.*
