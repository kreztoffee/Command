#pragma once

#include <memory>
#include <string>
#include "Receiver.h"

class Command {
  public:
	Command(std::string_view name, std::shared_ptr<Receiver> receiver);
	virtual void execute() = 0;
  protected:
	std::string name;
	std::shared_ptr<Receiver> receiver;
};
