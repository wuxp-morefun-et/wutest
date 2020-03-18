#ifndef __EMV_ERR_CODE_
#define __EMV_ERR_CODE_ 

#define EMV_ERR_INITHASH	                   0x01 //��ϣ�б�δ�ܳ�ʼ��  <D1>
/**<CAPK����*/
#define EMV_ERR_CAPK	                       0x02 // CAPK���� <D4>
#define EMV_ERR_CAPK_NOFOUND		           0x03 //CAPKû���ҵ� <D4>
#define EMV_ERR_CAPK_VERIFY		               0x04 //CAPK��֤���� <D4>
#define EMV_ERR_CAPK_EXPIRE		               0x05 //CAPKʧЧ <D4>


/**<AID����*/
#define EMV_ERR_AID		                       0x06 //AID����
#define EMV_ERR_AID_GETLIST		               0x07 //��ȡAID�ļ���AIDΪ��
#define EMV_ERR_AID_PARAERR		               0x08 //AID��������
#define EMV_ERR_AID_MAXNUM		               0x09 //AID���������

/**<ICS����*/
#define EMV_ERR_ICS		                       0x0A //ICS����
#define EMV_ERR_ICS_READ			           0x0B //ICS��ȡ����������ֹ

/**<IC����������*/
#define VISA_ERR_SWITCH				           0x0C //VISAת����
#define EMV_ERR_ICCOP						   VISA_ERR_SWITCH
#define EMV_ERR_ICCOP_ERR					   0x0D //APDUδ�յ����أ�L1�����Ҫ����Ѱ��
#define EMV_ERR_ICCOP_POWERUP		           0x0E //IC���ϵ����
#define EMV_ERR_ICCOP_POWERDOWN	               0x0F //IC���µ����



/***********************************************************************/
/**<Ӧ��ѡ�����*/
#define EMV_ERR_SELAPP	                      0x10  //Ӧ��ѡ�����    <D1>
/**<Ӧ��ѡ��*/
#define EMV_ERR_SELAPP_PSE			          0x11  //PSEӦ��ѡ�����  <D2>

#define EMV_ERR_SELAPP_PSE_UNSUPPORT          0x12  //��Ƭ��֧��PSEѡ�񣬷�6A81  <D3>
#define EMV_ERR_SELAPP_APPLOCK		          0x13  //Ӧ�ñ�������Ƭ����6284    <D3>
#define EMV_ERR_SELAPP_DIRSEL				  0x14  //Ŀ¼ѡ�����
#define EMV_ERR_SELAPP_PARSE				  0x15	//PPSE��������

/**<AID�б�*/
#define EMV_ERR_AIDLIST		                  0x16  //AID�б�ѡ�����  <D2>

#define EMV_ERR_AIDLIST_LOCK	              0x17  //AIDѡ�񣬿�Ƭ����  <D3>
#define EMV_ERR_AIDLIST_SELOP	              0x18  //AIDѡ�����   <D3>

#define EMV_ERR_ICCOP_SELECTAID	               0x19 //����AIDѡ������ظ�ֵ  <D4>
#define EMV_ERR_ICCOP_SELECTAID_DATA84         0x1A //AIDѡ��84���ݳ��ȴ�       <D4>
#define EMV_ERR_ICCOP_SELECTAID_DATASFI        0x1B //AIDѡ�����ݷ���û��88 SFI  <D4>
#define EMV_ERR_ICCOP_SELECTAID_SFI            0x1C // AIDѡ�����ݷ���SFI����    <D4>
#define EMV_ERR_SELECTAID_NOMATCH			   0X1D	//�ն˺Ϳ�Ƭû��ƥ���AID
#define EMV_ERR_SELECTAID_SW1W2_NO_9000		   0X1E	//Select Aid��Ƭ���ط�9000
#define EMV_ERR_SELECTAID_PARSE_ERROR		   0X1F	//Select Aid��Ƭ�������ݽ�������
#define EMV_ERR_SELECTAID_DATA_MISS			   0X20	//Select Aid��Ƭ��������ȱʧ����
/**************************************************************************/

/**<��ʼ��Ӧ�ô���*/
#define EMV_ERR_INITAPP_CHECKGPO			0x21  //Ӧ�ó�ʼ��ʱGPO�����ȱ�ٱ�Ҫ����   <D2>
#define EMV_ERR_INITAPP_GPO_UNPACK			0x22  //GPO�������ݲ�����ȷ���� <D3>
#define EMV_ERR_INITAPP_GPO_LEN				0x23  //GPO ���ݳ��Ȳ���ȷ <D3>
#define EMV_ERR_INITAPP_GPO_77				0x24  //GPO 77 ģ�岻�ܽ��� <D3>
#define EMV_ERR_INITAPP_GPO_80				0x25  //GPO 77 ģ�岻�ܽ��� <D3>
#define EMV_ERR_INITAPP_GPO_NO82            0x26  //GPO ����77ģ��ʱȱ��82��Ҫ���� <D3>
#define EMV_ERR_INITAPP_GPO_NO94            0x27  //GPO ����77ģ��ʱȱ��84��Ҫ���� <D3>
#define EMV_ERR_INITAPP_GETOP			    0x28  //Ӧ�ó�ʼ��ʱGPO����ز�Ϊ9000����Ϊ6985 <D2>

#define EMV_ERR_INITAPP_PACKPDOL		    0x29  //Ӧ�ó�ʼ��ʱGPO��PDOL���ʱ���� <D2>

#define EMV_ERR_INITAPP_SELACCOUNT			0x2A	//�˻�ѡ�����
#define EMV_ERR_INITAPP						0x2B  //��ʼ��Ӧ�ô���     <D1>

#define EMV_ERR_INITAPP_695				    0x2C  //ICC����6985 <D2>
/**************************************************************************/

/**<��Ӧ�����ݴ���*/
#define EMV_ERR_READAPP					    0x30  //��Ӧ�����ݴ��� <D1>
#define EMV_ERR_READAPP_CDOL1				0x31  //���Ӧ�����ݣ�CDOL1 ȱʧ  <D2>
#define EMV_ERR_READAPP_CDOL2				0x32  //���Ӧ�����ݣ�CDOL2 ȱʧ  <D2>
#define EMV_ERR_READAPP_EXPIREDATE		    0x33  //���Ӧ�����ݣ�Ӧ��ʧЧ����ȱʧ�����     <D2>
#define EMV_ERR_READAPP_APPEFFECTDATE	    0x34  //���Ӧ�����ݣ�Ӧ����Ч����ȱʧ����� <D2>
#define EMV_ERR_READAPP_START				0x35  //��ȡӦ�����ݣ�����AFL����ʼλΪ0����IC���� <D2>
#define EMV_ERR_READAPP_PARAM			    0x36  //��ȡӦ�����ݣ�����AFL����ʼλ���ڽ���λ����IC���� <D2>
#define EMV_ERR_READAPP_ICCOP_READ		    0x37  //RR��Read Record��ʱ�������ز�Ϊ9000�� <D2>
#define EMV_ERR_READAPP_SFI				    0x38  //RR ����� ֻ��70ģ��ʱ��SFI�Ż�С�ڵ���10 <D2>
#define EMV_ERR_READAPP_PAN				    0x39  //RR ���ݼ�飬��ȡIC���п��ų���   <D2>
#define EMV_ERR_READAPP_TERM_ON_NEXT_APDU   0x3A  //RR Terminate on Next RA

/**************************************************************************/
/**<�ѻ���֤����*/
#define EMV_ERR_OFFAUTH					    0x40  //�ѻ���֤ʧ��  <D1>
/**<SDA  */
#define EMV_ERR_OFFAUTH_SDA_FAIL            0x41 //SDAʧ��  <D2>
#define EMV_ERR_OFFAUTH_SM_SDA_FAIL         0x42 // SM SDA ʧ��    <D2>
/**<DDA  */
#define EMV_ERR_OFFAUTH_DDA_FAIL		    0x43 // DDAʧ�� <D2>
#define EMV_ERR_OFFAUTH_SM_DDA_FAIL         0x44 // SM DDA ʧ�� <D2>
/*< CDA*/
#define EMV_ERR_OFFAUTH_CDA_PREFORM_FAIL    0x45 //CDA��Ԥ����ʧ�� <D2>
#define EMV_ERR_OFFAUTH_SM_CDA_PREFORM_FAIL 0x46  // SM CDA��Ԥ����ʧ�� <D2>

#define EMV_ERR_OFFAUTH_CAPK				0x47 // ��ȡCA��Կʧ�� <D3>
#define EMV_ERR_OFFAUTH_ISPK				0x48 //�ָ������й�Կʧ�� <D3>
#define EMV_ERR_OFFAUTH_ICPK				0x49 //�ָ�IC����Կʧ�� <D3>
#define EMV_ERR_OFFAUTH_ISPK_CHECK			0x4A //�ָ�����֤��̬ǩ������<D3>
#define EMV_ERR_OFFAUTH_SDATA				0x4B //�ָ�����֤��̬��֤����ʧ��<D3>

#define QPBOC_ERR_SM                        0x4C   // QPBOC�����SM���ѻ���֤ʧ�ܣ����ն�֧��PBOC����ת��������  <D1>
//#define QPBOC_ERR_TURN_PBOC                 0x4D   //QPBOC �����GPO������9F26������֧��PBOC����תPBOC <D1>
#define EMV_ERR_OFFAUTH_SIGNDYNAPPDT		0x4E  //�ڲ���֤��������77����ǩ���Ķ�̬Ӧ�����ݣ�������ֹ <D4>

/**<�ֿ�����֤����*/
#define EMV_ERR_CHVERIFY					0x50  //�ֿ�����֤����  <D1>
#define EMV_ERR_CHVERIFY_CVMFOMAT		    0x51  //CVM�б��ȴ��󣬽�����ֹ <D2>

/**<��Ϊ��������*/
#define EMV_ERR_ACT_ANALY_TAA			    0x60  //��Ϊ�����У�������ֹ	 <D1>
#define EMV_ERR_ACT_ANALY_GAC               0x61   //GAC ����ز�Ϊ9000 <D2>
#define EMV_ERR_ACT_GAC_DATA                0x62    //GAC �������ݸ�ʽ����ȷ <D2>
#define EMV_ERR_TAA_CID		                0x63  //����GAC����CID�ȼ������ն���������AAC��ARQC������TC,������ֹ ����AAC����Ƭ����ARQC��TC,������ֹ ����AAC����Ƭ����ARQC��TC,������ֹ��
#define EMV_ERR_TAA_NOCID		            0x64  //GAC����������û��CID��������ֹ <D3>
#define EMV_ERR_TAA_NOATC		            0x65  //GAC����������û��ATC��������ֹ <D3>
#define EMV_ERR_PARASE_NO_91                0x66 // �����������Զ�������ʱû��91 <D3>
#define EMV_ERR_PARASE_91_LEN               0x67 //�������Զ�������91 �ĳ��Ȳ���ȷ<D3>
//#define EMV_ERR_GAC_CDA						0x68 // cdaʧ��  <D2>
#define EMV_ERR_GAC_CDA_ICPK                0x68 // CDA �ָ�IC����Կʧ�� <D3>
#define EMV_ERR_GAC_CDA_ICPK_LEN            0x69  //CDAʱIC����Կ���Ȳ���ȷ <D3>
#define EMV_ERR_GAC_CDA_CERT                0x6A // CDA֤���ʽ���ʧ�� <D3>
#define EMV_ERR_GAC_SIGAPPDATA				0x6B//9F4B��̬ǩ�����ݻ�ȡʧ��
#define EMV_ERR_GAC_ERR_AC					0x6C//�������ݻ�ȡʧ��
#define EMV_ERR_GAC_CID_AAR					0x6C//CID��ɵ�AAR��ֹ

/**< ��ɴ���*/
#define EMV_ERR_COMPLETE					0x70 //��ɴ���ʧ�� <d1>
#define EMV_ERR_COMPLETE_ADVICE				0x71 //�ն�������������ǿ��֪ͨ��������ʧ�ܣ�������ֹ<d2>
#define EMV_ERR_COMPLETE_GAC				0x72  //�ڶ���GAC���ز�Ϊ9000  <D2>        
#define EMV_ERR_COMPLETE_EC_NO_SCRIPT       0x73 //�����ֽ�Ȧ�棬��ѯ�İ���������û�нű��·���������ֹ <D2>
#define EMV_ERR_COMPLETE_CID_INTERRUPT      0x74  //��Ƭ���ķ��ؽ�����ֹ��������ֹ <D2>
#define EMV_ERR_COMPLETE_PARASE_GAC			0x75 // GAC����ʧ�� <D2>

/**< qpboc Ԥ����*/
#define QPBOC_ERR_PRE			            0x80  //qpboc Ԥ���� <D1>
#define QPBOC_ERR_PRE_AMTLIMIT		        0x81  //��Ȩ��������ն˷ǽӴ������޶�<D2>
#define QPBOC_ERR_PRE_NO_AMT                0x82  //������ȡ�� <D2>
/**< qpbocӦ��ѡ��*/ 
#define QPBOC_ERR_APPSEL		            0x8B  //QPBOC��Ӧ��ѡ����� <D1>
#define QPBOC_ERR_PPSE                      0x83  //�ǽ�Ŀ¼ѡ��PPSEʧ�� <D2>
#define QPBOC_ERR_AMT_CHECK                 0x84   // ���׽����ʧ�� <D2>

#define QPBOC_ERR_APPSEL_PPSE	            0x87  //QPBOCӦ��ѡ����Ŀ¼ѡ�񷵻ز�Ϊ9000 <D3>
#define QPBOC_ERR_APPSEL_MISSBFOC		    0x88  //Ӧ��ѡ��ʧBF0C
#define QPBOC_ERR_APPSEL_UNPACKBFOC		    0x89  //Ӧ��ѡ��û�д��BF0C
#define QPBOC_ERR_APPSEL_UNPACK61		    0x8A  //QPBOC����Ӧ��ѡ����û�д��61
#define QPBOC_ERR_APPSEL_PPSE6283	        0x8B  //QPBOCӦ��ѡ���з���6283
/**< qpbocӦ�ó�ʼ��*/
#define	QPBOC_ERR_INITAPP                   0x90   //QPBOCӦ�ó�ʼ��ʧ�� <D1>
#define QPBOC_ERR_INITAPP_PACKPDOL	        0x91  //QPboc�д��DOL���ݳ��� <D2>
#define QPBOC_ERR_INITAPP_PDOLNO9F66	    0x92  //QPBOC��Dol����û��9F66 <D3>
#define QPBOC_ERR_INITAPP_GETGPO            0x93    //��ȡGPO����ʧ�� <D2>
#define QPBOC_ERR_INITAPP_CHECK_GPO         0x94  // ���GPO����ʧ�� <D2>
#define QPBOC_ERR_INITAPP_GPO6984		    0x95  //QPboc��GPO����6984��������ֹ <D3>
#define QPBOC_ERR_INITAPP_GPOMISSING82	    0x96  //QPBOC��GPO��û��82<D4>
#define QPBOC_ERR_INITAPP_GETGPO_74         0x97  //QPBOC��GPO��77ģ����74�������� <D4>
#define QPBOC_ERR_INITAPP_GPO6985		    0x98  //QPboc��GPO����6985��������ֹ <D3>
#define QPBOC_ERR_INITAPP_GPO6986		    0x99  //QPboc��GPO����6986��������ֹ <D3>
#define QPBOC_ERR_INITAPP_GPONOLEN		    0x9A  //QPboc��GPO����Ӧ<D3>


/**< �������ִ���*/
#define EMV_ERR_OFFAUTH_NO_AID_INDEX		0xA0  //�ѻ���֤�лָ�CAPKʱ��Ƭ��û��AID����CAPK ����  <D4>
#define EMV_ERR_OFFAUTH_GETINFO_FAIL		0xA1  //��ȡ������������Ϣʧ��   <D4>
#define EMV_ERR_OFFAUTH_RECOVE_ISPK			0xA2  //�ָ������й�Կʧ��  <D4>
#define EMV_ERR_OFFAUTH_CHECK				0xA3  //���ָ������еĸ����ȷ <D4>
#define EMV_ERR_OFFLINE_CONNECTPK			0xA4  //����Կ��һ����ʽ���ӳ���<D4>
//#define EMV_ERR_OFFAUTH_SIGNDYNAPPDT		0xA5  //�ڲ���֤��������77����ǩ���Ķ�̬Ӧ�����ݣ�������ֹ <D4>
#define EMV_ERR_OFFAUTH_SDA_DATA93          0xA6  //�ָ�����֤��̬��֤����ʱȱ��93 <D4>
#define EMV_ERR_OFFAUTH_DDA_INTERAUTH		0xA7 //�ڲ���֤�����ʧ�ܣ�������ֹ <D4>
#define EMV_ERR_OFFAUTH_DDA_INTERAUTH_FORMAT		0xA8 //�ڲ���֤��������ģ���ʽ���ԣ�������ֹ <D4>
#define EMV_ERR_OFFAUTH_DDA_INTERAUTH_ANALY			0xA9 //�ڲ���֤�������ݲ��ܽ�����TLV��ʽ <D4>
#define EMV_ERR_OFFAUTH_DDA_INTERAUTH_DATA80_LEN	0xAA //�ڲ���֤��������80ģ�����ݳ���Ϊ0��������ֹ <D4>
#define EMV_ERR_OFFAUTH_DDOL_MIS					0xAB //�ն˺Ϳ�Ƭͬʱȱ��DDOL <D4>
#define EMV_ERR_OFFAUTH_IC_DDOL9F37					0xAC    //��ƬDDOLȱ��9F37 <D4>

/**< �ѻ���֤ */
//#define QPBOC_ERR_SM                        0xB0   // QPBOC�����SM���ѻ���֤ʧ�ܣ����ն�֧��PBOC����ת��������  <D1>

#define QPBOC_ERR_TURN_PBOC                 0xB1   //QPBOC �����GPO������9F26������֧��PBOC����תPBOC <D1>
#define QPBOC_ERR_FDDA_DDOL_MIS9F37         0xB2//FDDAʱ׼��DDOL��ʱ��ȱ��9F37 <D1>
#define QPBOC_ERR_FDDA_DDOL_MIS9F02         0xB3//FDDAʱ׼��DDOL��ʱ��ȱ��9F02 <D1>
#define QPBOC_ERR_FDDA_DDOL_MIS5F2A         0xB4//FDDAʱ׼��DDOL��ʱ��ȱ��5F2A(���׻��Ҵ���) <D1>
#define QPBOC_ERR_FDDA_DDOL_MIS9F69         0xB5//FDDAʱ׼��DDOL��ʱ��ȱ��9F69(��Ƭ��֤�������) <D1>

//�����ֽ����
#define EMV_ERR_INITAPP_EC_INDICATOR_QUIT   0xC0  // �������ֽ𿨽������Ͳ�ƥ����ߵ����ֽ�Ӧ��ѡ���˳� <D2>
#define	EMV_ERR_EC_NO9F74				    0xC1  //ָʾEC����EC�����д��벻����  <D2>
#define EMV_ERR_EC_BLACKLIST			    0xC2  //Ӧ�����ݼ��ʱ��EC�ں�������  <D2>
#define EMV_ERR_EC_lEN9F74                  0xC3  //Ӧ�����ݼ��ʱ��9F74�ĳ��Ȳ�Ϊ6 <D2>
#define EMV_ERR_EC_NO9F79                   0xC4  //�����ֽ��У�ȱ��9F79��� <D2>
#define EMV_ERR_EC_NO9F6D					0xC5  //�����ֽ��У�ȱ��9F6D�����ֽ�������ֵ<D2>
#define EMV_ERR_SIMPLE_PROC_EC              0xC6  // ���������Ǽ������̣����Ǵ������ֽ� <D1>
#define EMV_ERR_EC_TMLIMIT					0xC7  //�����ֽ����

/**< ��Ӧ�ó�ʼ�����ȡ������־ */
#define PBOC_ERR_READLOG_NO_BF0C               0xE0  // PBOC��ȡ������־����Ȧ����־��û��BF0C���޽�����־��������ֹ  <D2>
#define PBOC_ERR_READLOG_NO_9F4D               0xE1  // PBOC��ȡ������־��û��9F4D���޽�����־��������ֹ   <D2>
#define PBOC_ERR_READLOG_9F4D_SFI              0xE2  // PBOC��ȡ������־,��ȡ9F4D��SFI��Χ����11��30֮�䣬������ֹ<D2>
#define PBOC_ERR_READLOG_9F4F_FORMAT           0xE3  // PBOC��ȡ������־,get 9F4F��ʽ�������׸�ʽ��<D2>
#define PBOC_ERR_READLOG_NO_DF4D               0xE4  // PBOC��ȡȦ����־��û��9F4D���޽�����־��������ֹ<D2>
#define PBOC_ERR_READLOG_DF4D_SFI              0xE5  // PBOC��ȡȦ����־,��ȡ9F4D��SFI��Χ����11��30֮�䣬������ֹ<D2>
#define PBOC_ERR_READLOG_DF4F_FORMAT           0xE6  // PBOC��ȡȦ����־,get 9F4F��ʽ�������׸�ʽ��<D2>

/**< ������ʾ�����*/
#define EMV_ERR_PAN_QUIT                        0xF0	// ��ʾPANȷ��ʱ���û�ѡ��ȷ��ȡ��   <D1>
#define EMV_ERR_SIMPLE_PROC                     0xF1	// ��ȡӦ�����ݽ������ж�Ϊ�߼������� <D1>
#define EMV_ERR_AMT_QUIT                        0xF2	// ��ʾ���뽻�׽��ʱ���û�ѡ��ȡ��   <D1>
#define EMV_ERR_EC_NOBINDLOAD                   0xF3	// �����ֽ��ָ���˻����ѻ���֤�󷵻� <D1>    
#define EMV_ERR_ONLY_EC_NOBINDLOAD              0xF4	// �������ֽ��ָ���˻����ѻ���֤�󷵻� <D1> 
#define PAYPASS_ERR_CCC_CHECK					0xF5	// PAYPASS CCC ��������
#define PAYPASS_ERR_RRP_CHECK					0xF6	// PAYPASS RRP ��������
#define EC_ONLY_ERR_RET							-100	// �жϵ��������ֽ𷵻�

#endif
