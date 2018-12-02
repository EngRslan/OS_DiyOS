#ifndef _WINDOW_H_
#define _WINDOW_H_

#include <gui.h>

typedef enum { WINDOW_NONE, WINDOW_TOPLEVEL } window_type_t;

typedef struct window {
  struct widget widget;

  uint8_t       active;
  widget_t*     focus;  // widget with the focus
  uint8_t       *name;
  window_type_t type;
} window_t;

#define WINDOW(w) ((window_t*)w)

window_t*
window_create(uint32_t w, uint32_t h);

void
window_set_name(window_t* window, char* name);

char*
window_get_name(window_t* window);

void
window_set_type(window_t* window, window_type_t type);

window_type_t
window_get_type(window_t* window);

void
window_move(window_t* window, uint32_t x, uint32_t y);

#endif
