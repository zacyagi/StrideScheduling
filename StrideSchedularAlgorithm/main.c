#include <linux/mysyscall.h>
#include<unistd.h>

int main(){
mysyscall(0); // 0 for default 
printf("Main Executed\n");
return 0;
}