/*this function will break up a string into its component words and store them in the vector
we provide.*/
#include <vector>
#include <iostream>
#include <string>
#include "..\include\breaker.h"
using namespace std;
int breaker(vector<string>& repository,string line){
    int i,j;
    i = 0, j = 0;
    while(j != line.length()-1)
    {
        while(!isspace(line[j++]))
        {
            ;
        }
        repository.push_back(line.substr(i,j));
        i = j;
    }
    return 0;
}