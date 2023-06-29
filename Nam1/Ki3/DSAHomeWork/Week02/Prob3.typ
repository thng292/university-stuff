=

```cpp
// Light disks are true, Dark disks are false
// Assuming: true > false
void AlternatingDisk(bool* disks, int length) {
    for (int i = 1; i < length; i++) {
        int j = i;
        while (j - 1 >= 0 && disks[j - 1] < disks[j]) {
            SwapDisk(j, j - 1);
            j--;
        }
    }
}
```

- The above algorithm follows the a brute-force approach. The operations available make it hard to come up with a better approach
