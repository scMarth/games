/*
notes: make sure you have the right set-up to do the loop manually (zealous GranKuwaga with appropriate agent talents for reduced digivolution requirements)

to run:
    - in the digivolution menu, hover the cursor on grankuwaga
    - move the mouse cursor away (to a second screen) so that it doesn't accidentally change the target and keep the mouse still as it is running
    - plug in the microcontroller
    - connect pin 4 to ground

*/ 


#include <Keyboard.h>
#include <time.h>

int led = 13;     // L LED


/*

fastest known timings for evo_delay1, evo_delay2, evo_delay3 respectively: 1000, 1500, 1000

*/
int evo_delay1 = 1000;
int evo_delay2 = 1500;
int evo_delay3 = 1000;



void setup() {
   // make pin 2 an input and turn on the
   // pullup resistor so it goes high unless
   // connected to ground:
   pinMode(2, INPUT_PULLUP);
   pinMode(3, INPUT_PULLUP);
   pinMode(4, INPUT_PULLUP);
   pinMode(5, INPUT_PULLUP);
   pinMode(led, OUTPUT);
   Keyboard.begin();
   srand(time(NULL));   // Initialization, should only be called once.
}

void loop() {
   digitalWrite(led, !(digitalRead(2)||digitalRead(4)));

   // connect pin-5 to ground for space bar spam
   if (digitalRead(2) == HIGH && digitalRead(3) == HIGH && digitalRead(4) == HIGH && digitalRead(5) == LOW){
      Keyboard.press(0x20); // press space (working in steam)
      delay(50);
      Keyboard.releaseAll();
      delay(50);
   }

   // connect pin-4 to ground for kuwaga farm
   if (digitalRead(2) == HIGH && digitalRead(3) == HIGH && digitalRead(4) == LOW && digitalRead(5) == HIGH){

      Keyboard.press(0x20); // press space (working in steam)
      delay(50);
      Keyboard.releaseAll();
      delay(250);


      Keyboard.press('a'); // press a
      delay(50);
      Keyboard.releaseAll();
      delay(50);

      Keyboard.press(0x20); // press space (working in steam)
      delay(50);
      Keyboard.releaseAll();
      delay(50);

      Keyboard.press(0x20); // press space (working in steam)
      delay(50);
      Keyboard.releaseAll();
      delay(50);

      Keyboard.press(0x20); // press space (working in steam)
      delay(50);
      Keyboard.releaseAll();

      delay(evo_delay1);

      Keyboard.press(0x20); // press space (working in steam)
      delay(50);
      Keyboard.releaseAll();
      delay(500);

      delay(evo_delay2);

      Keyboard.press(0x20); // press space (working in steam)
      delay(50);
      Keyboard.releaseAll();
      delay(500);

      delay(evo_delay3);

      Keyboard.press('x'); // press x
      delay(50);
      Keyboard.releaseAll();
      delay(250);

      /* Evo 2 */
      Keyboard.press(0x20); // press space (working in steam)
      delay(50);
      Keyboard.releaseAll();
      delay(250);


      Keyboard.press('a'); // press a
      delay(50);
      Keyboard.releaseAll();
      delay(50);

      Keyboard.press(0x20); // press space (working in steam)
      delay(50);
      Keyboard.releaseAll();
      delay(50);

      Keyboard.press(0x20); // press space (working in steam)
      delay(50);
      Keyboard.releaseAll();
      delay(50);

      Keyboard.press(0x20); // press space (working in steam)
      delay(50);
      Keyboard.releaseAll();
      delay(50);

      Keyboard.press(0x20); // press space (working in steam)
      delay(50);
      Keyboard.releaseAll();

      delay(evo_delay1);

      Keyboard.press(0x20); // press space (working in steam)
      delay(50);
      Keyboard.releaseAll();
      delay(500);

      delay(evo_delay2);

      Keyboard.press(0x20); // press space (working in steam)
      delay(50);
      Keyboard.releaseAll();
      delay(500);

      delay(evo_delay3);

      Keyboard.press('x'); // press x
      delay(50);
      Keyboard.releaseAll();
      delay(250);

      /* Evo 3 */
      Keyboard.press(0x20); // press space (working in steam)
      delay(50);
      Keyboard.releaseAll();
      delay(250);


      Keyboard.press('d'); // press d
      delay(50);
      Keyboard.releaseAll();
      delay(50);

      Keyboard.press('s'); // press s
      delay(50);
      Keyboard.releaseAll();
      delay(50);

      Keyboard.press('s'); // press s
      delay(50);
      Keyboard.releaseAll();
      delay(50);

      Keyboard.press(0x20); // press space (working in steam)
      delay(50);
      Keyboard.releaseAll();
      delay(50);

      Keyboard.press(0x20); // press space (working in steam)
      delay(50);
      Keyboard.releaseAll();
      delay(50);

      Keyboard.press(0x20); // press space (working in steam)
      delay(50);
      Keyboard.releaseAll();

      delay(evo_delay1);

      Keyboard.press(0x20); // press space (working in steam)
      delay(50);
      Keyboard.releaseAll();
      delay(500);

      delay(evo_delay2);

      Keyboard.press(0x20); // press space (working in steam)
      delay(50);
      Keyboard.releaseAll();
      delay(500);

      delay(evo_delay3);

      Keyboard.press('x'); // press x
      delay(50);
      Keyboard.releaseAll();
      delay(250);


      /* Evo 4 */
      Keyboard.press(0x20); // press space (working in steam)
      delay(50);
      Keyboard.releaseAll();
      delay(250);


      Keyboard.press('d'); // press d
      delay(50);
      Keyboard.releaseAll();
      delay(50);

      Keyboard.press('s'); // press s
      delay(50);
      Keyboard.releaseAll();
      delay(50);

      Keyboard.press('s'); // press s
      delay(50);
      Keyboard.releaseAll();
      delay(50);

      Keyboard.press(0x20); // press space (working in steam)
      delay(50);
      Keyboard.releaseAll();
      delay(50);

      Keyboard.press(0x20); // press space (working in steam)
      delay(50);
      Keyboard.releaseAll();
      delay(50);

      Keyboard.press(0x20); // press space (working in steam)
      delay(50);
      Keyboard.releaseAll();

      delay(evo_delay1);

      Keyboard.press(0x20); // press space (working in steam)
      delay(50);
      Keyboard.releaseAll();
      delay(500);

      delay(evo_delay2);

      Keyboard.press(0x20); // press space (working in steam)
      delay(50);
      Keyboard.releaseAll();
      delay(500);

      delay(evo_delay3);

      Keyboard.press('x'); // press x
      delay(50);
      Keyboard.releaseAll();
      delay(250);

      delay(50);

   }
}