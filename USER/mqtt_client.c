#include "mqtt_client.h"
#include "lwip/opt.h"
#include "lwip_comm.h"
#include "lwip/lwip_sys.h"
#include "lwip/api.h"
#include "includes.h"
#include "transport.h"

//TCP�ͻ�������
#define MQTT_CLIENT_PRIO		6
//�����ջ��С
#define MQTT_CLIENT_STK_SIZE	300
//�����ջ
OS_STK MQTT_CLIENT_TASK_STK[MQTT_CLIENT_STK_SIZE];

static void mqtt_client_thread(void *arg)
{
	while(1)
	{
		transport_open(IP_ADDR,MQTT_REMOTE_PORT);
		OSTimeDlyHMSM(0,0,0,10);  //��ʱ10ms
	}
}

INT8U mqtt_client_init(void)
{
	INT8U res;
	OS_CPU_SR cpu_sr;
	
	OS_ENTER_CRITICAL();	//���ж�
	res = OSTaskCreate(mqtt_client_thread,(void*)0,(OS_STK*)&MQTT_CLIENT_TASK_STK[MQTT_CLIENT_STK_SIZE-1],MQTT_CLIENT_PRIO); //����TCP�ͻ����߳�
	OS_EXIT_CRITICAL();		//���ж�
	
	return res;
}
