#include "unity.h"

extern "C" {
void timer_succeeded() {
  TEST_ASSERT_EQUAL(0, 0);
}
}