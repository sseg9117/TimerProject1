//
//  FileController.cpp
//  TimerProject
//
//  Created by Segota, Sheradon on 2/2/18.
//  Copyright © 2018 Segota, Sheradon. All rights reserved.
//

#include "FileController.hpp"


vector<CrimeData> FileController :: readCrimeDataToVector(string fileName)
{
    std :: vector<CrimeData> crimeVector;
    string currentCSVLine;
    int rowCount = 0;
    
    ifstream dataFile(fileName);
    
    //If the file exists at that path
    if (dataFile.is_open())
    {
        //eof means end of file
        while (!dataFile.eof())
        {
            getline(dataFile, currentCSVLine, '\n');
            if (rowCount != 0)
            {
                //Create a CrimeData instance from the line
                CrimeData row(currentCSVLine);
                crimeVector.push_back(row);
            }
            rowCount++;
        }
        dataFile.close();
    }
    else
    {
        cerr << "NO FILE" << endl;
    }
    
    return crimeVector;
}



