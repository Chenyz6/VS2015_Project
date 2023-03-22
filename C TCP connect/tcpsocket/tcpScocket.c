#include "tcpScocket.h"
#include <windows.h>
#include <stdio.h>

bool init_Socket()
{
	// windows socket async windows�첽�׽���
	// parm ���� parm1:�����socket�汾 2.2 2.1 1.0  parm2����������
	WSADATA wsadata;  //�˽ṹ���ڴ洢����WSAStartup���ص� Windows �׽��ֳ�ʼ������
	if(0 != WSAStartup(MAKEWORD(2, 2), &wsadata))  //���������
	// ����ɹ� WSAStartup�᷵��0
	{
		printf("WSAStartup failed code %d", WSAGetLastError()); //WSAGetLastError()���������ϴη������������
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

SOCKET createServerSocket()  //SOCKET  �����ĸ��ֽ�  unsigned int
{
	//1 �����յ�socket
	//param1��af ��ַЭ���� ipv4 ipv6
	//param2��type ����Э������ ��ʽ�׽��� ���ݱ�
	//param3��protocl ʹ�þ����ĳ������Э��
	SOCKET fd = socket(AF_INET, SOCK_STREAM, IPPROTO_TCP); //��ʽ�׽���һ����TCP
	//socket ����ֵ��SOCKET												   
	//#define SOCK_STREAM     1               /* stream socket */
	//#define SOCK_DGRAM      2               /* datagram socket */
	//  AF_INET---ipv4   AF_INET6---ipv6
	if (fd == INVALID_SOCKET)  //������� ����INVALID_SOCKET
	{
		err("socket");
		return INVALID_SOCKET;
	}
	//2.��socket��ip��ַ�Ͷ˿ں�  
	struct sockaddr_in addr;
	/*typedef struct sockaddr_in {
		--short   sin_family;  ��ַЭ����
		ADDRESS_FAMILY sin_family;
		--USHORT sin_port;
		--IN_ADDR sin_addr;
		CHAR sin_zero[8];
	} SOCKADDR_IN, *PSOCKADDR_IN;*/
	addr.sin_family = AF_INET;
	addr.sin_port = htons(PORT);  //�����ֽ���--С�� ��-�� �����ֽ���--���
	//htons�ǰѻ����ϵ�����ת���������ֽ���
	addr.sin_addr.S_un.S_addr = ADDR_ANY; //inet_addr("127.0.0.1");
	//ADDR_ANY����ָ����ַΪ0.0.0.0�ĵ�ַ, ��������ip

	//inet_addr��һ�����ʮ���Ƶ�IPת����һ������������u_long���ͣ�
	//sin_addr  �Ǹ��ṹ��
	if (SOCKET_ERROR == bind(fd, &addr, sizeof(addr)))
	{
		err("bind");
		return false;
	}
	//3.�����绰
	listen(fd, 20);  //�����10��
	return fd;
}
SOCKET createClientSocket(const char* ip)
	{
		//1 �����յ�socket
		//param1��af ��ַЭ���� ipv4 ipv6
		//param2��type ����Э������ ��ʽ�׽��� ���ݱ�
		//param3��protocl ʹ�þ����ĳ������Э��
		SOCKET fd = socket(AF_INET, SOCK_STREAM, IPPROTO_TCP); //��ʽ�׽���һ����TCP
		if (fd == INVALID_SOCKET)  //������� ����INVALID_SOCKET
		{
			err("socket");
			return INVALID_SOCKET;
		}
		//2.���������������
		struct sockaddr_in addr;
		addr.sin_family = AF_INET;
		addr.sin_port = htons(PORT);  //�����ֽ���--С�� ��-�� �����ֽ���--���
									  //htons�ǰѻ����ϵ�����ת���������ֽ���
		addr.sin_addr.S_un.S_addr = inet_addr(ip);
		if (INVALID_SOCKET == connect(fd, (struct sockaddr*)&addr, sizeof(addr)))
		{
			err("connect");
			return false;
		}

		return fd;
	}