// Using real Arduino UNO board
// Install Arduino IDE on your computer.
// Connect the Arduino board to your computer.
// Open the Arduino IDE, select the correct board and port.
// Copy the above code into the Arduino IDE and upload it to the Arduino board.
// The LED on the Arduino board will start blinking.

// includes the Arduino main library
#include <Arduino.h>

// the setup function runs once when you press reset or power the board
void setup()
{
    // initialize digital pin LED_BUILTIN as an output.
    pinMode(LED_BUILTIN, OUTPUT);
}

// the loop function runs over and over again forever
void loop()
{
    digitalWrite(LED_BUILTIN, HIGH); // turn the LED on (HIGH is the voltage level)
    delay(1000);                     // wait for a second
    digitalWrite(LED_BUILTIN, LOW);  // turn the LED off by making the voltage LOW
    delay(1000);                     // wait for a second
}

// Simulation Steps

// Sign Up or Log In to Tinkercad:
// Go to Tinkercad.
// If you don’t have an account, you'll need to sign up. If you do, just log in.

// Create a New Circuit:
// Once logged in, click on the Circuits section.
// Click on Create new Circuit.

// Set Up Your Circuit:
// In the components panel, search for an Arduino UNO and drag it to the workplane.
// Then, find an LED and place it on the workplane.
// You'll also need a resistor (around 220 ohms) to protect the LED. Place it in series with the LED.
// Connect one end of the resistor to pin 13 on the Arduino and the other end to the anode (longer leg) of the LED.
// Connect the cathode (shorter leg) of the LED to one of the GND (Ground) pins on the Arduino.

// Write Your Code:
// Click on the Code button in the upper right corner of the Tinkercad window.
// verify / update the generated code

// Start the Simulation:
// Click the Start Simulation button (play button) to run your simulation.
// You should see the LED on your virtual breadboard turning on and off every second.

// Experiment and Learn:
// You can modify the code or circuit and observe the changes in behavior.
// Try changing the delay to make the LED blink faster or slower.
