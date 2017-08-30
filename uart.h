# ifndef __uart__h
# define __uart__h
# include <eint_t.h>
# define UART_BAUDRATE 38400
# define BAUD_PRESCALE (16000000/16/UART_BAUDRATE) - 1
# include "micro.h"
void uart_init(void);
void uart_send_byte(mdl_u8_t);
void uart_recv_byte(mdl_u8_t*);
void uart_send_w16(mdl_u16_t);
void uart_recv_w16(mdl_u16_t*);

void uart_print(char*);
void uart_println(char*);
# endif /*__uart__h*/
