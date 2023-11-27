#ifndef Includes
#define Includes

#include "Includes.h"

#endif

class ToDo {

    public:

    string Task;

    int month, day, year;

    bool done;

    // publicly avalible varibles


    // publicly avalible functions

    Task(){
        Task = "Assaignment";
        month = 1;
        day = 1;
        year = 2000;
        done = 0;
    }
    Task(string Task, int month, int day, int year, bool done){
        Task = Task;
        month = month;
        day = day;
        year = year;
        done = done;
    }
    void Print(){
        cout << Task << endl;
        cout << "Due date: " << month << " / " << day << " / " << year << endl;
    }

    private:

    // Privately avalible functions

}