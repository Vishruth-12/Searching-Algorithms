# Searching Algorithms

A collection of common searching algorithms implemented for practice.

## Algorithms

- Linear Search
- Binary Search (iterative and recursive)
- Jump Search
- Interpolation Search
- Exponential Search

## Complexity overview

| Algorithm | Best | Average | Worst | Space |
|---|---:|---:|---:|---:|
| Linear Search | O(1) | O(n) | O(n) | O(1) |
| Binary Search | O(1) | O(log n) | O(log n) | O(1) iterative |
| Jump Search | O(1) | O(√n) | O(√n) | O(1) |
| Interpolation Search | O(1) | O(log log n) | O(n) | O(1) |
| Exponential Search | O(1) | O(log n) | O(log n) | O(1) iterative |

Binary, jump, interpolation, and exponential search require sorted input (with interpolation search most useful when values are fairly uniformly distributed).

## Folder structure

- `C/` — C implementations
- `C++/` — C++ implementations
- `Java/` — Java implementations
- `Python/` — Python implementations

Each program is intended as an individual example with clear input/output behavior.

## Running examples

Use the compiler/interpreter for the language. For example:

```bash
gcc C/linear_search.c -o linear_search
./linear_search
```

Program filenames may vary by implementation.