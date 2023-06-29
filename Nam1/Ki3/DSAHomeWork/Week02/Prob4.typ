=

If there are $m$ empty glass has the wrong position, there will be $m$ empty glass has the wrong position. The minimum swap to sastisfy the requirement is $m$. Assume that a "swap" is 2 "glass move"

== 
```cpp
void AlternatingGlasses(int glass[], int n) {
    for (int i = 1; i < n; i+=2) {
        // The glass has wrong position
        // Swap it
        swap(glass[i], glass[2 * n - i - 1]);
    }
}
```
==
```c
// Filled = 1, Empty = 0
void AlternatingGlasses(int glass[], int n) {
    int length = 2 * n;
    int lastFound = 0;
    for (int i = 1; i < length; i += 2) {
        if (glass[i] == 0) {
            // This guy is good
            continue;
        }
        // This guy is not good
        // Find a empty glass in the wrong position to swap
        for (int j = lastFound; j < length; j += 2) {
            if (glass[j] == 0) {
                Swap(glass[i], glass[j]);
                lastFound = j;
                break;
            }
        }
    }
}

```