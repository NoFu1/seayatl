#ifndef SEAYATL_SEAYATL_H
#define SEAYATL_SEAYATL_H

#include <stdint.h>
#include <stdio.h>

/// @brief Size of a display
typedef struct seayatl_display_size_s {
  uint16_t x;
  uint16_t y;
} seayatl_display_size_t;

/// @brief Error codes for library "seayatl"
typedef enum seayatl_error_e {
    /// No error
    SEAYATL_ERROR_OK = 0,

    /// Invalid arguments (ex: NULL pointer where a valid pointer is required)
    SEAYATL_ERROR_INVARG,

    // etc etc

    /// Total # of errors in this list (NOT AN ACTUAL ERROR CODE);
    /// NOTE: that for this to work, it assumes your first error code is value 0 and you let it naturally
    /// increment from there, as is done above, without explicitly altering any error values above
    SEAYATL_ERROR_COUNT,
} seayatl_error_t;

seayatl_error_t setCursorPosition(uint16_t x, uint16_t y);

#endif //SEAYATL_SEAYATL_H
