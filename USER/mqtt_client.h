#ifndef __MQTT_CLIENT_H
#define __MQTT_CLIENT_H
#include "sys.h"
#include "includes.h"

#define MQTT_REMOTE_PORT		1883	//����Զ��������IP��ַ
#define IP_ADDR					"192.168.203.132"
INT8U mqtt_client_init(void);  //tcp�ͻ��˳�ʼ��(����tcp�ͻ����߳�)
#endif
