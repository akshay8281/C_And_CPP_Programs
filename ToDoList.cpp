#include <iostream>
#include <vector>

int main() {
    std::vector<std::string> tasks;
    std::string task;

    while (true) {
        std::cout << "Enter a task (or type 'exit' to quit): ";
        std::getline(std::cin, task);

        if (task == "exit") {
            break;
        }

        tasks.push_back(task);
    }

    std::cout << "To-Do List:" << std::endl;
    for (int i = 0; i < tasks.size(); i++) {
        std::cout << i + 1 << ". " << tasks[i] << std::endl;
    }

    return 0;
}
