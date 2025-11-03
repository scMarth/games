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

bugs out: 1000, 1500, 1000
3000, 2000, 1000

*/
int evo_delay1 = 1500; // 3k stable
int evo_delay2 = 1500; // 2k stable
int evo_delay3 = 1000; // 1k stable
int evo_delay4 = 500; // 1.5k stable

int iteration_limit = 500;
int iteration = 0;


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

   // connect pin-3 to ground for magna conversion (sort by evo first and level up a bit so that the ex-vees are at the bottom) to be extra safe, put all other digimon other than Exveemons in the farm or save in multiple slots first
   if (digitalRead(2) == HIGH && digitalRead(3) == LOW && digitalRead(4) == HIGH && digitalRead(5) == HIGH){
      Keyboard.press(0x20); // press space (working in steam)
      delay(50);
      Keyboard.releaseAll();
      delay(250);

      Keyboard.press('w');
      delay(50);
      Keyboard.releaseAll();
      delay(50);

      Keyboard.press(0x20); // press space (working in steam)
      delay(50);
      Keyboard.releaseAll();
      delay(250);

      Keyboard.press('a');
      delay(50);
      Keyboard.releaseAll();
      delay(50);

      Keyboard.press('s');
      delay(50);
      Keyboard.releaseAll();
      delay(50);

      Keyboard.press('s');
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
      
      delay(evo_delay4);

      /* Evo 2 */
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
      
      delay(evo_delay4);

      /* reposition */
      Keyboard.press('x'); // press x
      delay(50);
      Keyboard.releaseAll();
      delay(250);
   }

   // connect pin-5 to ground for space bar spam
   if (digitalRead(2) == HIGH && digitalRead(3) == HIGH && digitalRead(4) == HIGH && digitalRead(5) == LOW){
      Keyboard.press(0x20); // press space (working in steam)
      delay(50);
      Keyboard.releaseAll();
      delay(50);
   }

   // connect pin-4 to ground for kuwaga farm
   if (digitalRead(2) == HIGH && digitalRead(3) == HIGH && digitalRead(4) == LOW && digitalRead(5) == HIGH && (iteration < iteration_limit)){

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
      
      delay(evo_delay4);

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
      
      delay(evo_delay4);

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
      
      delay(evo_delay4);

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

      delay(evo_delay4);

      iteration++;
   }
}