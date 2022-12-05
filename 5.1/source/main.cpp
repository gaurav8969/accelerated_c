#include <vector>
#include <string>
#include <iterator>
#include "include\breaker.h"
#include "include\getline.h"
#include "include\print_out.h"
#include "include\sort_detect.h"
#include "include\string_length.h"
using namespace std; //this means lets say you use a function that is present in two libararies, then
//the one in standard library is used unless you use the scope operator to use the other one.
int main()
{
    vector<string> list,words;
    while(getline(list)) //taking the input
        ;
    vector<string>::iterator i = list.begin();
    while(i != list.end())
    { 
        breaker(words,*i++);
        vector<string> sorted;
        sorted = sort(words);
        vector<string>::iterator index = sorted.begin(); // we could use i again because this is in another block
        while(index != sorted.end())
            print_out(words,*index++,length_(words));
    }
}
