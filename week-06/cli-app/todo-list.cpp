#include <sstream>
#include "todo-list.hpp"

TodoList::TodoList(std::vector<std::string> l) : lines(l) {}

std::string TodoList::get_all_formatted_lines() {
  std::stringstream output;
  for (unsigned int i = 0; i < lines.size(); ++i) {
    output << i + 1 << " - " << lines[i] << std::endl; 
  }
  if (lines.size() == 0) {
    output << "No todos for today! :)" << std::endl;
  }
  return output.str();
}

void TodoList::add_todo(std::string task_description) {
  lines.push_back(task_description);
}

std::string TodoList::get_to_save() {
  std::stringstream output;
  for (unsigned int i = 0; i < lines.size(); ++i) {
    output << lines[i] << std::endl;
  }
  return output.str();
}
