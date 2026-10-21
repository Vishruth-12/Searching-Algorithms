# Searching Algorithms

A collection of common searching algorithms implemented in C, C++, Java, and Python.

## Algorithms included

- Linear Search
- Binary Search (iterative)
- Jump Search
- Interpolation Search
- Exponential Search

Each language folder contains examples for all five algorithms.

## Complexity overview

| Algorithm | Best | Average | Worst | Extra space |
|---|---:|---:|---:|---:|
| Linear Search | O(1) | O(n) | O(n) | O(1) |
| Binary Search | O(1) | O(log n) | O(log n) | O(1) iterative |
| Jump Search | O(1) | O(√n) | O(√n) | O(1) |
| Interpolation Search | O(1) | O(log log n)* | O(n) | O(1) |
| Exponential Search | O(1) | O(log n) | O(log n) | O(1) iterative |

*Interpolation search's average-case bound assumes values are approximately uniformly distributed.

Binary, jump, interpolation, and exponential search expect sorted input. The implementations use ascending integer arrays/lists.

## Folder structure

- `C/` — C implementations
- `C++/` — C++ implementations
- `Java/` — Java implementations
- `Python/` — Python implementations

## Run examples

C (Jump Search; requires a C compiler and math library):

```bash
gcc C/jump_search.c -o jump_search -lm
./jump_search
```

C++:

```bash
g++ C++/exponential_search.cpp -o exponential_search
./exponential_search
```

Java:

```bash
javac Java/InterpolationSearch.java
java -cp Java InterpolationSearch
```

Python:

```bash
python Python/exponential_search.py
```

The examples use fixed sample arrays and print the index when the target is found, or report that it was not found.