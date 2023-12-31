#ifndef Includes_Included
#define Includes_Included

#include "Includes.h"

#endif

using namespace std;

void listPrint(ToDo * tasksList, int i){
    
    int j = 0;
    
    cout << "Incomplete Tasks: " << endl; // Print incomplete tasks first
    cout << endl;

    for(int j = 0; j < i; ++j){
        if((tasksList[j]).done == 1){
            (tasksList[j]).Print();
        }
    }

    j = 0;

    cout << "Completed Tasks: " << endl;
    cout << endl;

    for(int j = 0; j < i; ++j){
        if((tasksList[j]).done == 0){
            (tasksList[j]).Print();
        }
    }
}

int main() {

    int s = 0;

    ToDo tasks[20]; // Store tasks in array

    ToDo * tasksList = &tasks[0]; //For passing array to function

    ifstream get;

    get.open("ToDoList.txt"); // Open data from last list

    string line;

    while(getline(get, line)){
        tasks[s].task = line;
        get >> tasks[s].month >> tasks[s].day >> tasks[s].year >> tasks[s].done;
        ++s;
    }

    get.close();

    listPrint(tasksList, s); // See ToDo list upon startup.

    char z;

    int nmonth, nday, nyear;
    bool incom = 1;

    int x;
    int y;

    do { // While loop to edit to do list

        cout << "Press \"n\" to create a new task, \"c\" to complete a task, \"e\" to edit an existing task, \"d\" to delete a task, or any other key to exit." << endl; 

        cin >> z;        

        switch (z) {

            case('n'): {// Add new tasks to list
                string newtask;
                //int nmonth, nday, nyear;
                incom = 1;
                cout << "Task name: ";
                cin.ignore();
                getline(cin, newtask);
                cout << "Due Date (m d y): ";
                cin >> nmonth >> nday >> nyear;
                ToDo addtask(newtask, nmonth, nday, nyear, incom);
                tasks[s] = addtask;
                s += 1;
                break;
            }

            case('c'): { // Mark tasks as completed (different from deleting)
                //int x;
                cout << "Enter the number for the task you wish to complete: ";
                cin >> x;
                tasks[x - 1].done = 0;
                break;
            }

            case('e'): { // Change an existing task.
                //int x;
                cout << "Enter the number of the task you wish to alter: ";
                cin >> x;
                ToDo ntask; // Easy to create a new task to replace the old
                tasks[x] = ntask;
                break;
            }

            case('d'): {// Delete a task
                //int y;
                cout << "Enter the number of the task to delete: ";
                cin >> y;
                for(int j = y - 1; j < s - 1; ++j){
                    tasks[j] = tasks[j + 1];
                }
                s -= 1;
                break;
            }

        }
        cout << endl;

        // Print updated List here
        listPrint(tasksList, s);


    } while(z == 'n' || z == 'c' || z == 'e' || z == 'd');

    ofstream save;

    save.open("ToDoList.txt");

    int q = 0;

    for(q = 0; q < s; ++q){
        save << tasks[q].task << endl;
        save << tasks[q].month << endl;
        save << tasks[q].day << endl;
        save << tasks[q].year << endl;
        save << tasks[q].done << endl;
    }

    save.close();

    return 0;
}