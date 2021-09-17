#include "Invoker.h"

void Invoker::addCommand(const std::shared_ptr<Command>& command) {
	commands.push_back(command);
}

void Invoker::executeCommands() {
	for(const std::shared_ptr<Command>& command : commands) {
		command->execute();
	}
}