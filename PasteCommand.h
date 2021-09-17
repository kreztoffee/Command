#pragma once

#include "Command.h"

class PasteCommand : public Command {
  public:
	PasteCommand(std::string_view name, std::shared_ptr<Receiver> receiver);
	void execute() override;
};