#ifndef __BENOS_TRAP_H_
#define __BENOS_TRAP_H_

/* ===== Trap/Exception Causes ===== */
#define CAUSE_MISALIGNED_FETCH		0x0
#define CAUSE_FETCH_ACCESS		0x1
#define CAUSE_ILLEGAL_INSTRUCTION	0x2
#define CAUSE_BREAKPOINT		0x3
#define CAUSE_MISALIGNED_LOAD		0x4
#define CAUSE_LOAD_ACCESS		0x5
#define CAUSE_MISALIGNED_STORE		0x6
#define CAUSE_STORE_ACCESS		0x7
#define CAUSE_USER_ECALL		0x8
#define CAUSE_SUPERVISOR_ECALL		0x9
#define CAUSE_VIRTUAL_SUPERVISOR_ECALL	0xa
#define CAUSE_MACHINE_ECALL		0xb
#define CAUSE_FETCH_PAGE_FAULT		0xc
#define CAUSE_LOAD_PAGE_FAULT		0xd
#define CAUSE_STORE_PAGE_FAULT		0xf
#define CAUSE_FETCH_GUEST_PAGE_FAULT	0x14
#define CAUSE_LOAD_GUEST_PAGE_FAULT	0x15
#define CAUSE_VIRTUAL_INST_FAULT	0x16
#define CAUSE_STORE_GUEST_PAGE_FAULT	0x17

#define INTERRUPT_CAUSE_SOFTWARE    1
#define INTERRUPT_CAUSE_TIMER       5
#define INTERRUPT_CAUSE_EXTERNAL    9

#define EXC_INST_MISALIGNED     0
#define EXC_INST_ACCESS         1
#define EXC_BREAKPOINT          3
#define EXC_LOAD_ACCESS         5
#define EXC_STORE_ACCESS        7
#define EXC_SYSCALL             8
#define EXC_INST_PAGE_FAULT     12
#define EXC_LOAD_PAGE_FAULT     13
#define EXC_STORE_PAGE_FAULT    15

/* Virtual Interrupt causes */
#define IRQ_VS_SOFT	2
#define IRQ_VS_TIMER	6
#define IRQ_VS_EXT	10

#endif