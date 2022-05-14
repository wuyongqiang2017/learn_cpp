//
// Created by trunk on 5/14/22.
//

namespace day1 {
    int func_goto() {
        std::cout << '1' << std::endl;
        goto FLAG;
        std::cout << '2' << std::endl;
        std::cout << '3' << std::endl;
        std::cout << '4' << std::endl;
        FLAG:
        std::cout << '5' << std::endl;

        return 0;
    }
}