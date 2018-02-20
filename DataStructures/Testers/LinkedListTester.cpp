//
//  LinkedListTester.cpp
//  TimerProject
//
//  Created by Segota, Sheradon on 2/20/18.
//  Copyright © 2018 Segota, Sheradon. All rights reserved.
//

#include "LinkedListTester.hpp"

void LinkedListTester :: testListBasics()
{
    LinkedList<int> numbers;
    numbers.add(9)
    cout << numbers.getFront()>getData() << " Is is at the front of the list and should be 9" << endl;
    cout << number.getEnd()->getData() << " is at the end of the list and should be 0"<< endl;
    
    numbers.add(0);
    cout << numbers.getFront()>getData() << " Is is at the front of the list and should be 9" << endl;
    cout << number.getEnd()->getData() << " is at the end of the list and should be 9"<< endl;
    
    numbers.addAtindex(1,2);
    numbers.add(324);
    
    cout << numbers.getFront()>getData() << " Is is at the front of the list and should be 9" << endl;
    cout << number.getEnd()->getData() << " is at the end of the list and should be 324"<< endl;
    
    cout <<"This loop shuld print 4 lines" << endl;
    for (int index = 0; index < numbers.getSize(); index++)
    {
        cout << numbers.getFromIndex(index) << endl;
    }
    
    numbers.remove(0);
    numbers.add(32567);
    numbers.addAtIndex(0,2312);
                   
    cout << numbers.getFront()>getData() << " Is is at the front of the list and should be 2312" << endl;
    cout << number.getEnd()->getData() << " is at the end of the list and should be 32567"<< endl;
}
void LinkedListTester :: testListWithData()
{
    Timer listTimer;
    
    listTimer.startTimer();
    LinkedList<CrimeData> crimes = FileController :: readDataToList("/Users/sseg9117/Documents/Data Structures/TimerProject/DataStructures/Data/crime.csv");
    listTimer.stopTimer();
    cout << "This is how long it took to read the structures into our custom data structure"; << endl;
    listTimer.displayInformation();
    
    listTimer.resetTimer();
    cout << "Here is how long it takes to access a random data value" << endl;
    listTimer.startTimer();
    int randomLocation = (rand() * rand()) % crimes.getSize();
    cout << "This random index is " << randomLocation << endl;
    double totalViolentRate = crimes.getFromIndex(randomLocation).getAllCiolentRates();
    listTimer.stopTimer();
    cout << "The randomc rime stat is: " << totalViolentRate << " , and here is the time" <<endl;
    listTImer.displayInformation();
    
        
    
}
