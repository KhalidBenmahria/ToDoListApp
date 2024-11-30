#include <iostream>
#include <vector>
#include <string>
#include "todolist.h"

int main()
{
    std::vector<Task> tasks;
    int choice;

    while(true) {
        std::cout << "\n===To Do List App===\n";
        std::cout << "1. important addition: \n";
        std::cout << "2. View Tasks: \n";
        std::cout << "3. Update task status: \n";
        std::cout << "4. Delete Tas: \n";
        std::cout << "5. Exit: \n";
        std::cout << "6. Choose an option: \n";

        std::cin >> choice;

        if(std::cin.fail()){
            std::cin.clear();
            std::cin.ignore(10000, '\n');
            std::cout << "Invalid input. Please enter a number between 1 and 5.\n";
            continue;
        }
        std::cin.ignore();

        switch(choice){
        case 1: {
            std::string description;
            std::cout << "Enter a Task description: ";
            std::getline(std::cin, description);
            addTask(tasks, description);
            break;
        }
        case 2:
            showTasks(tasks);
            break;
        case 3:  {
            if(tasks.empty()) {
                std::cout << "No tasks to update." << std::endl;
                break;
            }
            showTasks(tasks);
            std::cout << "Enter the task number to update: ";
            int id;
            std::cin >> id;
            toggleTaskCompletion(tasks, id);
            break;
        }
        case 4: {
            if(tasks.empty()) {
                std::cout << "No tasks to delete." << std::endl;
                break;
            }
            showTasks(tasks);
            std::cout << "Enter the task number to delete: ";
            int id;
            std::cin >> id;
            deleteTask(tasks, id);
            break;
        }
        case 5:{
            std::cout << "GoodBye!" << std::endl;
            return 0;
        }
        default:
            std::cout << "Invalid option!" << std::endl;
        }
    }
    return 0;
}
