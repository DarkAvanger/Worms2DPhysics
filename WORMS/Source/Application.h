#pragma once

#include "p2List.h"
#include "Module.h"
#include "ModuleWindow.h"
#include "ModuleRender.h"
#include "ModuleTextures.h"
#include "ModuleInput.h"
#include "ModuleAudio.h"
#include "ModulePlayer.h"
#include "ModulePhysics.h"
#include "ModuleScene.h"
#include "Timer.h"


class Application
{
public:
	ModuleRender* renderer;
	ModuleWindow* window;
	ModuleTextures* textures;
	ModuleInput* input;
	ModuleAudio* audio;
	ModulePlayer* player;
	ModulePhysics* physics;

private:

	p2List<Module*> list_modules;
	Timer globalTimer;
	float deltaTime = 0;
	float sleepTime= 0;
public:

	Application();
	~Application();

	bool Init();
	UpdateStatus Update();
	bool CleanUp();

private:

	void AddModule(Module* mod);
};