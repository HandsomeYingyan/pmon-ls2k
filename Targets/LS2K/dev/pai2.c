void pai2_init(void)
{
#ifdef SATA_TX_REVERT
	*(volatile int *)0xbfe10450 |= (1<<9);
#endif

#ifdef SEL_HDA
	*(volatile int *)0xbfe10420 &= ~(7<<4);
	*(volatile int *)0xbfe10420 |= (1<<4);
#endif

#ifdef LCD_EN
	*(volatile int *)0xbfe10500 &= ~(1<<3);
	*(volatile int *)0xbfe10510 |= (1<<3);


//enalbe pwm 0
	*(volatile int *)0xbfe10420 |=(1<<12);
	*(volatile int *)0xbfe02004 = 150;
	*(volatile int *)0xbfe02008 = 1500;
	*(volatile int *)0xbfe0200c = 1;
#endif

#ifdef SEL_CAN

	*(volatile int *)0xbfe10420 |=(3<<16);

#endif

//reset 9022a and phy

#ifdef GPIO36_RESET_PHY	
	*(volatile int *)0xbfe10420 &= ~(1<<20);
	*(volatile int *)0xbfe10504 &= ~(1<<4);
	delay(500);
	*(volatile int *)0xbfe10514 &= ~(1<<4);
	delay(3000);
	*(volatile int *)0xbfe10514;
	delay(1000);
	*(volatile int *)0xbfe10514 &= ~(1<<4);
	delay(1000);
	*(volatile int *)0xbfe10514 &= ~(1<<4);
	delay(4000);
	*(volatile int *)0xbfe10514;
	*(volatile int *)0xbfe10514 |= (1<<4);
#endif

// set touchscreen type of irq
	{
		unsigned int val;
		val=*(volatile int *)0xffffffffbfe11470;
		printf("470=0x%x\n", val);
		val =*(volatile int *)0xffffffffbfe11474;
		printf("474=0x%x\n", val);

		*(volatile int *)0xffffffffbfe11470 &= ~(1<<29);	
		*(volatile int *)0xffffffffbfe11474 |= (1<<29);	
		printf("after write\n");
		val=*(volatile int *)0xffffffffbfe11470;
		printf("470=0x%x\n", val);
		val =*(volatile int *)0xffffffffbfe11474;
		printf("474=0x%x\n", val);
	
	}
}
