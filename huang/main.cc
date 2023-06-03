//
// Created by trunk on 12/20/22.
//

#include "src/global_data/global_data.h"
#include <iostream>
#include <string.h>

int main(int argc, char *argv[]) {
  std::string yaml_file;
  if (2 == argc) {
    std::string argv_1 = argv[1];
    if (strcmp("-v", argv[1]) == 0 || strcmp("--version", argv[1]) == 0) {
      //    if ("-v" == argv[1] || "--version" == argv[1]) {
      std::cout << "1.0.0" << std::endl;
      return -1;
    }
    yaml_file = argv_1;
    auto global_data = huang::GlobalData::Instance();
    global_data->Init(yaml_file);
  }

  return 0;
}