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

   if (digitalRead(2) == HIGH && digitalRead(3) == HIGH && digitalRead(4) == LOW && digitalRead(5) == HIGH){

/*
select granuwaga
    space
    a
    space
    space
    space
    (delay) maybe 3 seconds in between to be safe?
    space
    (x)


    (again with a)

    (again with d > s > s) select okuwaga

    (again with d > s > s) select grankuwaga

    
*/

      Keyboard.press(0x20); // press space (working in steam)
      delay(50);
      Keyboard.releaseAll();
      delay(500); // wait half a second


      Keyboard.press('a'); // press space (working in steam)
      delay(50);
      Keyboard.releaseAll();
      delay(500); // wait half a second

      Keyboard.press(0x20); // press space (working in steam)
      delay(50);
      Keyboard.releaseAll();
      delay(500); // wait half a second

      Keyboard.press(0x20); // press space (working in steam)
      delay(50);
      Keyboard.releaseAll();
      delay(500); // wait half a second

      Keyboard.press(0x20); // press space (working in steam)
      delay(50);
      Keyboard.releaseAll();
      delay(500); // wait half a second

      delay(3000);

      Keyboard.press(0x20); // press space (working in steam)
      delay(50);
      Keyboard.releaseAll();
      delay(500); // wait half a second

      delay(2000);

      Keyboard.press(0x20); // press space (working in steam)
      delay(50);
      Keyboard.releaseAll();
      delay(500); // wait half a second

      delay(1000);

      Keyboard.press('x'); // press space (working in steam)
      delay(50);
      Keyboard.releaseAll();
      delay(500); // wait half a second

      delay(1000);


      /* Evo 2 */
      Keyboard.press(0x20); // press space (working in steam)
      delay(50);
      Keyboard.releaseAll();
      delay(500); // wait half a second


      Keyboard.press('a'); // press space (working in steam)
      delay(50);
      Keyboard.releaseAll();
      delay(500); // wait half a second

      Keyboard.press(0x20); // press space (working in steam)
      delay(50);
      Keyboard.releaseAll();
      delay(500); // wait half a second

      Keyboard.press(0x20); // press space (working in steam)
      delay(50);
      Keyboard.releaseAll();
      delay(500); // wait half a second

      Keyboard.press(0x20); // press space (working in steam)
      delay(50);
      Keyboard.releaseAll();
      delay(500); // wait half a second

      Keyboard.press(0x20); // press space (working in steam)
      delay(50);
      Keyboard.releaseAll();
      delay(500); // wait half a second

      delay(3000);

      Keyboard.press(0x20); // press space (working in steam)
      delay(50);
      Keyboard.releaseAll();
      delay(500); // wait half a second

      delay(2000);

      Keyboard.press(0x20); // press space (working in steam)
      delay(50);
      Keyboard.releaseAll();
      delay(500); // wait half a second

      delay(1000);

      Keyboard.press('x'); // press space (working in steam)
      delay(50);
      Keyboard.releaseAll();
      delay(500); // wait half a second

      delay(1000);

      /* Evo 3 */
      Keyboard.press(0x20); // press space (working in steam)
      delay(50);
      Keyboard.releaseAll();
      delay(500); // wait half a second


      Keyboard.press('d'); // press space (working in steam)
      delay(50);
      Keyboard.releaseAll();
      delay(500); // wait half a second

      Keyboard.press('s'); // press space (working in steam)
      delay(50);
      Keyboard.releaseAll();
      delay(500); // wait half a second

      Keyboard.press('s'); // press space (working in steam)
      delay(50);
      Keyboard.releaseAll();
      delay(500); // wait half a second

      Keyboard.press(0x20); // press space (working in steam)
      delay(50);
      Keyboard.releaseAll();
      delay(500); // wait half a second

      Keyboard.press(0x20); // press space (working in steam)
      delay(50);
      Keyboard.releaseAll();
      delay(500); // wait half a second

      Keyboard.press(0x20); // press space (working in steam)
      delay(50);
      Keyboard.releaseAll();
      delay(500); // wait half a second

      delay(3000);

      Keyboard.press(0x20); // press space (working in steam)
      delay(50);
      Keyboard.releaseAll();
      delay(500); // wait half a second

      delay(2000);

      Keyboard.press(0x20); // press space (working in steam)
      delay(50);
      Keyboard.releaseAll();
      delay(500); // wait half a second

      delay(1000);

      Keyboard.press('x'); // press space (working in steam)
      delay(50);
      Keyboard.releaseAll();
      delay(500); // wait half a second

      delay(1000);


      /* Evo 4 */
      Keyboard.press(0x20); // press space (working in steam)
      delay(50);
      Keyboard.releaseAll();
      delay(500); // wait half a second


      Keyboard.press('d'); // press space (working in steam)
      delay(50);
      Keyboard.releaseAll();
      delay(500); // wait half a second

      Keyboard.press('s'); // press space (working in steam)
      delay(50);
      Keyboard.releaseAll();
      delay(500); // wait half a second

      Keyboard.press('s'); // press space (working in steam)
      delay(50);
      Keyboard.releaseAll();
      delay(500); // wait half a second

      Keyboard.press(0x20); // press space (working in steam)
      delay(50);
      Keyboard.releaseAll();
      delay(500); // wait half a second

      Keyboard.press(0x20); // press space (working in steam)
      delay(50);
      Keyboard.releaseAll();
      delay(500); // wait half a second

      Keyboard.press(0x20); // press space (working in steam)
      delay(50);
      Keyboard.releaseAll();
      delay(500); // wait half a second

      delay(3000);

      Keyboard.press(0x20); // press space (working in steam)
      delay(50);
      Keyboard.releaseAll();
      delay(500); // wait half a second

      delay(2000);

      Keyboard.press(0x20); // press space (working in steam)
      delay(50);
      Keyboard.releaseAll();
      delay(500); // wait half a second

      delay(1000);

      Keyboard.press('x'); // press space (working in steam)
      delay(50);
      Keyboard.releaseAll();
      delay(500); // wait half a second

      delay(1000);

   }
}