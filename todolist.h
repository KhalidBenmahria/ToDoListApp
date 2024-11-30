#ifndef TODOLIST_H
#define TODOLIST_H
#include <string>
#include <vector>
struct Task{
    int id;
    std::string description;
    bool isCompleted;
};

void addTask(std::vector<Task>& tasks, const std::string& description);
void showTasks(const std::vector<Task>& tasks);
void toggleTaskCompletion(std::vector<Task>& tasks, int id);
void deleteTask(std::vector<Task>& tasks, int id);

#endif // TODOLIST_H
