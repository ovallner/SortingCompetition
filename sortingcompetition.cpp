#include "sortingcompetition.h"
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
