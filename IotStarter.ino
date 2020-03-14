#include "OTAHandler.h"
#include "WifiHandler.h"

void setup() {
  connectToFifi();
  setupOTA();
}

void loop() {
  handleOTA();
}
