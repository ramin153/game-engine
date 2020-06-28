#pragma once
#include <iostream>
#ifdef GE_PLATFORM_WINDOWS
extern gameEngine::Aplication* gameEngine::CreateAplication();
int main(int argc, char** argv)
{
	
	gameEngine::Aplication* app = gameEngine::CreateAplication();
	app->run();
	delete app;
}

#endif