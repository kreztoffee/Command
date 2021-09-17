#pragma once

#include <vector>
#include "Command.h"

class Invoker {
  public:
	void addCommand(const std::shared_ptr<Command>& command);
	void executeCommands();

  private:
	std::vector<std::shared_ptr<Command>> commands;
};
