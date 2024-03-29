#include <BLEDevice.h>
#include "./header/giraffe_controller.h"

void setup() {
  /* Open serial connexion for debuging */
  Serial.begin(115200);
  Serial.println("Initializing giraffe project");

  /* Initialize BLE context */
  BLEDevice::init("Connected_giraffe");
  Serial.print("BLE mac address : ");
  Serial.println(BLEDevice::getAddress().toString().c_str());

  /* Create new giraffe controller */
  GiraffeController* giraffe_controller = new GiraffeController();
  giraffe_controller->init();
}

void loop() {
  delay(2000);
}
