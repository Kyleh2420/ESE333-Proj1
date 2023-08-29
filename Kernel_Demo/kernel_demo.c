#include <linux/init.h>
#include <linux/module.h>
#include <linux/kernel.h>

MODULE_LICENSE("GPL");
MODULE_AUTHOR("Student Kyle Han"); //Modify this line
MODULE_DESCRIPTION("A simple Hello world Kernel Mod");
MODULE_VERSION("0.1");

static int __init hello_world(void)
{
printk(KERN_INFO "Hello World\n"
		  "This is a kernel function from student: Kyle Han\n"
		  "My ID Number is: 113799110"); //Uncomment this line
return 0;
}

static void __exit goodbye_world(void) { printk(KERN_INFO "Goodbye world\n"); } module_init(hello_world);
module_exit(goodbye_world);
