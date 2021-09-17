#pragma once

#include "Command.h"
#include "Receiver.h"

class CopyCommand : public Command {
  public:
	CopyCommand(std::string_view name, std::shared_ptr<Receiver> receiver);
	void execute() override;
};
