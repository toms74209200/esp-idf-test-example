#include "unity.h"

#include "timer_impl_test.h"

extern "C" {
void app_main() {
  UNITY_BEGIN();
  RUN_TEST(timer_succeeded);
  UNITY_END();
}
}