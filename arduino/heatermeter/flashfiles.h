// Automatically generated by tools/ArduinoSerialUpload
// The application makes no claim of copyright on this file
#ifndef __FLASHFILES_H__
#define __FLASHFILES_H__

#include <avr/pgmspace.h>
#define DATAFLASH_PAGE_BYTES 528

const char FNAME000[] PROGMEM = "favicon.ico";
const char FNAME001[] PROGMEM = "fire.png";
const char FNAME002[] PROGMEM = "";

const struct flash_file_t {
  const char *fname;
  const unsigned int page;
  const unsigned int size;
} FLASHFILES[] PROGMEM = {
  { FNAME000,   3, 1150 },
  { FNAME001,   6, 11824 },
  { FNAME002,  29, 5281 },
  { 0, 0, 0},
};

#endif /* __FLASHFILES_H__ */

