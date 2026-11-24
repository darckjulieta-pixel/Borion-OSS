#pragma once
#include "Module.h"
#include "../ModuleManager.h"

class TriggerBot : public IModule {
private:
	int delay = 0;
	int Odelay = 0;
	bool eatFix = true;

public:
	TriggerBot();
	~TriggerBot();

	virtual const char* getModuleName() override;
	virtual void onTick(C_GameMode* gm) override;
};
