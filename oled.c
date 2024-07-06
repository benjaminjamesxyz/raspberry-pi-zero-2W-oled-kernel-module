#include <linux/module.h>

static int oled_init(void);
static void oled_exit(void);

static int oled_init(void)
{
  return 0;
}

static void oled_exit()
{

}

module_init(oled_init);
module_exit(oled_exit);

MODULE_LICENSE("MIT");
MODULE_AUTHOR("Benjamin James <benworksxyz-kernel@yahoo.com>");
MODULE_DESCRIPTION("I2C OLED Display");
