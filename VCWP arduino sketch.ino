#include <SoftwareSerial.h>
#include <ElechouseVoiceRecognitionV3.h>

SoftwareSerial mySerial(2, 3); // RX, TX for Voice Recognition Module
VR myVR(mySerial);

const int relayPin = 9; // Relay control pin

void setup() {
    mySerial.begin(9600);
    Serial.begin(9600);
    pinMode(relayPin, OUTPUT);
    digitalWrite(relayPin, LOW); // Ensure pump is off initially
    Serial.println("Voice Control System Initialized");
}

void loop() {
    int ret = myVR.recognize(buf, 0); // Recognize voice command

    if (ret > 0) {
        switch (buf[0].value) {
            case 0: // Command for "PUMP ON"
                digitalWrite(relayPin, HIGH); // Turn on pump
                Serial.println("Pump is turned ON");
                break;
            case 1: // Command for "PUMP OFF"
                digitalWrite(relayPin, LOW); // Turn off pump
                Serial.println("Pump is turned OFF");
                break;
            default:
                Serial.println("Unknown command");
                break;
        }
    }
}



