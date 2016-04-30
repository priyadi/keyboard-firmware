all: compile flash

clean:
	cd keyboard/s60-x && make clean KEYMAP=priyadi

compile:
	cd keyboard/s60-x && make KEYMAP=priyadi

flash:
	cd keyboard/s60-x && \
	echo start programming mode now && \
	sleep 10 && \
	sudo dfu-programmer atmega32u4 erase && \
	sudo dfu-programmer atmega32u4 flash S60-X_lufa.hex && \
	sudo dfu-programmer atmega32u4 start
