ifneq ($(KERNELRELEASE),)

obj-m := oled.o

else

.PHONY: all
all:
	$(MAKE) -C $(KERNEL_SRC) M=$(shell pwd) modules

.PHONY: clean
clean:
	rm -f *.o *.ko *.mod* .*.cmd modules.order Module.symvers

endif
