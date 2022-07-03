ENTRY(Reset_Handler);
EXTERN(vector_table);

MEMORY
{
	ram     (xrw) : ORIGIN = 0x20000000, LENGTH = 128K
	flash   (rx)  : ORIGIN = 0x08000000, LENGTH = 512K
	eeprom  (rw)  : ORIGIN = 0x08080000, LENGTH = 512
	itcmram (xrw) : ORIGIN = 0x00000000, LENGTH = 64K
}
PROVIDE(__stack = ORIGIN(ram) + LENGTH(ram));

SECTIONS
{
	.text : {
		KEEP(*(.vectors))
		*(.text*)
		KEEP(*(.rodata*))
		. = ALIGN(4);
	} >flash

	.data : ALIGN(16) {
        __data_beg__ = .;
        *(.data*)
        __data_end__ = .;
      } > ram AT> flash

    .heap (COPY):
    {
        __end__ = .;
        PROVIDE(end = .);
        *(.heap*)
        __HeapLimit = .;
    } > ram

    .bss (NOLOAD) : ALIGN(16) {
        __bss_beg__ = .;
        *(.bss*)
        *(COMMON)
        __bss_end__ = .;
    } >ram
}