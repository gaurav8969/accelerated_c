/*for now we are going to sort the lines into separate slots of the vector but not dissecting them
into words because that is something we will need to do during scrambling and that is not something we 
are doing yet, here we are only wanting to store each line separately so we can operate upon them.*/
#include <vector>
#include <iostream>
#include <string>
#include "..\include\getline.h"
using namespace std;
int getline(vector<string> list){ //list is the repository that stores the lines obtained through this function
    int i = 0; //local variables are not initialized, this is for count btw
    string word,line;
    while (cin >> word  && word != "\n") //the extra spaces are skipped in this cin version
    {                           //for that, use the implementation getline.
        line = line + " "+ word;
    }
    list.push_back(line);
    if(cin)        
        return 1;
    else 
        return 0;
}//now this function can be called everytime we want to read another line from the input