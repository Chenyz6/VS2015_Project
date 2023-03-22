#ifndef _TCPSOCKET_H_
#define _TCPSOCKET_H_
#include<WinSock2.h>   //windows平台的网络库头文件
#pragma comment(lib,"ws2_32.lib")  //库文件     Socket API在ws2_32.dll实现  API应用程序编程接口
#include<stdbool.h>
#include<stdio.h>
#define PORT 8888
// dll  动态链接库
#define err(errMsg) printf("[line:%d] %s failed code %d", __LINE__, errMsg, WSAGetLastError())

//打开网络库
bool init_Socket();
//关闭网络库
bool close_Socket();
//创建服务器socket
SOCKET createServerSocket();   //SOCKET 无符号整型 四个字节
//socket就是一个整形

//创建客户端socket
SOCKET createClientSocket(const char* ip);



#endif 