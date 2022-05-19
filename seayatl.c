#include "seayatl.h"

#define gotoxy(x,y) printf("\033[%d;%dH", (y), (x))

seayatl_display_size_t  getDisplaySize () {

}




seayatl_error_t setCursorPosition(uint16_t x, uint16_t y) {
    gotoxy(x,y);
    return SEAYATL_ERROR_OK;
}

