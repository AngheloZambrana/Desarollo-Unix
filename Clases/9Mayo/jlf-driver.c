
#include <linux/module.h>

// metadata
MODULE_AUTHOR("Jala Foundation");
MODULE_LICENSE("GPL");

// init
static int jlf_driver_init(void) {
    return 0;
}
module_init(jlf_driver_init);
//exit
static void jlf_driver_exit(void) {
    
}
module_exit(jlf_driver_exit);



