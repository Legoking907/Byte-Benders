#ifndef Includes
#define Includes

#include "Includes.h"
#include <iostream>

#endif

using namespace std;

class ToDo {

    public:

    

    // publicly avalible varibles


    // publicly avalible functions

    ToDo(){
        task = "Assaignment";
        month = 1;
        day = 1;
        year = 2000;
        done = 0;
    }
    ToDo(string Task, int month, int day, int year, bool done){
        Task = Task;
        month = month;
        day = day;
        year = year;
        done = done;
    }
    void Print(){
        cout << task << endl;
        cout << "Due date: " << month << " / " << day << " / " << year << endl;
        cout << endl;
    }

    private:

    string task;

    int month, day, year;

    bool done;

    // Privately avalible functions

};