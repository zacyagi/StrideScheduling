#include <linux/mysyscall.h>
#include <linux/kernel.h>
#include <asm/uaccess.h>

extern int defaultOrStride;
asmlinkage int sys_mysyscall(int arg1){
defaultOrStride=arg1;
return 0;
}