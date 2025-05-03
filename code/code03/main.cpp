#include <iostream>
#include <map>
#include <vector>

std::tuple<std::string, std::string, std::string> getClassInfo() {
    /* Return a tuple with the following values:
    - "CS106L" for the class name
    - "260-113" for the building name
    - "C++" for the language */
    // 一致性初始化
    return {"CS106L", "260-113", "C++"};
}
    
 int main() {
    //结构化绑定
    auto [className, buildingName, language] = getClassInfo();
    std::cout << "Come to " << buildingName << " and join us for " << className
              << " to learn " << language << "!" << std::endl;
    return 0;
}