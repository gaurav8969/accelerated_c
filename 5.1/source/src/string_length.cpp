#include <vector>
#include <string>
#include "..\include\string_length.h"
using namespace std;
int length_(vector<string>unsorted)
{
    int length = 0, index = 0;
    while(index != unsorted.size() - 1)
        length = length + unsorted[index++].length();
    return (length + index);
}