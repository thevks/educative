#include <iostream>
#include <vector>

int ExtraCharacterIndex(string firstString, string secondString)
{
    // Your code will replace this placeholder return statement
    int result = 0;
    int m = firstString.length();
    int n = secondString.length();

    int i;
    for (i=0;i<m;i++)
        result ^= int(firstString[i]);
    
    for (i=0;i<n;i++)
        result ^= int(secondString[i]);

    char c = char(result);

    if (m > n) {
        for (i=0;i<m;i++)
            if (firstString[i] == c)
                return i;
    } else {
        for (i=0;i<n;i++)
            if (firstString[i] == c)
                return i;
    }

    return -1;
}
