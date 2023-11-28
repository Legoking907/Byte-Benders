#ifndef Includes
#define Includes

#include "Includes.h"
#include <iostream>

#endif

using namespace std;

void listPrint(int * taskList, int i){
    int j = 0;
    
    cout << "Incomplete Tasks: " << endl; // Print incomplete tasks first
    cout << endl;

    for(int j = 0; j < i; ++j){
        if(*(taskList + j).bool == 1){
            *(taskList + j).print()
        }
    }

    j = 0;

    cout << "Completed Tasks: " << endl;
    cout << endl;

    for(int j = 0; j < i; ++j){
        if(*(taskList + j).bool == 0){
            *(taskList + j).print()
        }
    }
}

void main() {

    int s = 0;

    ToDo tasks[20]; // Store tasks in array

    int * tasksList = &tasks[0]; //For passing array to function

    
    cout << "Current To Do List: " << endl; // See to do list upon startup
    cout << endl;

    listPrint(*tasksList, s);

    char z;

    cout << "Press \"n\" to create a new task, \"c\" to complete a task, \"e\" to edit an existing task, \"d\" to delete a task, or any other key to exit." << endl; 

    cin >> z;


    while(z == 'n' || z == 'c' || z == 'e' || z == 'd'){ // While loop to edit to do list
        
        if(z == 'n'){ // Add new tasks to list
            string newtask;
            int nmonth, nday, nyear;
            cout << "Task name: ";
            getline(newtask, 100);
            cout << "Due Date: ";
            cin >> nmonth, nday, nyear;
            tasks[i].Task(newtask, month, day, year)
            s += 1;
        }

        if(z == 'c'){ // Mark tasks as completed (different from deleting)
            int x;
            cout << "Enter the number of the task to complete: ";
            cin >> x;
            incomTasks[x].bool = 0;
        }

        if(z == 'e'){ // Change an existing task.
            int x;
            cout << "Enter the number of the task you wish to alter: ";
            cin >> x;
            Task ntask; // Easy to create a new task to replace the old
            incomTasks[x] = ntask;
        }

        if(z == 'd'){ // Delete a task
            int y;
            cout << "Enter the number of the task to delete: ";
            cin >> y;
            for(int j = y - 1; y < i; ++j){
                tasks[j] = tasks[j + 1];
            }
            i -= 1;
        }

        // Print updated List here
        listPrint(*tasksList, i);

        cout << "Press \"n\" to create a new task, \"c\" to complete a task, \"e\" to edit an existing task, \"d\" to delete a task, or any other key to exit." << endl; 

        cin >> z;

    }


    return 0;
}