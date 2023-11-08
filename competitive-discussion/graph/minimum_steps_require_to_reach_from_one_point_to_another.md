## If we only need to calculate the minimum steps to require to go from one point to another:

### If we can go UP, DOWN, LEFT and RIGHT in (4 positions):

Use **Manhattan Distance**:

```
Manhattan Distance = |x2 - x1| + |y2 - y1|
```
Suppose you want to move from point A(1, 2) to point B(4, 6) on a grid. Using the Manhattan distance formula:

Manhattan Distance = |4 - 1| + |6 - 2| = 3 + 4 = 7 steps

So, it would take 7 steps to reach point B from point A on the grid.



### If we can go UP, DOWN, LEFT, RIGHT and ALL 4 DIAGONAL positions, in total (8 positions):

Use **Chebyshev Distance**:

```
Chebyshev Distance = max(|x2 - x1|, |y2 - y1|)
```
Suppose you want to move from point A(1, 1) to point B(4, 5) on a grid where diagonal movement is allowed. Using the Chebyshev distance formula:

Chebyshev Distance = max(|4 - 1|, |5 - 1|) = max(3, 4) = 4 steps

So, it would take 4 steps to reach point B from point A on the grid when diagonal movement is allowed.
