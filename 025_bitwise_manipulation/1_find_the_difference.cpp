#include <iostream>
#include <vector>

int ExtraCharacterIndex(string firstString, string secondString)
{
    // Your code will replace this placeholder return statement
    int result = 0;
    int m = firstString.length();
    int n = secondString.length();

    int i;
    for (i=0;i<m;i++) {
        int val1 = firstString[i];
        result ^= val1;
    }
    
    for (i=0;i<n;i++) {
        int val2 = secondString[i];
        result ^= val2;
    }

    char c = result;

    if (m > n) {
        int index = firstString.find(c);
        return index;
    } else {
        int index = secondString.find(c);
        return index;
    }

    return -1;
}
