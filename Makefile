all: compile flash

clean:
	cd keyboard/s60-x && make clean KEYMAP=priyadi

compile:
	cd keyboard/s60-x && make KEYMAP=priyadi

flash:
	@echo put keyboard in programming mode now
	@sleep 10
	cd keyboard/s60-x && sudo dfu-util -d 1c11:b007 -D S60-X_lufa.elf