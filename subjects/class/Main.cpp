//
// Created by yingbingzhu on 2025/2/19.
//

#include <iostream>


class Log
{
public:
  enum Level
  {
    LevelError = 0, LevelWarning, LevelInfo
  };
private:
    Level m_LogLevel = LevelInfo;
public:
  void SetLevel(Level level)
  {
    m_LogLevel = level;
  }

  void Error(const char* message)
  {
    if (m_LogLevel >= LevelError)
      std::cout << "[Error]:" << message << std::endl;
  }

  void Warn(const char* message)
  {
    if (m_LogLevel >= LevelWarning)
      std::cout << "[warning]: " << message << std::endl;
  }

  void Info(const char* message)
  {
    if (m_LogLevel >= LevelInfo)
      std::cout << "[Info]:" << message << std::endl;
  }
};


extern int Variable;

struct Entity {
  int x, y;
};


int main()
{
  Log log;
  log.SetLevel(Log::LevelWarning);
  log.Warn("Hello World!");
  std::cout << Variable << std::endl;
  std::cin.get();
}