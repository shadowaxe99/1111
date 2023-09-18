
#include <gtest/gtest.h>
#include "../src/task_automation.cpp"

TEST(TaskAutomation, TestTaskCreation) {
    TaskAutomation taskAutomation;
    taskAutomation.createTask("Test Task", "Test Description");
    EXPECT_EQ(taskAutomation.getTaskCount(), 1);
}

TEST(TaskAutomation, TestTaskDeletion) {
    TaskAutomation taskAutomation;
    taskAutomation.createTask("Test Task", "Test Description");
    taskAutomation.deleteTask("Test Task");
    EXPECT_EQ(taskAutomation.getTaskCount(), 0);
}

TEST(TaskAutomation, TestTaskExecution) {
    TaskAutomation taskAutomation;
    taskAutomation.createTask("Test Task", "Test Description");
    EXPECT_TRUE(taskAutomation.executeTask("Test Task"));
}

int main(int argc, char **argv) {
    testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}
