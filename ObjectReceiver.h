#pragma once

#include "Receiver.h"
#include <iostream>

class ObjectReceiver : public Receiver {
  public:
	void performCut() override;
	void performCopy() override;
	void performPaste() override;
};