#pragma once

class Receiver {
  public:
	virtual void performCut() = 0;
	virtual void performCopy() = 0;
	virtual void performPaste() = 0;
};