#ifndef Includes
#define Includes

#include "Includes.h"

#endif

void listPrint(int * tasklist){
    int j = 0;
    
    cout << "Incomplete Tasks: " << endl; // Print incomplete tasks first
    cout << endl;

    while(/*FIX ME*/){
        *(incomTasksList + j).Print();
    }

    j = 0;

    cout << "Completed Tasks: " << endl;
    cout << endl;

    while(/*FIX ME*/){
        *(comTasksList + j).Print();
    }
}

void main() {

    Task comTasks[20], incomTasks[20]; // Store tasks in arrays for complete or incomplete

    int * comTasksList = &comTasks[0]; //For passing array to function

    int * incomTasksList = &incomTasks[0];
    
    cout << "Current To Do List: " << endl; // See to do list upon startup
    cout << endl;

    for(int i = 0; i < 20; ++i){ // This loop could be improved upon
        tasks[i].print();
    }

    char z;

    cout << "Press \"n\" to create a new task, \"c\" to complete a task, \"e\" to edit an existing task, \"d\" to delete a task, or any other key to exit." << endl; 

    cin >> z;


    while(z == 'n' || z == 'c' || z == 'e' || z == 'd'){ // While loop to edit to do list
        
        if(z == 'n'){ // Add new tasks to list
            string newtask;
            int nmonth, nday, nyear;
            cout << "Task name: ";
            getline()
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

        }

        // Print updated List here

        cout << "Press \"n\" to create a new task, \"c\" to complete a task, \"e\" to edit an existing task, \"d\" to delete a task, or any other key to exit." << endl; 

        cin >> z;

    }


    return 0;
}