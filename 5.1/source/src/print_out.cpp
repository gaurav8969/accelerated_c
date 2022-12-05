/*this source file will basically detect the word to be highlighted and creates a string permuted according
to it, we will probably also type the word to be highlighted in caps as a convenient form of highlighting*/
#include <iostream>
#include<vector>
#include <string>
#include "..\include\print_out.h"
using namespace std;
#include "..\include\sort_detect.h" 
int print_out(vector<string> unsorted, string word,int margin)
{
    string left, right; //the two sides of the permuted index
    int indice = detect(word,unsorted);
    int i = 0, size = unsorted.size();
    while(i != size-1)
    {
        if(i < indice)
            left = left + " " + unsorted[i];
        else
            right = right + unsorted[i];
    }
    string left_padded = string(' ',margin-left.size()) + left; //padding only happens on left so no right_padded
    cout << left_padded <<"\t" << right;
    return 0;
}