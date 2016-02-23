#include "sortingcompetition.h"
#include <string>
#include <fstream>
#include <iostream>

using namespace std;

SortingCompetition::SortingCompetition()
{

}

void SortingCompetition::setFileName(const string& inputFileName)
{
    inFile.open(inputFileName);

    // Check if input file opened correctly
    if(!inFile)
    {
        cerr << "Input file \"" << inputFileName << "\" not opened correctly\n";
        exit(EXIT_FAILURE);
    }
}

