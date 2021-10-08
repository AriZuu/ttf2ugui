#ifndef __UGUI_CONFIG_H
#define __UGUI_CONFIG_H

#include <stdint.h>

/* -------------------------------------------------------------------------------- */
/* -- CONFIG SECTION                                                             -- */
/* -------------------------------------------------------------------------------- */

//#define USE_MULTITASKING    

/* Enable color mode */
#define USE_COLOR_RGB565

// If you only use standard ASCII, disabling this will save some resources
#define USE_UTF8

/* Enable needed fonts here */

/* Specify platform-dependent integer types here */

typedef uint8_t      UG_U8;
typedef int8_t       UG_S8;
typedef uint16_t     UG_U16;
typedef int16_t      UG_S16;
typedef uint32_t     UG_U32;
typedef int32_t      UG_S32;
typedef const uint8_t UG_FONT;

/* -------------------------------------------------------------------------------- */
/* -------------------------------------------------------------------------------- */


/* Feature enablers */
#define USE_PRERENDER_EVENT
#define USE_POSTRENDER_EVENT


#endif
