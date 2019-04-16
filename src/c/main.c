#include <stdio.h>
#include "awtk.h"
#include "base/vgcanvas.h"
#include "main_loop_web.h"

extern ret_t assets_init(void);;
extern ret_t application_init(void);

int32_t awtk_web_init(void) {
  tk_init(0, 0, APP_MOBILE, NULL, NULL);
  tk_ext_widgets_init();
  
  assets_init();
  application_init();

  return TRUE;
}

int32_t awtk_web_deinit(void) {
  tk_exit();

  return TRUE;
}

int32_t awtk_web_main_loop_step(double timestamp) {
  main_loop_web_step(main_loop());

  return 0;
}
