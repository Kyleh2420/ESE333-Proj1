/*
Class: ESE 333
Instructor Daniel Benz
Student: Kyle Han
Project 1
Item: Kernel Demo
Description: Modify the kernel output to include student ID and name
Last Modified: 2023-08-29
Github: https://github.com/Kyleh2420/
*/



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
		  "This is a kernel function from student: Kyle Han\n"); //Uncomment this line
return 0;
}

static void __exit goodbye_world(void) { printk(KERN_INFO "Goodbye world\n"
														"Goodbye 113799110\n"); } module_init(hello_world);
module_exit(goodbye_world);
