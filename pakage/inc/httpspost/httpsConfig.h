#ifndef __HTTPS_CONFIG_H__
#define __HTTPS_CONFIG_H__


/* �Ƿ�����SSL��1��ʾʹ�ã���HTTPS��0��ʾ��ʹ�ã���HTTP */
#define       SSL_ENABLE                1


/* �Ƿ�����SSL���ԣ�1��ʾʹ�ã�������һЩ����log����ȻһЩ����log�Ǳ�Ȼ��ӡ������ */
#define       SSL_DEBUG_ENABLE          0

#if   SSL_DEBUG_ENABLE
#define SSL_DEBUG(x)           (x)
#else
#define SSL_DEBUG(x)
#endif

//#SSL_ERROR(x)                  (x)


















#endif

