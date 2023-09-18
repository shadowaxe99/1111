
#ifndef TASK_AUTOMATION_H
#define TASK_AUTOMATION_H

#include <string>

class TaskAutomation {
public:
    TaskAutomation();
    ~TaskAutomation();

    void addTask(const std::string& taskName, const std::string& taskCommand);
    void removeTask(const std::string& taskName);
    void executeTask(const std::string& taskName);

private:
    std::map<std::string, std::string> taskMap;
};

#endif // TASK_AUTOMATION_H
