#include "CopyCommand.h"
#include <iostream>
#include <utility>

CopyCommand::CopyCommand(std::string_view name, std::shared_ptr<Receiver> receiver) : Command(name, std::move(receiver)){

}

void CopyCommand::execute() {
	std::cout << "execute " << name << " command\n";
	receiver->performCopy();
}