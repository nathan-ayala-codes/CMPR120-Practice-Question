#ifndef MAIN_H
#define MAIN_H
#include <iostream>
#include <vector>
#include <fstream>
#include <string>
bool findWord(std::vector<std::string> fruitNames, std::string word)
{
    for(int i = 0;i < fruitNames.size();i++)
    {
        if(fruitNames[i] == word)
        {
            return true;
        }
    }
    std::cout << "Error: Word does not exist in vector." << std::endl;
    return false;
}

int countFrequencies(std::vector<std::string> vector, std::string fruit)
{
    int count = 0;
    for(int i = 0; i < vector.size();i++)
    {
        if(vector[i] == fruit)
            count++;
    }
    return count;
}

void findUniqueValues(std::vector<std::string> vector,std::vector<std::string> uniqueValues)
{
    for (int i = 0;i<vector.size();i++)
    {
        if(!findWord(uniqueValues,vector[i]))
        {
            uniqueValues.push_back(vector[i]);
        }
    }
}




#endif // MAIN_H
