/*
 * led.h
 *
 *  Created on: Jun 29, 2022
 *      Author: pc
 */

#ifndef MAIN_LED_LED_H_
#define MAIN_LED_LED_H_

#define LED_STATUS    		2

#define LED_PIN_SEL  		((1ULL<<LED_STATUS) | (1ULL<<LED_SIGNAL))

#define LED_ON				0
#define LED_OFF				1

enum system_state_t {
	UNKNOW,
	NORMAL,
	WIFI_DISCONNECTED,
	LOCAL_MODE,
	SMARTCONFIG_MODE,
};

void led_init(void);
void led_status_task(void *arg);

#endif /* MAIN_LED_LED_H_ */
