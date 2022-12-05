/*this function sorts the container then detects those words in the original string to finally 
print them out in the permuted fashion.*/
#include <string>
#include <vector>
#include <algorithm>
#include <iterator>
#include "..\include\sort_detect.h"
using namespace std;
vector<string> sort(vector<string> unsorted)
{
    sort(unsorted.begin(),unsorted.end());
    return unsorted;
}
int detect(string word ,vector<string> unsorted)
{
    vector<string>::iterator i = unsorted.begin();
    int index = 0;
    while(*i++ != word)
    {
        ++index;
    }
    return index+1;
}