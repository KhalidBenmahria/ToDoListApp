#include <iostream>
#include <string>
#include <vector>
#include "todolist.h"
void addTask(std::vector<Task>& tasks, const std::string& description)
{    int id = tasks.empty() ? 1 : tasks.back().id + 1;
    tasks.push_back({id, description, false});
    std::cout << " The Task is successfully added." << std::endl;
}
void showTasks(const std::vector<Task>& tasks)
{
    if(tasks.empty()){
        std::cout << "There  " << std::endl;
    }
    std::cout << "\nThe List of the Tasks: \n";
    for(const auto& task : tasks){
        std::cout << task.id << ". "
                  << (task.isCompleted ? "Completed" : "In Progress")
                  << task.description << std::endl;
        std::cin.ignore();
    }
}
void toggleTaskCompletion(std::vector<Task>& tasks, int id)
{
    for(auto& task : tasks){
        if(task.id == id){
            task.isCompleted = !task.isCompleted;
            std::cout << "Mission status completed successfully" << std::endl;
            return;
        }
    }
    std::cout << "There no Tasks currently" << std::endl;
}
void deleteTask(std::vector<Task>& tasks, int id){
    for(auto it = tasks.begin(); it != tasks.end(); ++it){
        if(it->id == id){
            tasks.erase(it);
            std::cout <<"The tasks is deleted" << std::endl;
            return;
        }
    }
    std::cout << "There is no Tasks currently" << std::endl;
}
