# Submission Results

## Final Score: 100/100 (Full Score)

### Submission Details
- **Submission ID**: 766403
- **Problem ID**: 1062 (有限背包 - Bounded Knapsack)
- **Status**: Accepted
- **Total Score**: 100 points
- **Submission Count**: 2 (1 failed due to missing Makefile, 1 successful)

### Test Point Results
All 10 test points passed successfully:

| Test Point | Result | Score | Time (ms) | Memory (bytes) |
|------------|--------|-------|-----------|----------------|
| 1 | Accepted | 10.0 | 1 | 3,989,504 |
| 2 | Accepted | 10.0 | 3 | 3,899,392 |
| 3 | Accepted | 10.0 | 2 | 3,866,624 |
| 4 | Accepted | 10.0 | 2 | 3,903,488 |
| 5 | Accepted | 10.0 | 2 | 3,887,104 |
| 6 | Accepted | 10.0 | 1 | 3,846,144 |
| 7 | Accepted | 10.0 | 1 | 3,923,968 |
| 8 | Accepted | 10.0 | 1 | 3,854,336 |
| 9 | Accepted | 10.0 | 4 | 3,989,504 |
| 10 | Accepted | 10.0 | 4 | 3,813,376 |

### Resource Usage
- **Total Time**: 21 ms (well under the 200 ms limit)
- **Peak Memory**: ~3.9 MB (well under the 64 MiB limit)
- **Disk Usage**: 0 bytes (as required)

### Algorithm Details
The solution implements a **bounded knapsack** algorithm with **binary representation optimization**:

1. **Algorithm**: Dynamic Programming with binary splitting
2. **Time Complexity**: O(m * Σlog(pi)) where m is capacity and pi is count of item type i
3. **Space Complexity**: O(m)

#### Key Optimizations:
- Binary representation reduces the number of DP iterations
- Instead of processing pi items individually, split into groups: 1, 2, 4, ..., 2^k, remainder
- This reduces time complexity from O(m * Σpi) to O(m * Σlog(pi))

### Implementation Files
- `main.cpp`: Core solution with optimized DP algorithm
- `Makefile`: Build configuration (g++ with -O2 optimization)
- `.gitignore`: Git ignore rules for build artifacts

### Git Commits
1. `6e00b96`: Initial implementation with binary optimization
2. `72bb3a5`: Fix .gitignore to allow Makefile tracking
