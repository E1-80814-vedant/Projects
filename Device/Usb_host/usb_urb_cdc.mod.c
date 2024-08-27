#include <linux/module.h>
#define INCLUDE_VERMAGIC
#include <linux/build-salt.h>
#include <linux/elfnote-lto.h>
#include <linux/export-internal.h>
#include <linux/vermagic.h>
#include <linux/compiler.h>

BUILD_SALT;
BUILD_LTO_INFO;

MODULE_INFO(vermagic, VERMAGIC_STRING);
MODULE_INFO(name, KBUILD_MODNAME);

__visible struct module __this_module
__section(".gnu.linkonce.this_module") = {
	.name = KBUILD_MODNAME,
	.init = init_module,
#ifdef CONFIG_MODULE_UNLOAD
	.exit = cleanup_module,
#endif
	.arch = MODULE_ARCH_INIT,
};

#ifdef CONFIG_RETPOLINE
MODULE_INFO(retpoline, "Y");
#endif


static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x92997ed8, "_printk" },
	{ 0x5b8239ca, "__x86_return_thunk" },
	{ 0x3b0505fc, "usb_deregister_dev" },
	{ 0xfd12d16a, "usb_register_dev" },
	{ 0xa6257a2f, "complete" },
	{ 0xa113ef6e, "usb_alloc_urb" },
	{ 0x88db9f48, "__check_object_size" },
	{ 0x13c49cc2, "_copy_from_user" },
	{ 0xc1700075, "usb_free_urb" },
	{ 0xb16e5c2c, "usb_submit_urb" },
	{ 0x25974000, "wait_for_completion" },
	{ 0x851994cd, "kmalloc_caches" },
	{ 0xc45befab, "kmalloc_trace" },
	{ 0x37a0cba, "kfree" },
	{ 0x7682ba4e, "__copy_overflow" },
	{ 0x6b10bee1, "_copy_to_user" },
	{ 0x1d7e366e, "usb_deregister" },
	{ 0xa9c6bd2, "usb_register_driver" },
	{ 0xf3d7e125, "module_layout" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "68FD5C60968D374D0EBC37D");
