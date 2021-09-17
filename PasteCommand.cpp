#include "PasteCommand.h"
#include <iostream>
#include <utility>

PasteCommand::PasteCommand(std::string_view name, std::shared_ptr<Receiver> receiver) : Command(name, std::move(receiver)){

}

void PasteCommand::execute() {
	std::cout << "execute " << name << " command\n";
	receiver->performPaste();
}