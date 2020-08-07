#pragma once
#ifdef GE_PLATFORM_WINDOWS

extern gameEngine::Aplication* gameEngine::CreateAplication();
int main(int argc, char** argv)
{
	gameEngine::Log::Init();
	gameEngine::Log::GetCoreLogger()->info("hi");
	gameEngine::Log::GetCoreLogger()->warn("bye");

	gameEngine::Aplication* app = gameEngine::CreateAplication();
	app->run();
	delete app;
}

#endif