#ifndef _TCPSOCKET_H_
#define _TCPSOCKET_H_
#include<WinSock2.h>   //windowsƽ̨�������ͷ�ļ�
#pragma comment(lib,"ws2_32.lib")  //���ļ�     Socket API��ws2_32.dllʵ��  APIӦ�ó����̽ӿ�
#include<stdbool.h>
#include<stdio.h>
#define PORT 8888
// dll  ��̬���ӿ�
#define err(errMsg) printf("[line:%d] %s failed code %d", __LINE__, errMsg, WSAGetLastError())

//�������
bool init_Socket();
//�ر������
bool close_Socket();
//����������socket
SOCKET createServerSocket();   //SOCKET �޷������� �ĸ��ֽ�
//socket����һ������

//�����ͻ���socket
SOCKET createClientSocket(const char* ip);



#endif 