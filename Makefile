all: compile flash

clean:
	cd keyboard/hid_liber && make -f Makefile.lufa clean

compile:
	cd keyboard/hid_liber && make -f Makefile.lufa priyadi

flash:
	cd keyboard/hid_liber && \
	echo place magnet near controller now && \
	sleep 10 && \
	sudo dfu-programmer atmega32u4 erase && \
	sudo dfu-programmer atmega32u4 flash hid_liber_lufa.hex && \
	sudo dfu-programmer atmega32u4 start
