# C - Search Algorithms

## Description

* [`tests/`](./tests) - Main functions provided by Holberton School to test the files.
* [`search_algos.h`](./search_algos.h) - Header file with function prototypes and with libraries.

## Tasks

* **0. Linear search**
  * [`0-linear.c`](./0-linear.c) - Function that searches for a value in an array of integers using the [Linear search algorithm](https://en.wikipedia.org/wiki/Linear_search).
* **1. Binary search**
  * [`1-binary.c`](./1-binary.c) - Function that searches for a value in a sorted array of integers using the [Binary search algorithm](https://en.wikipedia.org/wiki/Binary_search_algorithm).
* **2. Big O #0**
  * [`2-O`](./2-O) - Time complexity (worst case) of a linear search in an array of size n.
* **3. Big O #1**
  * [`3-O`](./3-O) - Space complexity (worst case) of an iterative linear search algorithm in an array of size n.
* **4. Big O #2**
  * [`4-O`](./4-O) - Time complexity (worst case) of a binary search in an array of size n.
* **5. Big O #3**
  * [`5-O`](./5-O) - Space complexity (worst case) of a binary search in an array of size n.
* **6. Big O #4**
  * [`6-O`](./6-O) - Space complexity of this function/algorithm:
```
  int **allocate_map(int n, int m)
  {
    int **map;

    map = malloc(sizeof(int *) * n);
    for (size_t i = 0; i < n; i++)
    {
        map[i] = malloc(sizeof(int) * m);
    }
    return (map);
  }
```
* **7. Jump search**
  * [`100-jump.c`](./100-jump.c) - Function that searches for a value in a sorted array of integers using the [Jump search algorithm](https://en.wikipedia.org/wiki/Jump_search)
* **8. Big O #5**
  * [`101-O`](./101-O) - Time complexity (average case) of a jump search in an array of size n, using `step = sqrt(n)`

## Author
* Felipe Villamizar - [GitHub](https://github.com/felipevcc)
