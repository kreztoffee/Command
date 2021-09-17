#include "CutCommand.h"
#include <iostream>
#include <utility>

CutCommand::CutCommand(std::string_view name, std::shared_ptr<Receiver> receiver) : Command(name, std::move(receiver)) {

}

void CutCommand::execute() {
	std::cout << "execute " << name << " command\n";
	receiver->performCut();
}