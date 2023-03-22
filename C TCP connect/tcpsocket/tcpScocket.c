#include "tcpScocket.h"
#include <windows.h>
#include <stdio.h>

bool init_Socket()
{
	// windows socket async windows异步套接字
	// parm 参数 parm1:请求的socket版本 2.2 2.1 1.0  parm2：传出参数
	WSADATA wsadata;  //此结构用于存储调用WSAStartup返回的 Windows 套接字初始化数据
	if(0 != WSAStartup(MAKEWORD(2, 2), &wsadata))  //创建网络库
	// 如果成功 WSAStartup会返回0
	{
		printf("WSAStartup failed code %d", WSAGetLastError()); //WSAGetLastError()函数返回上次发生的网络错误
		return false;
	}
	
	
	
	return true;
}

bool close_Socket()
{
	if (0 != WSACleanup())
	{
		printf("WSACleanup failed code %d", WSAGetLastError());
		return false;
	}
	return true;
}

SOCKET createServerSocket()  //SOCKET  整型四个字节  unsigned int
{
	//1 创建空的socket
	//param1：af 地址协议族 ipv4 ipv6
	//param2：type 传输协议类型 流式套接字 数据报
	//param3：protocl 使用具体的某个传输协议
	SOCKET fd = socket(AF_INET, SOCK_STREAM, IPPROTO_TCP); //流式套接字一定是TCP
	//socket 返回值是SOCKET												   
	//#define SOCK_STREAM     1               /* stream socket */
	//#define SOCK_DGRAM      2               /* datagram socket */
	//  AF_INET---ipv4   AF_INET6---ipv6
	if (fd == INVALID_SOCKET)  //如果错误 返回INVALID_SOCKET
	{
		err("socket");
		return INVALID_SOCKET;
	}
	//2.给socket绑定ip地址和端口号  
	struct sockaddr_in addr;
	/*typedef struct sockaddr_in {
		--short   sin_family;  地址协议族
		ADDRESS_FAMILY sin_family;
		--USHORT sin_port;
		--IN_ADDR sin_addr;
		CHAR sin_zero[8];
	} SOCKADDR_IN, *PSOCKADDR_IN;*/
	addr.sin_family = AF_INET;
	addr.sin_port = htons(PORT);  //网络字节序--小端 低-低 本地字节序--大端
	//htons是把机器上的整数转换成网络字节序
	addr.sin_addr.S_un.S_addr = ADDR_ANY; //inet_addr("127.0.0.1");
	//ADDR_ANY就是指定地址为0.0.0.0的地址, 本地任意ip

	//inet_addr将一个点分十进制的IP转换成一个长整型数（u_long类型）
	//sin_addr  是个结构体
	if (SOCKET_ERROR == bind(fd, &addr, sizeof(addr)))
	{
		err("bind");
		return false;
	}
	//3.监听电话
	listen(fd, 20);  //最多听10个
	return fd;
}
SOCKET createClientSocket(const char* ip)
	{
		//1 创建空的socket
		//param1：af 地址协议族 ipv4 ipv6
		//param2：type 传输协议类型 流式套接字 数据报
		//param3：protocl 使用具体的某个传输协议
		SOCKET fd = socket(AF_INET, SOCK_STREAM, IPPROTO_TCP); //流式套接字一定是TCP
		if (fd == INVALID_SOCKET)  //如果错误 返回INVALID_SOCKET
		{
			err("socket");
			return INVALID_SOCKET;
		}
		//2.与服务器建立连接
		struct sockaddr_in addr;
		addr.sin_family = AF_INET;
		addr.sin_port = htons(PORT);  //网络字节序--小端 低-低 本地字节序--大端
									  //htons是把机器上的整数转换成网络字节序
		addr.sin_addr.S_un.S_addr = inet_addr(ip);
		if (INVALID_SOCKET == connect(fd, (struct sockaddr*)&addr, sizeof(addr)))
		{
			err("connect");
			return false;
		}

		return fd;
	}