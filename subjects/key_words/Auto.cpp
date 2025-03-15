//
// Created by yingbingzhu on 2025/3/14.
//

#include <iostream>
class Device {

};

class DeviceManager {
private:
  std::unordered_map<std::string, std::vector<Device*>> m_Devices;
public:
  const std::unordered_map<std::string, std::vector<Device*>>& GetDevices() const {
    return m_Devices;
  }
};

int main() {
  auto a = 5;

  DeviceManager dm;
  const auto& devices = dm.GetDevices();


}
