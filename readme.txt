����һ�������Ʒ����������Ŀ����Ҫ������ʵ��https post���ܣ����ڳ��׮��web server�������ݣ���������Ӧ���ݡ�




///////////////////////////////////////////////////////////////////////////
ʹ�÷�����
1������openssl���룬libcrypto.a��libssl.a
2������httpspost���룬�õ�libhttpspost_arm.so
3������test���룬�õ�exsample_arm
4����libhttpspost_arm.so��exsample_arm�ϴ����ն�
5�����û�������LD_LIBRARY_PATH
6��ִ��exsample_arm



/////////////////////////////////////////////////////////////////////////////
Ŀ¼˵����

doc:
��ż����ĵ�

openssl:
��openssl���ļ�����Ϊx86���arm�棬�ֱ����make���ɵõ�libcrypto.a��libssl.a



httpspost:
��httpspost��Դ�룬��װ�˿�openssl��������HTTPͷ����ά��socket���ӵȡ�
����Ŀ¼��make,Ĭ���Ǳ���arm�汾,libhttpspost_arm.so
ʹ��make CC=gcc������x86�汾��libhttpspost_x86.so



test:
�ǲ��Դ��룬exsample.cpp
����Ŀ¼��make,Ĭ���Ǳ���arm�汾,exsample_arm
ʹ��make CC=gcc������x86�汾��exsample_x86


pakage:
���ṩ����粿�ŵİ�������ͷ�ļ��Լ���̬��


curl��
��http�⣬��û��ʹ�õ�����ʱ��ţ��Ա���
























