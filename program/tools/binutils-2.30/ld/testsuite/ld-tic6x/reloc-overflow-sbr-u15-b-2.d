#name: C6X relocation underflow, SBR_U15_B
#as: -mlittle-endian
#ld: -melf32_tic6x_le -Tsbr.ld --defsym s=0x7f
#source: reloc-overflow-sbr-u15-b.s
#error: .*relocation truncated to fit: R_C6000_SBR_U15_B.*
