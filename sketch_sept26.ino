#include <Arduino.h>

int val0 = 0; //Our initial pot values. We need one for the first value and a second to test if there has been a change made. This needs to be done for all 3 pots.
int lastVal0 = 0;
int val1 = 0;
int lastVal1 = 0;
int val2 = 0;
int lastVal2 = 0;
int val3 = 0;
int lastVal3 = 0;
int val4 = 0;
int lastVal4 = 0;
int val5 = 0;
int lastVal5 = 0;

int baseControl = 50;

void setup()
{
   Serial.begin(31250);       // Set the speed of the midi port to the same as we will be using in the Hairless Midi software 
}

void loop()
{
   val0 = analogRead(A0)/8;   // Divide by 8 to get range of 0-127 for midi
   val1 = analogRead(A1)/8;   // Divide by 8 to get range of 0-127 for midi
   val2 = analogRead(A2)/8;   // Divide by 8 to get range of 0-127 for midi
   val3 = analogRead(A3)/8;   // Divide by 8 to get range of 0-127 for midi
   val4 = analogRead(A4)/8;   // Divide by 8 to get range of 0-127 for midi
   val5 = analogRead(A5)/8;   // Divide by 8 to get range of 0-127 for midi
   
   if (val0 != lastVal0) // If the value does not = the last value the following command is made. This is because the pot has been turned. Otherwise the pot remains the same and no midi message is output.
   {
   MIDImessage(176,12,val0);}         // 176 = CC command (channel 1 control change), 1 = Which Control, val = value read from Potentionmeter 1 NOTE THIS SAYS VAL not VA1 (lowercase of course)
   lastVal0 = val0;
   
   if (val1 != lastVal1) // If the value does not = the last value the following command is made. This is because the pot has been turned. Otherwise the pot remains the same and no midi message is output.
   {
   MIDImessage(176,13,val1);}         // 176 = CC command (channel 1 control change), 1 = Which Control, val = value read from Potentionmeter 1 NOTE THIS SAYS VAL not VA1 (lowercase of course)
   lastVal1 = val1;

if (val2 != lastVal2) // If the value does not = the last value the following command is made. This is because the pot has been turned. Otherwise the pot remains the same and no midi message is output.
   {
   MIDImessage(176,16,val2);}         // 176 = CC command (channel 1 control change), 1 = Which Control, val = value read from Potentionmeter 1 NOTE THIS SAYS VAL not VA1 (lowercase of course)
   lastVal2 = val2;

if (val3 != lastVal3) // If the value does not = the last value the following command is made. This is because the pot has been turned. Otherwise the pot remains the same and no midi message is output.
   {
   MIDImessage(176,17,val3);}         // 176 = CC command (channel 1 control change), 1 = Which Control, val = value read from Potentionmeter 1 NOTE THIS SAYS VAL not VA1 (lowercase of course)
   lastVal3 = val3;

if (val4 != lastVal4) // If the value does not = the last value the following command is made. This is because the pot has been turned. Otherwise the pot remains the same and no midi message is output.
   {
   MIDImessage(176,18,val4);}         // 176 = CC command (channel 1 control change), 1 = Which Control, val = value read from Potentionmeter 1 NOTE THIS SAYS VAL not VA1 (lowercase of course)
   lastVal4 = val4;

   if (val5 != lastVal5) // If the value does not = the last value the following command is made. This is because the pot has been turned. Otherwise the pot remains the same and no midi message is output.
   {
   MIDImessage(176,19,val5);}         // 176 = CC command (channel 1 control change), 1 = Which Control, val = value read from Potentionmeter 1 NOTE THIS SAYS VAL not VA1 (lowercase of course)
   lastVal5 = val5;


  //  val2 = analogRead(1)/8;   // Divide by 8 to get range of 0-127 for midi
  //  if (val2 != lastVal2) 
  //  {
  //  MIDImessage(176,2,val2);}         // 176 = CC command, 2 = Which Control, val = value read from Potentionmeter 2
  //  lastVal2 = val2;
   
  //  val3 = analogRead(2)/8;   // Divide by 8 to get range of 0-127 for midi
  //  if (val3 != lastVal3) 
  //  {
  //  MIDImessage(176,3,val3);}         // 176 = CC command, 3 = Which Control, val = value read from Potentionmeter 3
  //  lastVal3 = val3;
delay(10); //here we add a short delay to help prevent slight fluctuations, knocks on the pots etc. Adding this helped to prevent my pots from jumpin up or down a value when slightly touched or knocked.
}

void MIDImessage(byte command, byte data1, byte data2) //pass values out through standard Midi Command
{
   Serial.write(command);
   Serial.write(data1);
   Serial.write(data2);
}

