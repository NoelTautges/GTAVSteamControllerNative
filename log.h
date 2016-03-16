#pragma once

#define DEBUGOUT( X, ... ) Log::Debug( X, __VA_ARGS__ )

class Log {
public:
	static void Init(HMODULE hModule);
	static void Debug(const char* fmt, ...);
	static void Msg(const char* fmt, ...);
	static void Error(const char* fmt, ...);
	static void Fatal(const char* fmt, ...);
};