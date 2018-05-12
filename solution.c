#include <linux/module.h>

int init_my_module(void)
{
    printk( KERN_INFO "my module was inserted!\n");
}

void exit_my_module(void)
{
    printk(KERN_INFO "remove my module!\n");
}

MODULE_LICENCE("gpl");
module_init(init_my_module);
module_exit(exit_my_module);
    
