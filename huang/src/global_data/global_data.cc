//
// Created by trunk on 12/21/22.
//
#include "global_data.h"

namespace huang {

GlobalData *GlobalData::Instance() {
  static GlobalData *instance = nullptr;
  if (!instance) {
    static std::once_flag flag;
    std::call_once(flag, [&] { instance = new (std::nothrow) GlobalData(); });
  }
  return instance;
}

void GlobalData::ParserYaml() {
  auto node = YAML::LoadFile(yaml_file_);
  for (auto foo : node["mqtt"]) {
    auto k = foo.first.as<std::string>();
    if (k == "host") {
      settings_->mqtt_.host = foo.second.as<std::string>();
    } else if (k == "port") {
      settings_->mqtt_.port = foo.second.as<int>();
    }
  }
}

void GlobalData::Init(const std::string &yaml_file) {
  yaml_file_ = yaml_file;
  settings_ = std::make_shared<settings>();
  ParserYaml();
  std::cout << "global_data.settings_.mqtt_host = " << settings_->mqtt_.host
            << std::endl;
  std::cout << "global_data.settings_.mqtt_port = " << settings_->mqtt_.port
            << std::endl;
}

}