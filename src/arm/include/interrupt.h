#ifndef _ARM_INTERRUPT_H_
#define _ARM_INTERRUPT_H_

#define S3C6410_TIMER_BASE 		0xef006000
#define S3C6410_TIMER_TCFG0 	(S3C6410_TIMER_BASE+0x00)
#define S3C6410_TIMER_TCFG1 	(S3C6410_TIMER_BASE+0x04)
#define S3C6410_TIMER_TCON 		(S3C6410_TIMER_BASE+0x08)
#define S3C6410_TIMER_TCNTB4	(S3C6410_TIMER_BASE+0x3c)
#define S3C6410_TIMER_TCNTO4	(S3C6410_TIMER_BASE+0x40)

#define S3C64XX_TINT_CSTAT		(S3C6410_TIMER_BASE+0x44)

#define S3C6410_TIMER_TCON_T4DISABLE	(~(7<<20))
#define S3C6410_TIMER_TCON_T4RELOAD		(1<<22)
#define S3C6410_TIMER_TCON_T4UPDATE		(1<<21)
#define S3C6410_TIMER_TCON_T4START		(1<<20)





#define S3C_ADDR_BASE	(0xe1200000)

#define S3C_ADDR(x)	(S3C_ADDR_BASE + (x))

#define S3C_VA_IRQ	S3C_ADDR(0x00000000)	/* irq controller(s) */

#define VA_VIC0			(S3C_VA_IRQ + 0x00)
#define VA_VIC1			(S3C_VA_IRQ + 0x100000)


#define S3C_IRQ_OFFSET	(32)

#define S3C_IRQ(x)	((x) + S3C_IRQ_OFFSET)

#define IRQ_VIC0_BASE	S3C_IRQ(0)
#define IRQ_VIC1_BASE	S3C_IRQ(32)


/* VIC based IRQs */

#define S3C64XX_IRQ_VIC0(x)	(IRQ_VIC0_BASE + (x))
#define S3C64XX_IRQ_VIC1(x)	(IRQ_VIC1_BASE + (x))

/* VIC0 */

#define IRQ_EINT0_3		S3C64XX_IRQ_VIC0(0)
#define IRQ_EINT4_11		S3C64XX_IRQ_VIC0(1)
#define IRQ_RTC_TIC		S3C64XX_IRQ_VIC0(2)
#define IRQ_CAMIF_C		S3C64XX_IRQ_VIC0(3)
#define IRQ_CAMIF_P		S3C64XX_IRQ_VIC0(4)
#define IRQ_CAMIF_MC		S3C64XX_IRQ_VIC0(5)
#define IRQ_S3C6410_IIC1	S3C64XX_IRQ_VIC0(5)
#define IRQ_S3C6410_IIS		S3C64XX_IRQ_VIC0(6)
#define IRQ_S3C6400_CAMIF_MP	S3C64XX_IRQ_VIC0(6)
#define IRQ_CAMIF_WE_C		S3C64XX_IRQ_VIC0(7)
#define IRQ_S3C6410_G3D		S3C64XX_IRQ_VIC0(8)
#define IRQ_S3C6400_CAMIF_WE_P	S3C64XX_IRQ_VIC0(8)
#define IRQ_POST0		S3C64XX_IRQ_VIC0(9)
#define IRQ_ROTATOR		S3C64XX_IRQ_VIC0(10)
#define IRQ_2D			S3C64XX_IRQ_VIC0(11)
#define IRQ_TVENC		S3C64XX_IRQ_VIC0(12)
#define IRQ_SCALER		S3C64XX_IRQ_VIC0(13)
#define IRQ_BATF		S3C64XX_IRQ_VIC0(14)
#define IRQ_JPEG		S3C64XX_IRQ_VIC0(15)
#define IRQ_MFC			S3C64XX_IRQ_VIC0(16)
#define IRQ_SDMA0		S3C64XX_IRQ_VIC0(17)
#define IRQ_SDMA1		S3C64XX_IRQ_VIC0(18)
#define IRQ_ARM_DMAERR		S3C64XX_IRQ_VIC0(19)
#define IRQ_ARM_DMA		S3C64XX_IRQ_VIC0(20)
#define IRQ_ARM_DMAS		S3C64XX_IRQ_VIC0(21)
#define IRQ_KEYPAD		S3C64XX_IRQ_VIC0(22)
#define IRQ_TIMER0_VIC		S3C64XX_IRQ_VIC0(23)
#define IRQ_TIMER1_VIC		S3C64XX_IRQ_VIC0(24)
#define IRQ_TIMER2_VIC		S3C64XX_IRQ_VIC0(25)
#define IRQ_WDT			S3C64XX_IRQ_VIC0(26)
#define IRQ_TIMER3_VIC		S3C64XX_IRQ_VIC0(27)
#define IRQ_TIMER4_VIC		S3C64XX_IRQ_VIC0(28)
#define IRQ_LCD_FIFO		S3C64XX_IRQ_VIC0(29)
#define IRQ_LCD_VSYNC		S3C64XX_IRQ_VIC0(30)
#define IRQ_LCD_SYSTEM		S3C64XX_IRQ_VIC0(31)

/* VIC1 */

#define IRQ_EINT12_19		S3C64XX_IRQ_VIC1(0)
#define IRQ_EINT20_27		S3C64XX_IRQ_VIC1(1)
#define IRQ_PCM0		S3C64XX_IRQ_VIC1(2)
#define IRQ_PCM1		S3C64XX_IRQ_VIC1(3)
#define IRQ_AC97		S3C64XX_IRQ_VIC1(4)
#define IRQ_UART0		S3C64XX_IRQ_VIC1(5)
#define IRQ_UART1		S3C64XX_IRQ_VIC1(6)
#define IRQ_UART2		S3C64XX_IRQ_VIC1(7)
#define IRQ_UART3		S3C64XX_IRQ_VIC1(8)
#define IRQ_DMA0		S3C64XX_IRQ_VIC1(9)
#define IRQ_DMA1		S3C64XX_IRQ_VIC1(10)
#define IRQ_ONENAND0		S3C64XX_IRQ_VIC1(11)
#define IRQ_ONENAND1		S3C64XX_IRQ_VIC1(12)
#define IRQ_NFC			S3C64XX_IRQ_VIC1(13)
#define IRQ_CFCON		S3C64XX_IRQ_VIC1(14)
#define IRQ_USBH		S3C64XX_IRQ_VIC1(15)
#define IRQ_SPI0		S3C64XX_IRQ_VIC1(16)
#define IRQ_SPI1		S3C64XX_IRQ_VIC1(17)
#define IRQ_IIC			S3C64XX_IRQ_VIC1(18)
#define IRQ_HSItx		S3C64XX_IRQ_VIC1(19)
#define IRQ_HSIrx		S3C64XX_IRQ_VIC1(20)
#define IRQ_RESERVED		S3C64XX_IRQ_VIC1(21)
#define IRQ_MSM			S3C64XX_IRQ_VIC1(22)
#define IRQ_HOSTIF		S3C64XX_IRQ_VIC1(23)
#define IRQ_HSMMC0		S3C64XX_IRQ_VIC1(24)
#define IRQ_HSMMC1		S3C64XX_IRQ_VIC1(25)
#define IRQ_HSMMC2		IRQ_SPI1	/* shared with SPI1 */
#define IRQ_OTG			S3C64XX_IRQ_VIC1(26)
#define IRQ_IRDA		S3C64XX_IRQ_VIC1(27)
#define IRQ_RTC_ALARM		S3C64XX_IRQ_VIC1(28)
#define IRQ_SEC			S3C64XX_IRQ_VIC1(29)
#define IRQ_PENDN		S3C64XX_IRQ_VIC1(30)
#define IRQ_TC			IRQ_PENDN
#define IRQ_ADC			S3C64XX_IRQ_VIC1(31)

#define S3C64XX_TIMER_IRQ(x)	S3C_IRQ(64 + (x))

#define IRQ_TIMER0		S3C64XX_TIMER_IRQ(0)
#define IRQ_TIMER1		S3C64XX_TIMER_IRQ(1)
#define IRQ_TIMER2		S3C64XX_TIMER_IRQ(2)
#define IRQ_TIMER3		S3C64XX_TIMER_IRQ(3)
#define IRQ_TIMER4		S3C64XX_TIMER_IRQ(4)

#ifndef __ASSEMBLY__
void __init vic_init(void *base, unsigned int irq_start,
					 unsigned int vic_sources);
void __init s3c_init_timer_irq(unsigned int parent_irq, unsigned int timer_irq);

void arm_init_irq();
#endif

#endif
