#include <linux/module.h>
#include "checker.h"

int init_my_module(void)
{
   // printk( KERN_INFO "my module was inserted!\n");
    Call_me("Hello from my module!");
}

void exit_my_module(void)
{
    printk(KERN_INFO "remove my module!\n");
}

MODULE_LICENCE("gpl");
module_init(init_my_module);
module_exit(exit_my_module);
    
