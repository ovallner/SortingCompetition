#include "sortingcompetition.h"
#include <string>
#include <fstream>
#include <iostream>
#include <vector>
using namespace std;

SortingCompetition::SortingCompetition()
{

}

SortingCompetition::SortingCompetition(const string &inputFileName)
{
    setFileName(inputFileName);
}

void SortingCompetition::setFileName(const string &inputFileName)
{
    inFile.open(inputFileName);

    // Check if input file opened correctly
    if(!inFile)
    {
        cerr << "Input file \"" << inputFileName << "\" not opened correctly\n";
        exit(EXIT_FAILURE);
    }
}

bool SortingCompetition::readData()
{
    if(inFile.fail())
        return false;

    tokens.clear();
    string word;
    while(!(inFile.eof()))
    {
        inFile >> word;
        tokens.push_back(word);
    }
    return true;
}

bool SortingCompetition::prepareData()
{
    tokensCopy = tokens;
    return true;
}
