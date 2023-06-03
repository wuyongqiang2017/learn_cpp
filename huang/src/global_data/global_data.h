//
// Created by trunk on 12/21/22.
//

#ifndef LEARN_CPP_SETTINGS_H
#define LEARN_CPP_SETTINGS_H
#include <iostream>
#include <memory>
#include <mutex>
#include <yaml-cpp/yaml.h>
#include <yaml-cpp/node/parse.h>


namespace huang {
struct mqtt{
  std::string host;
  int port;
};

struct settings {
  mqtt mqtt_;
};

class GlobalData {
public:
  GlobalData() = default;
  ~GlobalData() = default;
  GlobalData(const GlobalData &) = delete;
  GlobalData &operator=(const GlobalData &) = delete;
  static GlobalData *Instance();
  void Init(const std::string &yaml_file);

private:
  void ParserYaml();
  std::string version_ = "v1.0.0";
  std::string yaml_file_;
  std::shared_ptr<settings> settings_;
};
} // namespace huang

#endif // LEARN_CPP_SETTINGS_H
