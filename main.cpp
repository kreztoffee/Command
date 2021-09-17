#include <memory>
#include "Invoker.h"
#include "ObjectReceiver.h"
#include "CopyCommand.h"
#include "CutCommand.h"
#include "PasteCommand.h"

int main() {

	// make an object to receive the commands
	std::shared_ptr<ObjectReceiver> objectReceiver = std::make_shared<ObjectReceiver>();

	// make some commands
	std::shared_ptr<Command> copyCommand = std::make_shared<CopyCommand>("copy", objectReceiver);
	std::shared_ptr<Command> cutCommand = std::make_shared<CutCommand>("cut", objectReceiver);
	std::shared_ptr<Command> pasteCommand = std::make_shared<PasteCommand>("paste", objectReceiver);

	// make a new invoker and add the commands
	std::unique_ptr<Invoker> invoker = std::make_unique<Invoker>();
	invoker->addCommand(copyCommand);
	invoker->addCommand(pasteCommand);
	invoker->addCommand(cutCommand);

	// execute the commands
	invoker->executeCommands();
	return 0;
}
