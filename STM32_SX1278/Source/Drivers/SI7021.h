//=====================================================================
// �ļ�����: SI7021.h
// оƬ����: STM32F103T8U6                                          
// ��������: Keil, Windows 7                                                                 
// ������: ��ʪ�ȴ�������������
// ��д��Ա: Ļ��ɽ��                                                                       
// ��ϵ��ʽ: QQ:254262132  Email:flex@163.com  
//==============�汾��Ϣ===============================================
// ��    ��  -----  ��    ��  -----  ��    ��
// 2013.07.25   ��   V1.0     ����    ��ʼ�汾 
//======================================================================
#ifndef __SI7021_H
#define __SI7021_H
 #include <stm32f10x.h>

#define	WRITE_CMD		         0x80
#define	READ_CDM		         0x81
#define	SALVE_ADDR		       0x80

#define	HUMI_HOLD_MASTER	   0xE5
#define	TEMP_HOLD_MASTER	   0xE3
		
#define	HUMI_NOHOLD_MASTER	 0xF5
#define	TEMP_NOHOLD_MASTER   0xF3
//===========================  ��������   =============================
u8 SI7021_Read_Data(u8 Model,u16 *temp);
u8 SI7021_Read(u16 *temp,u16 *humi);
#endif

//======================================================================
//                                   0ooo
//                          ooo0     (   ) 
//                          (   )     ) /
//                           \ (     (_/
//                            \_) 
//======================================================================

