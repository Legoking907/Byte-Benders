#ifndef Includes
#define Includes

#include "Includes.h"

#endif

class ToDo {

    public:

    string Task;

    int month, day, year;

    // publicly avalible varibles


    // publicly avalible functions

    Task(){
        Task = "Assaignment";
        month = 1;
        day = 1;
        year = 2000;
    }
    Task(string Task, int month, int day, int year){
        Task = Task;
        month = month;
        day = day;
        year = year;
    }
    void Print(){
        
    }

    private:

    // Privately avalible functions

}