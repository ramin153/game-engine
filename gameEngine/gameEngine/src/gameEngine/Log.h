#pragma once

#include <memory>

#include "Core.h"
#include "spdlog/spdlog.h"

namespace gameEngine {

	class GAMEENGINE_API Log
	{
	public:
		static void Init();

		inline static std::shared_ptr<spdlog::logger>& GetCoreLogger() { return s_CoreLogger; }
		inline static std::shared_ptr<spdlog::logger>& GetClientLogger() { return s_ClientLogger; }
	private:
		static std::shared_ptr<spdlog::logger> s_CoreLogger;
		static std::shared_ptr<spdlog::logger> s_ClientLogger;
	};

}


#define GE_CORE_TRACE(...)    ::gameEngine::Log::GetCoreLogger()->trace(__VA_ARGS__)
#define GE_CORE_INFO(...)     ::gameEngine::Log::GetCoreLogger()->info(__VA_ARGS__)
#define GE_CORE_WARN(...)     ::gameEngine::Log::GetCoreLogger()->warn(__VA_ARGS__)
#define GE_CORE_ERROR(...)    ::gameEngine::Log::GetCoreLogger()->error(__VA_ARGS__)
#define GE_CORE_FATAL(...)    ::gameEngine::Log::GetCoreLogger()->critical(__VA_ARGS__)

// Client log macros
#define GE_TRACE(...)	      ::gameEngine::Log::GetClientLogger()->trace(__VA_ARGS__)
#define GE_INFO(...)	      ::gameEngine::Log::GetClientLogger()->info(__VA_ARGS__)
#define GE_WARN(...)	      ::gameEngine::Log::GetClientLogger()->warn(__VA_ARGS__)
#define GE_ERROR(...)	      ::gameEngine::Log::GetClientLogger()->error(__VA_ARGS__)
#define GE_FATAL(...)	      ::gameEngine::Log::GetClientLogger()->critical(__VA_ARGS__)