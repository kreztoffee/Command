#pragma once

#include "Command.h"

class CutCommand : public Command  {
  public:
	CutCommand(std::string_view name, std::shared_ptr<Receiver> receiver);
	void execute() override;
};
