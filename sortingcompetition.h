#include <fstream>
#include <vector>

#ifndef SORTINGCOMPETITION_H
#define SORTINGCOMPETITION_H

#include <fstream>
#include <vector>

class SortingCompetition
{
private:
    //You are free to determine your own internal
    //implementation with the following stipulations:
    //1) when the prepare method is called, you must make a
    //copy of the original dataset into another instance-level
    //data structure which will be used by the sort method. This will
    //allow for multiple executions of the sort method in order to
    //get better timing data.
    //2) your data structure must be linear (no trees).

    std::ifstream inFile;
    std::vector<std::string> tokens;
    std::vector<std::string> tokensCopy;

public:

    //basic constructor that accepts an input
    //file name
    SortingCompetition();
    SortingCompetition(const std::string& inputFileName);


    //set the input file name
    void setFileName(const std::string& inputFileName);

    //read the data from the file and store it in
    //a instance-level linear data structure. The first line
    //of the file will contain a single integer indicating
    //the number of words to read from the file. Words will
    //be separated (delimited) by white-space characters.
    //
    //No sorting actions can be done in this method.
    //This includes no duplicate removal or anything else
    //that could make your sorting more efficient later.
    //Literally, the 5th word in the file should be
    //in the 5th place in your data structure.
    bool readData();

    //copy the data from the original data structure
    //into a second location that will be used for sorting.
    //This will allow you to sort the same data set (with
    //the same starting order of elements) multiple times.
    //You can then calculate the average of execution times for
    //one data set against one algorithm.
    //No sorting actions can be done in this method.
    bool prepareData();

    //sort the data based on the criteria set forth in the
    //hand out. sortData shall operate on the copy of the data.
    //THIS IS THE FUNCTION THAT WILL BE TIMED.
    void sortData();

    //using outputFileName, write the "sorted" data structure
    //to the file as a newline-delimited list. This will be used to test the
    //validity of your sorting algorithm (in other words, did it sort
    //properly?).
    void outputData(const std::string& outputFileName);
};

#endif // SORTINGCOMPETITION_H
