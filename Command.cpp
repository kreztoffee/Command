#include "Command.h"

#include <utility>

Command::Command(std::string_view name, std::shared_ptr<Receiver> receiver) {
	this->name = name;
	this->receiver = std::move(receiver);
}