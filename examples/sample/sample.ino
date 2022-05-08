//-----------------------------------------------------
//  title       : library sample
//  date/author : 2022/05/06 @chrmlinux03 
//  explain     : Extend the FOR syntax
//                Add and subtract from 0 to 10 in 2 steps each
//-----------------------------------------------------
#include "extendFor.hpp"
static extendFor ef;
 
#define DELAY_MSEC (1000)

void setup() {
  Serial.begin( 115200 ); delay(1000);
  ef.begin();
}

void loop() {
  Serial.printf("rtn=%d\n", ef.exf(0, 10, 2));
  delay(DELAY_MSEC);
}
