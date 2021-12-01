#ifndef __MODULESCENE_H__
#define __MODULESCENE_H__

#include "Module.h"
#include "Globals.h"
#include "Scene.h"


#define SCENES_NUM 1


enum SCENE_NUM
{

};

class ModuleScene : public Module
{
public:

	// Constructor
	ModuleScene(Application* app, bool start_enabled = true);

	// Destructor
	~ModuleScene();

	
	bool Start();

	UpdateStatus PreUpdate();

	
	UpdateStatus Update();

	
	UpdateStatus PostUpdate();


	bool ChangeCurrentScene(uint index, int frames);


	bool CleanUp();

public:

	int lastSceneID;

private:

	int newScene;


};

#endif // __MODULESCENE_H__

