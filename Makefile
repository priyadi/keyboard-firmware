all: compile flash

clean:
	cd keyboard/infinity_chibios && make clean KEYMAP=priyadi

compile:
	cd keyboard/infinity_chibios && make KEYMAP=priyadi

flash:
	@echo put keyboard in programming mode now
	@sleep 10
	cd keyboard/infinity_chibios && sudo dfu-util -d 1c11:b007 -D build/ch.bin