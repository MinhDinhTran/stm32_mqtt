#ifndef __MQTT_CLIENT_H
#define __MQTT_CLIENT_H
#include "sys.h"
#include "includes.h"

#define MQTT_REMOTE_PORT		8087	//����Զ��������IP��ַ
#define IP_ADDR					"192.168.1.136"
INT8U mqtt_client_init(void);  //tcp�ͻ��˳�ʼ��(����tcp�ͻ����߳�)
#endif
