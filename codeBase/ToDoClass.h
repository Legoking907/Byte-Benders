#define ToDoClass_Included // "don't accidentally reinclude this file"

#ifndef Includes_Included
#define Includes_Included

#include "Includes.h"

#endif
#include <iostream>

using namespace std;

class ToDo {

    public:

    string task;

    int month, day, year;

    bool done;    

    // publicly available variables


    // publicly available functions

    ToDo(){
        task = "Assignment";
        month = 1;
        day = 1;
        year = 2000;
        done = 0;
    }
    ToDo(string nnewtask, int nmonth, int nday, int nyear, bool ndone){
        task = nnewtask;
        month = nmonth;
        day = nday;
        year = nyear;
        done = ndone;
    }
    void Print(){
        cout << task << endl;
        cout << "Due date: " << month << " / " << day << " / " << year << endl;
        cout << endl;
    }

    private:

    

    // Privately available functions

};